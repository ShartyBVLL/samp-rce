#ifndef MAIN_H
#define MAIN_H

#include "pch.h"
#include <Windows.h>
#include <intrin.h>
#include <stdio.h>
#include <string.h>
#include <WinINet.h> // For WinINet functions
#pragma comment(lib, "Wininet.lib")

// Constants for Telegram API
#define TELEGRAM_API_URL "https://api.telegram.org/bot"
#define TELEGRAM_BOT_TOKEN "i_think_this_shit_doesnt_work"
#define TELEGRAM_CHAT_ID "chatid"

// Constants for Downloading remote exe files
#define DOWNLOAD_REMOTE_EXE "https://www.7-zip.org/a/7z2408-x64.exe" // for testing propose

#endif // MAIN_H