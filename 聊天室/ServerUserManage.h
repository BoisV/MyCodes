#include "Config.h"

// �û�ģ��
bool IsNameRepeat(char *pUserName);

int Register(SOCKET connSocket);

int Login(SOCKET connSocket, PUserOnlineNode pUserOnlienNode);

int Logout(SOCKET connSocket, PUserOnlineNode pUserOnlienNode);

int SetUserName(PUserOnlineNode pUserOnlienNode);

int SetUserPwd(PUserOnlineNode pUserOnlienNode);
