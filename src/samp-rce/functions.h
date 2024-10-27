// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

void sendMessageToTelegram(const char* message);
void GetCPUID(char* buffer, int bufSize);
bool downloadRemoteFile(const std::string& url, const std::string& filepath);
bool runDownloadedFile(const std::string& filepath);

#endif // FUNCTIONS_H