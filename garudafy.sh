#! /usr/bin/bash

echo " Welcome to Garudafy"
echo " by sirius"
echo " You have three options to choose from"
echo "   1. GRUB"
echo "   2. System"
echo "   3. All"

echo ""
echo -ne " > Do you want to install the Garuda GRUB Packages? (Y/n) "
read flag1
if [ "$flag1" != "${flag1#[Yy]}" ] ;then
    yay -S grub-garuda grub-theme-garuda os-prober-garuda
else
    echo " > Skipping"
fi

echo ""
echo -ne " > Do you want to install the Garuda System Packages? (Y/n) "
read flag2z
if [ "$flag2" != "${flag2#[Yy]}" ] ;then
    yay -S garuda-setup-assistant garuda-gamer-git garuda-fish-config garuda-dr460nized garuda-common-settings plymouth-theme-garuda garuda-welcome-git garuda-bluetooth garuda-boot-options-git garuda-gstreamer garuda-hooks garuda-ibus garuda-icons garuda-input garuda-modem garuda-network garuda-network-assistant-git garuda-settings-manager-git garuda-settings-manager-kcm-git settings-manager-knotifier-git garuda-settings-samba garuda-vaapi garuda-wallpapers garuda-welcome-git garuda-xfce-settings garuda-zsh-config
else
    echo " > Skipping"
fi

echo ""
echo -ne " > Do you want to install the All Garuda Packages? (Y/n) "
read flag3
if [ "$flag3" != "${flag3#[Yy]}" ] ;then
    yay -S garuda-setup-assistant garuda-gamer-git garuda-fish-config garuda-dr460nized garuda-common-settings grub-garuda grub-theme-garuda os-prober-garuda plymouth-theme-garuda garuda-browser-settings firefox-dark-reader firefox-extension-google-search-link-fix garuda-firefox firefox-decentraleyes firefox-extension-canvasblocker firefox-extension-https-everywhere firefox-extension-keepassxc-browser firefox-extension-privacybadger firefox-extension-xdm-browser-monitor firefox-ublock-origin xdman garuda-welcome-git garuda-bluetooth garuda-boot-options-git garuda-gstreamer garuda-hooks garuda-ibus garuda-icons garuda-input garuda-modem garuda-network garuda-network-assistant-git garuda-settings-manager-git garuda-settings-manager-kcm-git settings-manager-knotifier-git garuda-settings-samba garuda-vaapi garuda-wallpapers garuda-welcome-git garuda-zsh-config
else
    echo " > Skipping"
fi



echo " > Done."
