//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"~/bin/cpu.sh",			5,			11},
	{"",		"~/bin/mem.sh",			5,			10},
	{"",		"~/bin/kernel.sh",	    10000,			 9},
	{"",		"~/bin/pkgs.sh",	      900,			 8},
	{"",		"~/bin/upgrades.sh",	      900,			 7},
	{"",		"~/bin/hdd.sh",		      900,			 6},
	{"",		"~/bin/vpn.sh",		       30,			 5},
	{"",		"~/bin/vol.sh",			0,			 4},
	{"",		"~/bin/wthr.sh",	      900,			 3},
	{"",		"~/bin/temp.sh",	      900,			 2},
	{"",		"~/bin/date.sh",	       60,			21},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
