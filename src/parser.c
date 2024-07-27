#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_comment = 3,
  anon_sym_flush = 4,
  anon_sym_ruleset = 5,
  anon_sym_define = 6,
  anon_sym_EQ = 7,
  anon_sym_table = 8,
  anon_sym_arp = 9,
  anon_sym_bridge = 10,
  anon_sym_inet = 11,
  anon_sym_ip = 12,
  anon_sym_ip6 = 13,
  anon_sym_netdev = 14,
  anon_sym_chain = 15,
  anon_sym_SEMI = 16,
  anon_sym_type = 17,
  anon_sym_filter = 18,
  anon_sym_nat = 19,
  anon_sym_route = 20,
  anon_sym_hook = 21,
  anon_sym_ingress = 22,
  anon_sym_prerouting = 23,
  anon_sym_input = 24,
  anon_sym_forward = 25,
  anon_sym_output = 26,
  anon_sym_postrouting = 27,
  anon_sym_egress = 28,
  anon_sym_priority = 29,
  anon_sym_raw = 30,
  anon_sym_srcnat = 31,
  anon_sym_dstnat = 32,
  anon_sym_policy = 33,
  anon_sym_accept = 34,
  anon_sym_drop = 35,
  anon_sym_reject = 36,
  anon_sym_jump = 37,
  anon_sym_goto = 38,
  anon_sym_iif = 39,
  anon_sym_oif = 40,
  anon_sym_saddr = 41,
  anon_sym_daddr = 42,
  anon_sym_exists = 43,
  aux_sym_identifier_token1 = 44,
  anon_sym_DOLLAR = 45,
  sym_string = 46,
  sym_number = 47,
  sym_ip_address = 48,
  sym_config_file = 49,
  sym__statement = 50,
  sym_block = 51,
  sym_flush_command = 52,
  sym_variable_definition = 53,
  sym_table_declaration = 54,
  sym_table_family = 55,
  sym_chain_declaration = 56,
  sym_chain_definition = 57,
  sym_chain_type = 58,
  sym_chain_type_value = 59,
  sym_chain_hook = 60,
  sym_chain_hook_value = 61,
  sym_chain_priority = 62,
  sym_chain_priority_value = 63,
  sym_chain_policy = 64,
  sym_default_policy = 65,
  sym_rule_definition = 66,
  sym_packet_criteria = 67,
  sym_rule_action = 68,
  sym__match = 69,
  sym_value = 70,
  sym_identifier = 71,
  sym_variable = 72,
  sym__varname = 73,
  aux_sym_config_file_repeat1 = 74,
  aux_sym_rule_definition_repeat1 = 75,
  aux_sym_packet_criteria_repeat1 = 76,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [anon_sym_flush] = "flush",
  [anon_sym_ruleset] = "ruleset",
  [anon_sym_define] = "define",
  [anon_sym_EQ] = "=",
  [anon_sym_table] = "table",
  [anon_sym_arp] = "arp",
  [anon_sym_bridge] = "bridge",
  [anon_sym_inet] = "inet",
  [anon_sym_ip] = "ip",
  [anon_sym_ip6] = "ip6",
  [anon_sym_netdev] = "netdev",
  [anon_sym_chain] = "chain",
  [anon_sym_SEMI] = ";",
  [anon_sym_type] = "type",
  [anon_sym_filter] = "filter",
  [anon_sym_nat] = "nat",
  [anon_sym_route] = "route",
  [anon_sym_hook] = "hook",
  [anon_sym_ingress] = "ingress",
  [anon_sym_prerouting] = "prerouting",
  [anon_sym_input] = "input",
  [anon_sym_forward] = "forward",
  [anon_sym_output] = "output",
  [anon_sym_postrouting] = "postrouting",
  [anon_sym_egress] = "egress",
  [anon_sym_priority] = "priority",
  [anon_sym_raw] = "raw",
  [anon_sym_srcnat] = "srcnat",
  [anon_sym_dstnat] = "dstnat",
  [anon_sym_policy] = "policy",
  [anon_sym_accept] = "accept",
  [anon_sym_drop] = "drop",
  [anon_sym_reject] = "reject",
  [anon_sym_jump] = "jump",
  [anon_sym_goto] = "goto",
  [anon_sym_iif] = "iif",
  [anon_sym_oif] = "oif",
  [anon_sym_saddr] = "saddr",
  [anon_sym_daddr] = "daddr",
  [anon_sym_exists] = "exists",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_DOLLAR] = "$",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_ip_address] = "ip_address",
  [sym_config_file] = "config_file",
  [sym__statement] = "_statement",
  [sym_block] = "block",
  [sym_flush_command] = "flush_command",
  [sym_variable_definition] = "variable_definition",
  [sym_table_declaration] = "table_declaration",
  [sym_table_family] = "table_family",
  [sym_chain_declaration] = "chain_declaration",
  [sym_chain_definition] = "chain_definition",
  [sym_chain_type] = "chain_type",
  [sym_chain_type_value] = "chain_type_value",
  [sym_chain_hook] = "chain_hook",
  [sym_chain_hook_value] = "chain_hook_value",
  [sym_chain_priority] = "chain_priority",
  [sym_chain_priority_value] = "chain_priority_value",
  [sym_chain_policy] = "chain_policy",
  [sym_default_policy] = "default_policy",
  [sym_rule_definition] = "rule_definition",
  [sym_packet_criteria] = "packet_criteria",
  [sym_rule_action] = "rule_action",
  [sym__match] = "_match",
  [sym_value] = "value",
  [sym_identifier] = "identifier",
  [sym_variable] = "variable",
  [sym__varname] = "_varname",
  [aux_sym_config_file_repeat1] = "config_file_repeat1",
  [aux_sym_rule_definition_repeat1] = "rule_definition_repeat1",
  [aux_sym_packet_criteria_repeat1] = "packet_criteria_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [anon_sym_flush] = anon_sym_flush,
  [anon_sym_ruleset] = anon_sym_ruleset,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_arp] = anon_sym_arp,
  [anon_sym_bridge] = anon_sym_bridge,
  [anon_sym_inet] = anon_sym_inet,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_ip6] = anon_sym_ip6,
  [anon_sym_netdev] = anon_sym_netdev,
  [anon_sym_chain] = anon_sym_chain,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_nat] = anon_sym_nat,
  [anon_sym_route] = anon_sym_route,
  [anon_sym_hook] = anon_sym_hook,
  [anon_sym_ingress] = anon_sym_ingress,
  [anon_sym_prerouting] = anon_sym_prerouting,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_postrouting] = anon_sym_postrouting,
  [anon_sym_egress] = anon_sym_egress,
  [anon_sym_priority] = anon_sym_priority,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_srcnat] = anon_sym_srcnat,
  [anon_sym_dstnat] = anon_sym_dstnat,
  [anon_sym_policy] = anon_sym_policy,
  [anon_sym_accept] = anon_sym_accept,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_reject] = anon_sym_reject,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_iif] = anon_sym_iif,
  [anon_sym_oif] = anon_sym_oif,
  [anon_sym_saddr] = anon_sym_saddr,
  [anon_sym_daddr] = anon_sym_daddr,
  [anon_sym_exists] = anon_sym_exists,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_ip_address] = sym_ip_address,
  [sym_config_file] = sym_config_file,
  [sym__statement] = sym__statement,
  [sym_block] = sym_block,
  [sym_flush_command] = sym_flush_command,
  [sym_variable_definition] = sym_variable_definition,
  [sym_table_declaration] = sym_table_declaration,
  [sym_table_family] = sym_table_family,
  [sym_chain_declaration] = sym_chain_declaration,
  [sym_chain_definition] = sym_chain_definition,
  [sym_chain_type] = sym_chain_type,
  [sym_chain_type_value] = sym_chain_type_value,
  [sym_chain_hook] = sym_chain_hook,
  [sym_chain_hook_value] = sym_chain_hook_value,
  [sym_chain_priority] = sym_chain_priority,
  [sym_chain_priority_value] = sym_chain_priority_value,
  [sym_chain_policy] = sym_chain_policy,
  [sym_default_policy] = sym_default_policy,
  [sym_rule_definition] = sym_rule_definition,
  [sym_packet_criteria] = sym_packet_criteria,
  [sym_rule_action] = sym_rule_action,
  [sym__match] = sym__match,
  [sym_value] = sym_value,
  [sym_identifier] = sym_identifier,
  [sym_variable] = sym_variable,
  [sym__varname] = sym__varname,
  [aux_sym_config_file_repeat1] = aux_sym_config_file_repeat1,
  [aux_sym_rule_definition_repeat1] = aux_sym_rule_definition_repeat1,
  [aux_sym_packet_criteria_repeat1] = aux_sym_packet_criteria_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_flush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bridge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netdev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ingress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prerouting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postrouting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_egress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priority] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srcnat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dstnat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_policy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_saddr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daddr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_address] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_flush_command] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_table_family] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_type] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_type_value] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_hook] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_hook_value] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_priority_value] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_default_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_packet_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_action] = {
    .visible = true,
    .named = true,
  },
  [sym__match] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__varname] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_packet_criteria_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '"', 2,
        '#', 168,
        '$', 230,
        '-', 164,
        '2', 232,
        ';', 186,
        '=', 172,
        'a', 34,
        'b', 110,
        'c', 68,
        'd', 23,
        'e', 66,
        'f', 71,
        'g', 98,
        'h', 100,
        'i', 74,
        'j', 151,
        'n', 28,
        'o', 77,
        'p', 95,
        'r', 25,
        's', 32,
        't', 26,
        '{', 166,
        '}', 167,
        '0', 236,
        '1', 236,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '2') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '5') ADVANCE(6);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '5') ADVANCE(11);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '5') ADVANCE(16);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(245);
      if (lookahead == '2') ADVANCE(245);
      if (lookahead == '3') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(18);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(240);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(243);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(197);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'j') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 158:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 159:
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 160:
      if (lookahead == 'w') ADVANCE(29);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 163:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_flush);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_arp);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_arp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bridge);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_inet);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_inet);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '6') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '6') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ip6);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_netdev);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_netdev);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_chain);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_nat);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_hook);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ingress);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_prerouting);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_postrouting);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_egress);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_srcnat);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_dstnat);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_policy);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_accept);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_iif);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_oif);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_saddr);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_daddr);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '5') ADVANCE(233);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ip_address);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '5') ADVANCE(241);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(239);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ip_address);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(238);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ip_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 163},
  [31] = {.lex_state = 163},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 163},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 163},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 163},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_flush] = ACTIONS(1),
    [anon_sym_ruleset] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_arp] = ACTIONS(1),
    [anon_sym_bridge] = ACTIONS(1),
    [anon_sym_inet] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_ip6] = ACTIONS(1),
    [anon_sym_netdev] = ACTIONS(1),
    [anon_sym_chain] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [anon_sym_route] = ACTIONS(1),
    [anon_sym_hook] = ACTIONS(1),
    [anon_sym_ingress] = ACTIONS(1),
    [anon_sym_prerouting] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_postrouting] = ACTIONS(1),
    [anon_sym_egress] = ACTIONS(1),
    [anon_sym_priority] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_srcnat] = ACTIONS(1),
    [anon_sym_dstnat] = ACTIONS(1),
    [anon_sym_policy] = ACTIONS(1),
    [anon_sym_accept] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_reject] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_iif] = ACTIONS(1),
    [anon_sym_oif] = ACTIONS(1),
    [anon_sym_saddr] = ACTIONS(1),
    [anon_sym_daddr] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_ip_address] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(44),
    [sym__statement] = STATE(4),
    [sym_flush_command] = STATE(4),
    [sym_variable_definition] = STATE(4),
    [sym_table_declaration] = STATE(4),
    [sym_chain_declaration] = STATE(4),
    [sym_chain_definition] = STATE(4),
    [sym_chain_type] = STATE(38),
    [sym_rule_definition] = STATE(4),
    [sym_packet_criteria] = STATE(18),
    [sym_rule_action] = STATE(14),
    [sym__match] = STATE(20),
    [aux_sym_config_file_repeat1] = STATE(4),
    [aux_sym_rule_definition_repeat1] = STATE(18),
    [aux_sym_packet_criteria_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_flush] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_inet] = ACTIONS(13),
    [anon_sym_ip] = ACTIONS(15),
    [anon_sym_ip6] = ACTIONS(13),
    [anon_sym_chain] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_accept] = ACTIONS(21),
    [anon_sym_drop] = ACTIONS(21),
    [anon_sym_reject] = ACTIONS(21),
    [anon_sym_jump] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(21),
    [anon_sym_iif] = ACTIONS(13),
    [anon_sym_oif] = ACTIONS(13),
    [anon_sym_saddr] = ACTIONS(13),
    [anon_sym_daddr] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_flush,
    ACTIONS(31), 1,
      anon_sym_define,
    ACTIONS(34), 1,
      anon_sym_table,
    ACTIONS(40), 1,
      anon_sym_ip,
    ACTIONS(43), 1,
      anon_sym_chain,
    ACTIONS(46), 1,
      anon_sym_type,
    STATE(14), 1,
      sym_rule_action,
    STATE(38), 1,
      sym_chain_type,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_packet_criteria,
      aux_sym_rule_definition_repeat1,
    STATE(20), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(49), 5,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
    ACTIONS(37), 6,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
    STATE(2), 8,
      sym__statement,
      sym_flush_command,
      sym_variable_definition,
      sym_table_declaration,
      sym_chain_declaration,
      sym_chain_definition,
      sym_rule_definition,
      aux_sym_config_file_repeat1,
  [65] = 15,
    ACTIONS(7), 1,
      anon_sym_flush,
    ACTIONS(9), 1,
      anon_sym_define,
    ACTIONS(11), 1,
      anon_sym_table,
    ACTIONS(15), 1,
      anon_sym_ip,
    ACTIONS(17), 1,
      anon_sym_chain,
    ACTIONS(19), 1,
      anon_sym_type,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      sym_comment,
    STATE(14), 1,
      sym_rule_action,
    STATE(38), 1,
      sym_chain_type,
    STATE(18), 2,
      sym_packet_criteria,
      aux_sym_rule_definition_repeat1,
    STATE(20), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(21), 5,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
    ACTIONS(13), 6,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
    STATE(2), 8,
      sym__statement,
      sym_flush_command,
      sym_variable_definition,
      sym_table_declaration,
      sym_chain_declaration,
      sym_chain_definition,
      sym_rule_definition,
      aux_sym_config_file_repeat1,
  [129] = 15,
    ACTIONS(7), 1,
      anon_sym_flush,
    ACTIONS(9), 1,
      anon_sym_define,
    ACTIONS(11), 1,
      anon_sym_table,
    ACTIONS(15), 1,
      anon_sym_ip,
    ACTIONS(17), 1,
      anon_sym_chain,
    ACTIONS(19), 1,
      anon_sym_type,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_rule_action,
    STATE(38), 1,
      sym_chain_type,
    STATE(18), 2,
      sym_packet_criteria,
      aux_sym_rule_definition_repeat1,
    STATE(20), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(21), 5,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
    ACTIONS(13), 6,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
    STATE(2), 8,
      sym__statement,
      sym_flush_command,
      sym_variable_definition,
      sym_table_declaration,
      sym_chain_declaration,
      sym_chain_definition,
      sym_rule_definition,
      aux_sym_config_file_repeat1,
  [193] = 15,
    ACTIONS(7), 1,
      anon_sym_flush,
    ACTIONS(9), 1,
      anon_sym_define,
    ACTIONS(11), 1,
      anon_sym_table,
    ACTIONS(15), 1,
      anon_sym_ip,
    ACTIONS(17), 1,
      anon_sym_chain,
    ACTIONS(19), 1,
      anon_sym_type,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      sym_comment,
    STATE(14), 1,
      sym_rule_action,
    STATE(38), 1,
      sym_chain_type,
    STATE(18), 2,
      sym_packet_criteria,
      aux_sym_rule_definition_repeat1,
    STATE(20), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(21), 5,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
    ACTIONS(13), 6,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
    STATE(3), 8,
      sym__statement,
      sym_flush_command,
      sym_variable_definition,
      sym_table_declaration,
      sym_chain_declaration,
      sym_chain_definition,
      sym_rule_definition,
      aux_sym_config_file_repeat1,
  [257] = 4,
    ACTIONS(64), 1,
      anon_sym_ip,
    ACTIONS(66), 1,
      anon_sym_policy,
    STATE(51), 1,
      sym_chain_policy,
    ACTIONS(62), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [288] = 2,
    ACTIONS(70), 1,
      anon_sym_ip,
    ACTIONS(68), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [313] = 2,
    ACTIONS(74), 1,
      anon_sym_ip,
    ACTIONS(72), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [338] = 2,
    ACTIONS(78), 1,
      anon_sym_ip,
    ACTIONS(76), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [363] = 2,
    ACTIONS(82), 1,
      anon_sym_ip,
    ACTIONS(80), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [388] = 2,
    ACTIONS(86), 1,
      anon_sym_ip,
    ACTIONS(84), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [413] = 2,
    ACTIONS(90), 1,
      anon_sym_ip,
    ACTIONS(88), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [438] = 2,
    ACTIONS(94), 1,
      anon_sym_ip,
    ACTIONS(92), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [463] = 2,
    ACTIONS(98), 1,
      anon_sym_ip,
    ACTIONS(96), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [488] = 2,
    ACTIONS(102), 1,
      anon_sym_ip,
    ACTIONS(100), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [513] = 2,
    ACTIONS(106), 1,
      anon_sym_ip,
    ACTIONS(104), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [538] = 2,
    ACTIONS(110), 1,
      anon_sym_ip,
    ACTIONS(108), 19,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [563] = 6,
    ACTIONS(15), 1,
      anon_sym_ip,
    STATE(7), 1,
      sym_rule_action,
    STATE(19), 2,
      sym_packet_criteria,
      aux_sym_rule_definition_repeat1,
    STATE(20), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(21), 5,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
    ACTIONS(13), 6,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [593] = 5,
    ACTIONS(115), 1,
      anon_sym_ip,
    STATE(19), 2,
      sym_packet_criteria,
      aux_sym_rule_definition_repeat1,
    STATE(20), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(118), 5,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
    ACTIONS(112), 6,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [620] = 6,
    ACTIONS(122), 1,
      anon_sym_ip,
    ACTIONS(124), 1,
      anon_sym_exists,
    ACTIONS(126), 1,
      anon_sym_DOLLAR,
    STATE(21), 2,
      sym_value,
      sym_variable,
    STATE(24), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(120), 6,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [646] = 2,
    ACTIONS(130), 1,
      anon_sym_ip,
    ACTIONS(128), 11,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [663] = 2,
    ACTIONS(134), 1,
      anon_sym_ip,
    ACTIONS(132), 11,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [680] = 2,
    ACTIONS(138), 1,
      anon_sym_ip,
    ACTIONS(136), 11,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [697] = 4,
    ACTIONS(143), 1,
      anon_sym_ip,
    ACTIONS(146), 2,
      anon_sym_exists,
      anon_sym_DOLLAR,
    STATE(24), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(140), 6,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_saddr,
      anon_sym_daddr,
  [717] = 5,
    ACTIONS(150), 1,
      anon_sym_ip6,
    ACTIONS(152), 1,
      aux_sym_identifier_token1,
    STATE(30), 1,
      sym_table_family,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(148), 5,
      anon_sym_arp,
      anon_sym_bridge,
      anon_sym_inet,
      anon_sym_ip,
      anon_sym_netdev,
  [737] = 2,
    STATE(45), 1,
      sym_chain_hook_value,
    ACTIONS(154), 7,
      anon_sym_ingress,
      anon_sym_prerouting,
      anon_sym_input,
      anon_sym_forward,
      anon_sym_output,
      anon_sym_postrouting,
      anon_sym_egress,
  [750] = 3,
    ACTIONS(158), 1,
      sym_number,
    STATE(47), 1,
      sym_chain_priority_value,
    ACTIONS(156), 4,
      anon_sym_filter,
      anon_sym_raw,
      anon_sym_srcnat,
      anon_sym_dstnat,
  [763] = 2,
    STATE(54), 1,
      sym_chain_type_value,
    ACTIONS(160), 3,
      anon_sym_filter,
      anon_sym_nat,
      anon_sym_route,
  [772] = 2,
    STATE(53), 1,
      sym_default_policy,
    ACTIONS(162), 2,
      anon_sym_accept,
      anon_sym_drop,
  [780] = 2,
    ACTIONS(164), 1,
      aux_sym_identifier_token1,
    STATE(33), 1,
      sym_identifier,
  [787] = 2,
    ACTIONS(166), 1,
      aux_sym_identifier_token1,
    STATE(22), 1,
      sym__varname,
  [794] = 1,
    ACTIONS(168), 2,
      sym_string,
      sym_ip_address,
  [799] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [806] = 2,
    ACTIONS(172), 1,
      anon_sym_priority,
    STATE(42), 1,
      sym_chain_priority,
  [813] = 2,
    ACTIONS(164), 1,
      aux_sym_identifier_token1,
    STATE(39), 1,
      sym_identifier,
  [820] = 1,
    ACTIONS(174), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [825] = 2,
    ACTIONS(164), 1,
      aux_sym_identifier_token1,
    STATE(49), 1,
      sym_identifier,
  [832] = 2,
    ACTIONS(176), 1,
      anon_sym_hook,
    STATE(34), 1,
      sym_chain_hook,
  [839] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [846] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [853] = 1,
    ACTIONS(178), 1,
      anon_sym_priority,
  [857] = 1,
    ACTIONS(180), 1,
      anon_sym_SEMI,
  [861] = 1,
    ACTIONS(182), 1,
      anon_sym_hook,
  [865] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [869] = 1,
    ACTIONS(186), 1,
      anon_sym_priority,
  [873] = 1,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [877] = 1,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [881] = 1,
    ACTIONS(192), 1,
      aux_sym_identifier_token1,
  [885] = 1,
    ACTIONS(194), 1,
      anon_sym_EQ,
  [889] = 1,
    ACTIONS(196), 1,
      anon_sym_ruleset,
  [893] = 1,
    ACTIONS(198), 1,
      anon_sym_SEMI,
  [897] = 1,
    ACTIONS(200), 1,
      anon_sym_SEMI,
  [901] = 1,
    ACTIONS(202), 1,
      anon_sym_SEMI,
  [905] = 1,
    ACTIONS(204), 1,
      anon_sym_hook,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 129,
  [SMALL_STATE(5)] = 193,
  [SMALL_STATE(6)] = 257,
  [SMALL_STATE(7)] = 288,
  [SMALL_STATE(8)] = 313,
  [SMALL_STATE(9)] = 338,
  [SMALL_STATE(10)] = 363,
  [SMALL_STATE(11)] = 388,
  [SMALL_STATE(12)] = 413,
  [SMALL_STATE(13)] = 438,
  [SMALL_STATE(14)] = 463,
  [SMALL_STATE(15)] = 488,
  [SMALL_STATE(16)] = 513,
  [SMALL_STATE(17)] = 538,
  [SMALL_STATE(18)] = 563,
  [SMALL_STATE(19)] = 593,
  [SMALL_STATE(20)] = 620,
  [SMALL_STATE(21)] = 646,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 680,
  [SMALL_STATE(24)] = 697,
  [SMALL_STATE(25)] = 717,
  [SMALL_STATE(26)] = 737,
  [SMALL_STATE(27)] = 750,
  [SMALL_STATE(28)] = 763,
  [SMALL_STATE(29)] = 772,
  [SMALL_STATE(30)] = 780,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 794,
  [SMALL_STATE(33)] = 799,
  [SMALL_STATE(34)] = 806,
  [SMALL_STATE(35)] = 813,
  [SMALL_STATE(36)] = 820,
  [SMALL_STATE(37)] = 825,
  [SMALL_STATE(38)] = 832,
  [SMALL_STATE(39)] = 839,
  [SMALL_STATE(40)] = 846,
  [SMALL_STATE(41)] = 853,
  [SMALL_STATE(42)] = 857,
  [SMALL_STATE(43)] = 861,
  [SMALL_STATE(44)] = 865,
  [SMALL_STATE(45)] = 869,
  [SMALL_STATE(46)] = 873,
  [SMALL_STATE(47)] = 877,
  [SMALL_STATE(48)] = 881,
  [SMALL_STATE(49)] = 885,
  [SMALL_STATE(50)] = 889,
  [SMALL_STATE(51)] = 893,
  [SMALL_STATE(52)] = 897,
  [SMALL_STATE(53)] = 901,
  [SMALL_STATE(54)] = 905,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_definition, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chain_definition, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_definition, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_definition, 6, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chain_definition, 6, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_action, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_action, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_declaration, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_definition, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_declaration, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chain_declaration, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flush_command, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flush_command, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_declaration, 3, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packet_criteria, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packet_criteria, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packet_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_packet_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packet_criteria_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_hook_value, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_type_value, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_hook, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_priority_value, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_priority, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_family, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_policy, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_policy, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_type, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nftables(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
