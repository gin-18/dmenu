/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const int user_bh = 10; /* add an defined amount of pixels to the bar height */

static const char *fonts[] = { "FiraCode Nerd Font Propo:pixelsize=24:style=Regular:antialias=true:autohint=true" };
static const char *prompt = NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
  /*     fg         bg       */
  [SchemeNorm] = { "#cdd6f4", "#1e1e2e" },
  [SchemeSel] = { "#11111b", "#89b4fa" },
  [SchemeOut] = { "#000000", "#89dceb" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
