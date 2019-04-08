## Vault-Decrypt
Vault Decrypt ~~is~~ was created as a simple program which can be used to recover original data from the files encrypted by the NQ Vault app.

**Update :** Stop bugging me twitter. I have abandoned this project long ago. 

**Still if you're in trouble or looking to decrypt your files, here is a simple tutorial for you all :** 

 Copy all the encrypted(.bin) files from your phone to pc. These files can be found in /sdcard/SystemAndroid/data, inside there will few other folders. Copy all those files and folders to one single folder in you pc/laptop. 

 **If you are on windows -** 

 - Download [this](https://github.com/rafiibrahim8/Vault-Blaster/tree/master/bin/Release) awesome program by **Rafi Ibrahim**. 
 - Just download the exe, copy this exe file in the same folder where .bin files are placed. 
 - Click on Vault-Blaster.exe, and follow the instructions. 

*Protip : Use a multi/batch rename tool in advance to rename long encrypted file names to something short because as Vault-Blaster requires you to type whole file name.*

**If you are on linux -** 
 - Download [this](https://github.com/prmsrswt/nqvault-decrypt) awesome program by **Prem Kumar**. 
 - Copy the `vault.py` file to same directory where encrypted files are kept. 
Open terminal, `cd` to that directory, then type "`python3 vault.py`" in terminal. 

*Maybe this method can also work on android. Just download termux app from playstore, open termux and install python3, and try this script. I have not tried it, but it should work i guess.* 

***Credits :*** 

 - Original credit and praise goes to **NinjaDoge24** for finding this flaw in NQ Vault. Read his [blog](https://ninjadoge24.github.io) for more info. 
 - **Rafi Ibrahim** for creating [Vault-Blaster](https://github.com/rafiibrahim8/Vault-Blaster), i was totally impressed by how he managed to put all those magik numbers in the [code](https://github.com/rafiibrahim8/Vault-Blaster/blob/master/funcs.c). 
 - **Prem Kumar** for creating [this](https://github.com/prmsrswt/nqvault-decrypt) awesome script.  
 
 
