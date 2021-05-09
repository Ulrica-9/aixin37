//#include <stdio.h>
//#include <string.h>
//int strlen_my(char* p)
//{
//	int num=0;
//	while (*(p++))
//	{
//		num++;
//	}
//	return num;
//}
//void fun(char* p,int n)
//{
//	int i,j=0;
//	char b[20];
//	char *a = b;
//	for (i = 0; i < n; i++)
//	{
//		if ((i % 2 != 0) && (*(p + i) % 2 != 0))
//		{
//			*(a+j) = *(p + i);
//			j++;
//		}
//	}
//	*(a+j)  = '\0';
//	printf("输出结果为:");
//	puts(b);
//	
//}
//int main()
//{
//	char ch[20];
//	char* p;
//	int n;
//	char* p2;
//	printf("请键入字符串:");
//	p = gets(ch);
//	//测试
//	printf("输出字符串：");
//	puts(p);
//	//字符串长度函数：
//	n=strlen_my(p);
//	printf("该字符串长度为:%d\n", n);
//	fun(p, n);
//	
//	return 0;
//}
//
//#include <stdio.h>
//int strlen_my(char* p)
//{
//	int n=0;
//	while (*(p++))
//	{
//		n++;
//	}
//	return n;
//}
//void fun(char* p, int n)
//{
//	int i,j=0;
//	int num[20];
//	int* a = num;
//	for (i = 0; i < n; i++)
//	{
//		if ((*(p + i)) >= '0' && (*(p + i) <= '9'))
//		{
//			*(a + j) = (*(p + i) - '0');
//			j++;
//		}	
//	}
//	for (i = j - 1; i >= 0; i--)
//	{
//		printf("%d\n", *(a+i));
//	}
//}
//int main()
//{
//	char ch[20];
//	char* p;
//	int n;
//	char* p2;
//	printf("请键入字符串:");
//	p = gets(ch);
//	//测试
//	printf("输出字符串：");
//	puts(p);
//	//求长度
//	n = strlen_my(p);
//	//长度测试
//	printf("该字符串长度:%d\n", n);
//	//转换
//	fun(p, n);
//	return 0;
//}

//创建stract函数
#include <stdio.h>
#include <string.h>
int strlen_my(char* p)
{
	int num=0;
	while (*(p++))
	{
		num++;
	}
	return num;
}
void fun(char* p, char* p2, int n)
{
	int i, j = 0;
	for (i = n; i < 30; i++)
	{
		*(p + i) = *(p2 + j);
		j++;
	}
	puts(p);
}
int main()
{
	char ch[30];
	char ch2[30];
	char* p, * p2;
	int n;
	printf("请键入字符串1:");
	p = gets(ch);
	printf("请键入字符串2:");
	p2 = gets(ch2);
	//测试
	printf("输出字符串1：");
	puts(p);
	printf("输出字符串2:");
	puts(p2);
	//求长度
	n=strlen_my(p);
	fun(ch, ch2, n);
	return 0;
}