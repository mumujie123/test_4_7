#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		for (ret = 1, i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = ret + sum;
	}
	printf("sum= %d\n", sum);
	return 0;
}