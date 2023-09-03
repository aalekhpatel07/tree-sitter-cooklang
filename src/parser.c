#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_AT = 1,
  anon_sym_ = 2,
  anon_sym_DASH_DASH = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_LBRACK_DASH = 5,
  aux_sym_block_comment_token1 = 6,
  anon_sym_DASH_RBRACK = 7,
  sym_end = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_PERCENT = 11,
  anon_sym_g = 12,
  anon_sym_kg = 13,
  anon_sym_lb = 14,
  anon_sym_oz = 15,
  anon_sym_mg = 16,
  anon_sym_cup = 17,
  anon_sym_tsp = 18,
  anon_sym_tbsp = 19,
  anon_sym_pinch = 20,
  anon_sym_dash = 21,
  anon_sym_can = 22,
  anon_sym_bottle = 23,
  anon_sym_jar = 24,
  anon_sym_l = 25,
  anon_sym_ml = 26,
  sym_integer = 27,
  anon_sym_SLASH = 28,
  sym_real = 29,
  sym_identifier = 30,
  sym_phrase = 31,
  sym_source_file = 32,
  sym__definition = 33,
  sym_ingredient = 34,
  sym_comment = 35,
  sym_block_comment = 36,
  sym_quantity = 37,
  sym_unit = 38,
  sym_weight = 39,
  sym_volume = 40,
  sym_unit_type = 41,
  sym_amount = 42,
  sym_fraction = 43,
  sym_number = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_ingredient_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_] = " ",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACK_DASH] = "[-",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_DASH_RBRACK] = "-]",
  [sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PERCENT] = "%",
  [anon_sym_g] = "g",
  [anon_sym_kg] = "kg",
  [anon_sym_lb] = "lb",
  [anon_sym_oz] = "oz",
  [anon_sym_mg] = "mg",
  [anon_sym_cup] = "cup",
  [anon_sym_tsp] = "tsp",
  [anon_sym_tbsp] = "tbsp",
  [anon_sym_pinch] = "pinch",
  [anon_sym_dash] = "dash",
  [anon_sym_can] = "can",
  [anon_sym_bottle] = "bottle",
  [anon_sym_jar] = "jar",
  [anon_sym_l] = "l",
  [anon_sym_ml] = "ml",
  [sym_integer] = "integer",
  [anon_sym_SLASH] = "/",
  [sym_real] = "real",
  [sym_identifier] = "identifier",
  [sym_phrase] = "phrase",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_ingredient] = "ingredient",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_quantity] = "quantity",
  [sym_unit] = "unit",
  [sym_weight] = "weight",
  [sym_volume] = "volume",
  [sym_unit_type] = "unit_type",
  [sym_amount] = "amount",
  [sym_fraction] = "fraction",
  [sym_number] = "number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_ingredient_repeat1] = "ingredient_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_] = anon_sym_,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACK_DASH] = anon_sym_LBRACK_DASH,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_DASH_RBRACK] = anon_sym_DASH_RBRACK,
  [sym_end] = sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_kg] = anon_sym_kg,
  [anon_sym_lb] = anon_sym_lb,
  [anon_sym_oz] = anon_sym_oz,
  [anon_sym_mg] = anon_sym_mg,
  [anon_sym_cup] = anon_sym_cup,
  [anon_sym_tsp] = anon_sym_tsp,
  [anon_sym_tbsp] = anon_sym_tbsp,
  [anon_sym_pinch] = anon_sym_pinch,
  [anon_sym_dash] = anon_sym_dash,
  [anon_sym_can] = anon_sym_can,
  [anon_sym_bottle] = anon_sym_bottle,
  [anon_sym_jar] = anon_sym_jar,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_ml] = anon_sym_ml,
  [sym_integer] = sym_integer,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_real] = sym_real,
  [sym_identifier] = sym_identifier,
  [sym_phrase] = sym_phrase,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_ingredient] = sym_ingredient,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_quantity] = sym_quantity,
  [sym_unit] = sym_unit,
  [sym_weight] = sym_weight,
  [sym_volume] = sym_volume,
  [sym_unit_type] = sym_unit_type,
  [sym_amount] = sym_amount,
  [sym_fraction] = sym_fraction,
  [sym_number] = sym_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_ingredient_repeat1] = aux_sym_ingredient_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_end] = {
    .visible = true,
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tbsp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_can] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ml] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_ingredient] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_weight] = {
    .visible = true,
    .named = true,
  },
  [sym_volume] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_type] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_fraction] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ingredient_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(50);
      if (lookahead == 'j') ADVANCE(86);
      if (lookahead == 'k') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ']') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(49);
      if (lookahead == 'j') ADVANCE(10);
      if (lookahead == 'k') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'z') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '_') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '(' || ']' < lookahead)) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '(' || ']' < lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_end);
      if (lookahead == '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_kg);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_kg);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_lb);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_lb);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_oz);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_oz);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_mg);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_mg);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_cup);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_cup);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_tsp);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_tsp);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_tbsp);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_tbsp);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_pinch);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_pinch);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_dash);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_dash);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_can);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_can);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_bottle);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_bottle);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_jar);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_jar);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ml);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ml);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 's') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 's') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'z') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_phrase);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '_') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_phrase);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_phrase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACK_DASH] = ACTIONS(1),
    [anon_sym_DASH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_kg] = ACTIONS(1),
    [anon_sym_lb] = ACTIONS(1),
    [anon_sym_oz] = ACTIONS(1),
    [anon_sym_mg] = ACTIONS(1),
    [anon_sym_cup] = ACTIONS(1),
    [anon_sym_tsp] = ACTIONS(1),
    [anon_sym_tbsp] = ACTIONS(1),
    [anon_sym_pinch] = ACTIONS(1),
    [anon_sym_dash] = ACTIONS(1),
    [anon_sym_can] = ACTIONS(1),
    [anon_sym_bottle] = ACTIONS(1),
    [anon_sym_jar] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_ml] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_phrase] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__definition] = STATE(3),
    [sym_ingredient] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_block_comment] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_LBRACK_DASH] = ACTIONS(9),
    [sym_phrase] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(17), 1,
      anon_sym_l,
    STATE(34), 1,
      sym_unit_type,
    STATE(33), 2,
      sym_weight,
      sym_volume,
    ACTIONS(13), 5,
      anon_sym_g,
      anon_sym_kg,
      anon_sym_lb,
      anon_sym_oz,
      anon_sym_mg,
    ACTIONS(15), 9,
      anon_sym_cup,
      anon_sym_tsp,
      anon_sym_tbsp,
      anon_sym_pinch,
      anon_sym_dash,
      anon_sym_can,
      anon_sym_bottle,
      anon_sym_jar,
      anon_sym_ml,
  [29] = 7,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_phrase,
    STATE(9), 1,
      sym_block_comment,
    STATE(4), 4,
      sym__definition,
      sym_ingredient,
      sym_comment,
      aux_sym_source_file_repeat1,
  [54] = 7,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(28), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK_DASH,
    ACTIONS(34), 1,
      sym_phrase,
    STATE(9), 1,
      sym_block_comment,
    STATE(4), 4,
      sym__definition,
      sym_ingredient,
      sym_comment,
      aux_sym_source_file_repeat1,
  [79] = 6,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_real,
    STATE(17), 1,
      sym_amount,
    STATE(24), 1,
      sym_unit,
    STATE(20), 2,
      sym_fraction,
      sym_number,
  [99] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_DASH,
      sym_phrase,
  [107] = 1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_DASH,
      sym_phrase,
  [115] = 1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_DASH,
      sym_phrase,
  [123] = 1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_DASH,
      sym_phrase,
  [131] = 1,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_DASH,
      sym_phrase,
  [139] = 1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_DASH,
      sym_phrase,
  [147] = 1,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_DASH,
      sym_phrase,
  [155] = 4,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_quantity,
    STATE(14), 1,
      aux_sym_ingredient_repeat1,
  [168] = 4,
    ACTIONS(57), 1,
      anon_sym_,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_quantity,
    STATE(15), 1,
      aux_sym_ingredient_repeat1,
  [181] = 3,
    ACTIONS(61), 1,
      anon_sym_,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      aux_sym_ingredient_repeat1,
  [191] = 2,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [199] = 2,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_PERCENT,
  [206] = 1,
    ACTIONS(74), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [211] = 2,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_,
  [218] = 1,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [223] = 1,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [228] = 1,
    ACTIONS(80), 1,
      sym_end,
  [232] = 1,
    ACTIONS(82), 1,
      sym_identifier,
  [236] = 1,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
  [240] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [244] = 1,
    ACTIONS(88), 1,
      sym_identifier,
  [248] = 1,
    ACTIONS(90), 1,
      sym_integer,
  [252] = 1,
    ACTIONS(92), 1,
      aux_sym_block_comment_token1,
  [256] = 1,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
  [260] = 1,
    ACTIONS(96), 1,
      anon_sym_DASH_RBRACK,
  [264] = 1,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
  [268] = 1,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
  [272] = 1,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
  [276] = 1,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 115,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 191,
  [SMALL_STATE(17)] = 199,
  [SMALL_STATE(18)] = 206,
  [SMALL_STATE(19)] = 211,
  [SMALL_STATE(20)] = 218,
  [SMALL_STATE(21)] = 223,
  [SMALL_STATE(22)] = 228,
  [SMALL_STATE(23)] = 232,
  [SMALL_STATE(24)] = 236,
  [SMALL_STATE(25)] = 240,
  [SMALL_STATE(26)] = 244,
  [SMALL_STATE(27)] = 248,
  [SMALL_STATE(28)] = 252,
  [SMALL_STATE(29)] = 256,
  [SMALL_STATE(30)] = 260,
  [SMALL_STATE(31)] = 264,
  [SMALL_STATE(32)] = 268,
  [SMALL_STATE(33)] = 272,
  [SMALL_STATE(34)] = 276,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(26),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weight, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_type, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cooklang(void) {
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
