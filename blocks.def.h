//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/    /*Command*/                  /*Update Interval*/  /*Update Signal*/
//  {"",        "~/.local/bin/kernel",      3600,                0},

  {"  ",        "~/.local/bin/pacupdate",   3600,                0},

  {"",       "~/.local/bin/cpupercent",   3,                   0},

//  {"",        "~/.local/bin/cputemp",     3,                   0},

  {"",       "~/.local/bin/mem",          40,                  0},

  {"",       "~/.local/bin/volume",       0,                   10},

  {"",       "~/.local/bin/upt",          60,                  0},

  {"",       "~/.local/bin/dte",          10,                  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  |  ";
static unsigned int delimLen = 10 ;
