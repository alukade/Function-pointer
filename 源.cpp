#include<stdio.h>

int square(int);

int square(int num)
{
	return num * num;
}

int main()
{
	int num;
	int(*fp)(int);

	printf("请输入一个整数：");
	scanf_s("%d", &num);

	fp = square;

	printf("%d*%d=%d\n", num, num, (*fp)(num));
}
