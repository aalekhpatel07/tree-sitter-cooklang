const WEIGHTS = ["g", "kg", "lb", "oz", "mg"];
const VOLUMES = [
  "cup",
  "tsp",
  "tbsp",
  "pinch",
  "dash",
  "can",
  "bottle",
  "jar",
  "l",
  "ml",
];

module.exports = grammar({
  name: "cooklang",
  scope: "source.cook",
  "file-types": [".cook"],
  rules: {
    source_file: ($) => repeat($._definition),
    _definition: ($) => choice($.ingredient, $.comment, $.phrase),
    ingredient: ($) =>
      seq("@", $.identifier, repeat(seq(" ", $.identifier)), $.quantity),
    comment: ($) => choice(seq("--", /.*/, $.end), $.block_comment),
    block_comment: ($) => seq("[-", /[^(-\])]*/, "-]"),
    end: ($) => /\n/,
    quantity: ($) => seq("{", optional($.unit), "}"),
    unit: ($) => seq($.amount, optional(seq("%", $.unit_type))),
    weight: ($) => choice(...WEIGHTS),
    volume: ($) => choice(...VOLUMES),
    unit_type: ($) => choice($.weight, $.volume),
    amount: ($) => choice($.number, $.fraction),
    integer: ($) => /\d+/,
    fraction: ($) => seq($.integer, "/", $.integer),
    number: ($) => choice($.integer, $.real),
    real: ($) => /\d*(\.)?\d+/,
    identifier: ($) => /[a-zA-Z_]+/,
    phrase: ($) => /\w*[A-Za-z0-9\.]\w*/,
  },
});
