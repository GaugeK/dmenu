/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                     /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                   /* -c option; centers dmenu on screen */
static int min_width = 500;                /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Ubuntu Mono:pixelsize=14.4:style=bold" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#9294a8", "#151823" },
	[SchemeSel]  = { "#d6d8eb", "#1e212e" },
	[SchemeOut]  = { "#000000", "#00ffff" },
	[SchemeSelHighlight]  = { "#d6d8eb", "#1e212e" },
	[SchemeNormHighlight] = { "#d6d8eb", "#151823" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 6;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 36;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
