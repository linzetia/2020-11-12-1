//交换两数（用函数方法+指针变量）
#include<stdio.h>

void Swap(int* pa, int* pb)//利用指针变量而不是intx，inty，因为存储空间不一样
{
	int tem = 0;
	tem = *pa;
	*pa = *pb;
	*pb = tem;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前a=%d b=%d\n", a, b);
	Swap(&a,&b);//形参为指针变量，故这里要取地址
	printf("交换后a=%d b=%d\n", a,b);
}