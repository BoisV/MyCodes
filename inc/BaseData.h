#include <WinSock2.h>
// ��Ʒ��
#define DEFAULT_SIGN 5720

// Ӧ���� 
#define RES_FAULT   -1  // ʧ��
#define RES_NULL    00  // ��
#define RES_SUCCESS 01  // �ɹ�

// ������
#define CMD_NULL                    00	// ��
#define CMD_REGIEST                 10  // ע��
#define CMD_LOGIN                   11  // ��¼
#define CMD_LOGOUT		            12  // �ǳ�
#define CMD_PRIVATECHAT             20  // ˽��
#define CMD_GROUPCHAT               21  // Ⱥ��
#define CMD_GET_USER_NAME           30  // ��ȡ�����û�
#define CMD_GET_USER_NAME_ONLINE    31  // ��ȡ���������û�
#define CMD_SEND_USER_NAME          32  // �����û���
#define CMD_SEND_USER_NAME_ONLINE   33	// ���������û���
#define CMD_SET_USER_NAME           40  // �����û���
#define CMD_SET_USER_PWD            41  // �����û�����
#define CMD_SET_USER_LEVEL          42  // �����û�Ȩ��
#define CMD_SET_USER_OFFLINE        43  // ǿ���û�����

// Ӧ���ڲ�������
#define SUCCESS 00
#define ERROR_MALLOC 01
#define ERROR_RECV 02
#define ERROR_SEND 03
#define ERROR_ACCEPT 04
#define ERROR_OTHER 100


#define USER_NAME_LEN 20
#define USER_PWD_LEN  20

// �û�Ȩ��
#define LEVEL_USER			00
#define LEVEL_AMMIN			01
#define LEVEL_SUPER_ADMIN   02

typedef struct _DataHead
{
	int sign;		// ��Ʒ��־
	int response;   // Ӧ����
	int cmd;		// ������
	int dataLen;	// ���ݳ���
}DataHead;

typedef struct _PrivateChat
{
	int fromUserLen;
	int toUserLen;
	int massagLen;
	char *pFromUser;
	char *pToUser;
	char *pMassage;
}PrivateChat;

typedef struct _GroupChat
{
	int fromUserLen;
	int massageLen;
	char *pFromUser;
	char *pMassage;
}GroupChat;

// ͨ��ģ��(����)
int RecvDataHead(SOCKET connSocket, DataHead *pDataHead);
int SendDataHead(SOCKET connSocket, DataHead *pDataHead);
int RecvMassage(SOCKET connSocket, char *buf, int bufLen);



