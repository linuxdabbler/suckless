const unsigned int interval = 1000;
static const char unknown_str[] = "n/a";
#define MAXLEN 2048
static const struct arg args[] = {
	/* function format          argument */
	{ run_command,	"^c#cc6666^ %s", "cpuicon.sh " },
	{ cpu_perc,	"^c#c5c8c6^ %s%% ", NULL },
   	{ run_command,	"^c#b5bd68^ %2s ", "memicon.sh"  },
	{ ram_perc,	"^c#c8c5c6^ %s%% ", NULL },
   	{ run_command,	"^c#f0c674^ %2s ", "homeicon.sh" },
	{ disk_perc,	"^c#c5c8c6^ %s%% ", "/home/mike/" },
	{ run_command,	"^c#81a2be^ %2s ", "neticon.sh" },
	{ run_command,	"^c#c5c8c6^ %2s ", "ip.sh" },
	{ run_command,	"^c#cc6666^ %2s ", "vpnicon.sh" },
	{ run_command,	"^c#85678f^ %s ", "volicon.sh " },
	{ run_command,	"^c#c5c8c6^ %s ", "volume.sh " },
	{ run_command,	"^c#c5c8c6^ %2s ", "forecast.sh " },
	{ run_command,	"^c#cc6666^ %2s ", "tempicon.sh " },
	{ run_command,	"^c#c5c8c6^ %2s ", "temp.sh " },
	{ run_command,	"^c#c5c8c6^ %2s ", "clock.sh" },
};
