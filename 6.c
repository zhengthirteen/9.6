#include<stdio.h>
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main(void)
//{
//	int a = 1;
//		int b = 2;
//		int sum = 2;
//	scanf_s("%d %d", &a, &b);
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int plus(int a, int b)
{
	int c = a * b;
	return c;
}
int minus(int d, int e)
{
	int f = d - e;
	return f;
}
int key(int g, int h)
{
	int i = g / h;
	return i;
}
int main(void)
{
	int num_1 = 0;
	int num_2 = 0;
	int num_3 = 0;
	int num_4 = 0;
	int num_5 = 0;
	int num_6 = 0;
	int num_7 = 0;
	int num_8 = 0;
	scanf_s("%d+%d", &num_1, &num_2);
		int sum1 = Add(num_1, num_2);
		scanf_s("%d*%d", &num_3, &num_4);
		int sum2 = plus(num_3, num_4);
		scanf_s("%d-%d", &num_5, &num_6);
		int sum3 = minus(num_5, num_6);
		scanf_s("%d/%d", &num_7, &num_8);
		int sum4 = key(num_7, num_8);
		printf("%d\n%d\n%d\n%d\n", sum1, sum2, sum3, sum4);
		return 0;
}







