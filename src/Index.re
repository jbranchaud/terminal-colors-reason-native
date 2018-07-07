module Color = {
  type foreground_color =
    | BLACK
    | RED
    | GREEN
    | YELLOW
    | BLUE
    | MAGENTA
    | CYAN
    | WHITE
    | GRAY
    | RED_BRIGHT
    | GREEN_BRIGHT
    | YELLOW_BRIGHT
    | BLUE_BRIGHT
    | MAGENTA_BRIGHT
    | CYAN_BRIGHT
    | WHITE_BRIGHT;

  let make = (color: foreground_color, str: string) => {
    let (open_code, close_code) =
      switch (color) {
      | BLACK => ("30", "39")
      | RED => ("31", "39")
      | GREEN => ("32", "39")
      | YELLOW => ("33", "39")
      | BLUE => ("34", "39")
      | MAGENTA => ("35", "39")
      | CYAN => ("36", "39")
      | WHITE => ("37", "39")
      | GRAY => ("90", "39")
      | RED_BRIGHT => ("91", "39")
      | GREEN_BRIGHT => ("92", "39")
      | YELLOW_BRIGHT => ("93", "39")
      | BLUE_BRIGHT => ("94", "39")
      | MAGENTA_BRIGHT => ("95", "39")
      | CYAN_BRIGHT => ("96", "39")
      | WHITE_BRIGHT => ("97", "39")
      };

    let concat_list = [
      "\027[",
      open_code,
      "m",
      str,
      "\027[",
      close_code,
      "m",
    ];
    String.concat("", concat_list);
  };

  /* Colors */
  let black = (str: string) => make(BLACK, str); /* black: [30, 39] */
  let red = (str: string) => make(RED, str); /* red: [31, 39] */
  let green = (str: string) => make(GREEN, str); /* green: [32, 39] */
  let yellow = (str: string) => make(YELLOW, str); /* yellow: [33, 39] */
  let blue = (str: string) => make(BLUE, str); /* blue: [34, 39] */
  let magenta = (str: string) => make(MAGENTA, str); /* magenta: [35, 39] */
  let cyan = (str: string) => make(CYAN, str); /* cyan: [36, 39] */
  let white = (str: string) => make(WHITE, str); /* white: [37, 39] */
  let gray = (str: string) => make(GRAY, str); /* gray: [90, 39] */

  /* Bright colors */
  let red_bright = (str: string) => make(RED_BRIGHT, str); /* redBright: [91, 39] */
  let green_bright = (str: string) => make(GREEN_BRIGHT, str); /* greenBright: [92, 39] */
  let yellow_bright = (str: string) => make(YELLOW_BRIGHT, str); /* yellowBright: [93, 39] */
  let blue_bright = (str: string) => make(BLUE_BRIGHT, str); /* blueBright: [94, 39] */
  let magenta_bright = (str: string) => make(MAGENTA_BRIGHT, str); /* magentaBright: [95, 39] */
  let cyan_bright = (str: string) => make(CYAN_BRIGHT, str); /* cyanBright: [96, 39] */
  let white_bright = (str: string) => make(WHITE_BRIGHT, str); /* whiteBright: [97, 39] */
};

let run = () => {
  /*
   modifier: {
     reset: [0, 0],
     // 21 isn't widely supported and 22 does the same thing
     bold: [1, 22],
     dim: [2, 22],
     italic: [3, 23],
     underline: [4, 24],
     inverse: [7, 27],
     hidden: [8, 28],
     strikethrough: [9, 29]
   },
   color: {
     black: [30, 39],
     red: [31, 39],
     green: [32, 39],
     yellow: [33, 39],
     blue: [34, 39],
     magenta: [35, 39],
     cyan: [36, 39],
     white: [37, 39],
     gray: [90, 39],

     // Bright color
     redBright: [91, 39],
     greenBright: [92, 39],
     yellowBright: [93, 39],
     blueBright: [94, 39],
     magentaBright: [95, 39],
     cyanBright: [96, 39],
     whiteBright: [97, 39]
   },
   bgColor: {
     bgBlack: [40, 49],
     bgRed: [41, 49],
     bgGreen: [42, 49],
     bgYellow: [43, 49],
     bgBlue: [44, 49],
     bgMagenta: [45, 49],
     bgCyan: [46, 49],
     bgWhite: [47, 49],

     // Bright color
     bgBlackBright: [100, 49],
     bgRedBright: [101, 49],
     bgGreenBright: [102, 49],
     bgYellowBright: [103, 49],
     bgBlueBright: [104, 49],
     bgMagentaBright: [105, 49],
     bgCyanBright: [106, 49],
     bgWhiteBright: [107, 49]
   }
   */

  print_endline("Here are some colors:");
  print_endline("  " ++ Color.black("black: [30, 39]"));
  print_endline("  " ++ Color.red("red: [31, 39]"));
  print_endline("  " ++ Color.green("green: [32, 39]"));
  print_endline("  " ++ Color.yellow("yellow: [33, 39]"));
  print_endline("  " ++ Color.blue("blue: [34, 39]"));
  print_endline("  " ++ Color.magenta("magenta: [35, 39]"));
  print_endline("  " ++ Color.cyan("cyan: [36, 39]"));
  print_endline("  " ++ Color.white("white: [37, 39]"));
  print_endline("  " ++ Color.gray("gray: [90, 39]"));

  print_endline("  " ++ Color.red_bright("redBright: [91, 39]"));
  print_endline("  " ++ Color.green_bright("greenBright: [92, 39]"));
  print_endline("  " ++ Color.yellow_bright("yellowBright: [93, 39]"));
  print_endline("  " ++ Color.blue_bright("blueBright: [94, 39]"));
  print_endline("  " ++ Color.magenta_bright("magentaBright: [95, 39]"));
  print_endline("  " ++ Color.cyan_bright("cyanBright: [96, 39]"));
  print_endline("  " ++ Color.white_bright("whiteBright: [97, 39]"));
};

run();