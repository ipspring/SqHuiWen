#define MAXSIZE 100
typedef int SElemType;
typedef struct{
	SElemType *data;
	int top;
}SqStack;
bool InitStack(SqStack &S);                                          //�����ջ
bool DestroyStack(SqStack &S);                                 //����ջS
bool ClearStack(SqStack &S);                                      //���ջS
bool StackEmpty(SqStack S);                                       //�ж�ջS�Ƿ�Ϊ��
int     StackLength(SqStack S);                                     //ջS�ĳ���
bool GetTop(SqStack S, SElemType &e);                 //����ջS��ջ��Ԫ��
bool Push(SqStack &S, SElemType e);                      //����Ԫ��ΪS�µ�ջ��Ԫ��
bool  Pop(SqStack &S, SElemType &e);                    //ɾ����Sջ��Ԫ�ز�������ֵe
void  StackTraverse(SqStack S);                                   //���η���ջS��ÿ��Ԫ��
//void  conversion(SqStack S, int &N);                           //����ת��
//bool Matching(SqStack S, char c);                               //����ƥ��
