#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int a;
	printf("请输入一个数，该程序判断是否为5，7的倍数\n");
	scanf("%d",&a);
	if(a%5==0&&a%7==0)
		printf("YES\n");
	else
		printf("NO\n");
	system("pause");
	return(0);
}
