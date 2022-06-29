// Garudafy
// Licensed under GPL 3.0
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i;
	char *ver = "Garudafy v1.0.0";
	static struct option long_options[] = {
		{"grub", no_argument, NULL, 'g'},
		{"system", no_argument, NULL, 's'},
		{"all", no_argument, NULL, 'a'},
		{"help", no_argument, NULL, 'h'},
		{"version", no_argument, NULL, 'v'},
		{NULL, 0, NULL, 0}};

	char ch;
	int grub = 0;
	int systemz = 0;
	int all = 0;
	while ((ch = getopt_long(argc, argv, "bgsayhvr:", long_options, NULL)) != -1)
	{
		switch (ch)
		{
		case 'g':
			grub = 1;
			printf("Adding all garuda GRUB packages.\n");
			system("pkexec yay -S grub-garuda grub-theme-garuda os-prober-garuda");
			break;
		case 's':
			systemz = 1;
			printf("Adding all garuda system packages.\n");
			system("pkexec yay -S garuda-setup-assistant garuda-gamer-git garuda-fish-config garuda-dr460nized garuda-common-settings plymouth-theme-garuda garuda-welcome-git garuda-bluetooth garuda-boot-options-git garuda-gstreamer garuda-hooks garuda-ibus garuda-icons garuda-input garuda-modem garuda-network garuda-network-assistant-git garuda-settings-manager-git garuda-settings-manager-kcm-git settings-manager-knotifier-git garuda-settings-samba garuda-vaapi garuda-wallpapers garuda-welcome-git garuda-xfce-settings garuda-zsh-config");
			break;
		case 'a':
			all = 1;
			printf("Adding all garuda packages.\n");
			system("pkexec yay -S garuda-setup-assistant garuda-gamer-git garuda-fish-config garuda-dr460nized garuda-common-settings grub-garuda grub-theme-garuda os-prober-garuda plymouth-theme-garuda garuda-browser-settings firefox-dark-reader firefox-extension-google-search-link-fix garuda-firefox firefox-decentraleyes firefox-extension-canvasblocker firefox-extension-https-everywhere firefox-extension-keepassxc-browser firefox-extension-privacybadger firefox-extension-xdm-browser-monitor firefox-ublock-origin xdman garuda-welcome-git garuda-bluetooth garuda-boot-options-git garuda-gstreamer garuda-hooks garuda-ibus garuda-icons garuda-input garuda-modem garuda-network garuda-network-assistant-git garuda-settings-manager-git garuda-settings-manager-kcm-git settings-manager-knotifier-git garuda-settings-samba garuda-vaapi garuda-wallpapers garuda-welcome-git garuda-xfce-settings garuda-zsh-config");
			break;
		case 'h':
			printf("Garudafy Help:\n");
			printf("Usage: [-bgsayhvr].\n");
			printf("-g, --grub: Adds all Gruda GRUB packages (not recommended)\n");
			printf("-s, --system: Adds all System packages, (Non-GRUB packages) (not recommended).\n");
			printf("-a, --all: Adds all garuda packages, Including GRUB.\n");
			printf("-h, --help: prints this message.\n");
			printf("-v, --version: prints current version.\n");
			printf("NOTE: Add the chaotic-aur repo so that you can install and upgrade garuda packages.\n");
			exit(0);
		case 'v':
			printf(ver);
			exit(0);
		}
	}

	argc -= optind;
	argv += optind;
	if (argc < 1)
	{
		printf("%s", "use Garudafy --help.\n");
		return 0;
	}
}
