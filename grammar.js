module.exports = grammar({
  name: 'nftables',

  rules: {
    config_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.comment,
      $.flush_command,
      $.variable_definition,
      $.table_declaration,
      $.chain_declaration,
      $.chain_definition,
      $.rule_definition
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    comment: $ => /#.*/,

    flush_command: $ => seq(
      'flush',
      choice(
        'ruleset'
      )
    ),

    variable_definition: $ => seq(
      "define",
      $.identifier,
      "=",
      choice(
        $.string,
        $.ip_address
      )
    ),

    table_declaration: $ => seq(
      'table',
      optional($.table_family),
      $.identifier,
      $.block
    ),

    table_family: $ => choice(
      "arp",
      "bridge",
      "inet",
      "ip",
      "ip6",
      "netdev"
    ),

    chain_declaration: $ => seq(
      'chain',
      $.identifier,
      $.block
    ),

    chain_definition: $ => seq(
      $.chain_type,
      $.chain_hook,
      // optional($.device)
      $.chain_priority,
      ';',
      optional(seq($.chain_policy, ';'))
    ),

    chain_type: $ => seq(
      'type',
      $.chain_type_value
    ),

    chain_type_value: $ => choice(
      'filter',
      'nat',
      'route'
    ),

    chain_hook: $ => seq(
      'hook',
      $.chain_hook_value
    ),

    chain_hook_value: $ => choice(
      'ingress',
      'prerouting',
      'input',
      'forward',
      'output',
      'postrouting',
      'egress'
    ),

    chain_priority: $ => seq(
      'priority',
      choice(
        $.chain_priority_value,
        $.number
      )
    ),

    chain_priority_value: $ => choice(
      'raw',
      'srcnat',
      'filter',
      'dstnat'
    ),

    chain_policy: $ => seq(
      'policy',
      $.default_policy
    ),

    default_policy: $ => choice(
        'accept',
        'drop'
    ),

    rule_definition: $ => seq(
      repeat($.packet_criteria),
      $.rule_action
    ),

    packet_criteria: $ => seq(
      repeat1($._match),
      choice(
        $.variable,
        $.value
      )
    ),

    rule_action: $ => choice(
      'accept',
      'drop',
      'reject',
      'jump',
      'goto'
    ),

    _match: $ => choice(
      'iif',
      'oif',
      'inet',
      'ip',
      'ip6',
      'saddr',
      'daddr'
    ),

    value: $ => choice(
      'exists'
    ),

    identifier: $ => /[a-zA-Z]+/,
    variable: $ => seq('$', $._varname),
    _varname: $ => /[a-zA-Z]+/,
    string: $ => /".*"/,
    number: $ => /-?[0-9]+/,
    ip_address: $ => /(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)(\/(?:3[0-2]|2[0-9]|1[0-9]|[0-9]))?/,
  }
})
