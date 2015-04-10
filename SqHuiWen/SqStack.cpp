#include "SqStack.h"
#include <iostream>
using namespace std;
bool InitStack(SqStack &S)                                          //�����ջ
{
		S.data = new SElemType[MAXSIZE];
		if (!S.data)
				return false;
		S.top = 0;
		return true;

}
bool DestroyStack(SqStack &S)                                 //����ջS
{

	delete S.data;
	S.data = NULL;
	S.top = 0;
	return true;
}
bool ClearStack(SqStack &S)                                      //���ջS
{
	S.top = 0;
	return true;
}
bool StackEmpty(SqStack S)                                       //�ж�ջS�Ƿ�Ϊ��
{
	if (S.top == 0)
		return true;
	else
		return false;
}
int  StackLength(SqStack S)                                      //ջS�ĳ���
{
	return S.top;
}
bool GetTop(SqStack S, SElemType &e)                  //����ջS��ջ��Ԫ��
{
	if (S.top > 0 && S.top <= MAXSIZE){
		e = S.data[S.top - 1];
		return true;
	}
	else
		return false;
		
}

bool Push(SqStack &S, SElemType e)                        //����Ԫ��ΪS�µ�ջ��Ԫ��
{
	if (S.top == MAXSIZE) 
		return false;
	else {
		
	S.data[S.top] = e;
	S.top++;
	return true;
	}
	
}
bool  Pop(SqStack &S, SElemType &e)                     //ɾ����Sջ��Ԫ�ز�������ֵe
{
	if(S.top > 0 && S.top <= MAXSIZE){
		S.top--;
		e = S.data[S.top];
		return true;
	}
	return false;
}
void StackTraverse(SqStack S)                                    //���η���ջS��ÿ��Ԫ��
{

	int i;
	for (i = 0; i < S.top; i++){
		cout << S.data[i] << "\t";
	}
	cout << endl;
	
}
