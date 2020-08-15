#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, n = 0;
	double Sum=0, SD=0, p=0;
	scanf_s("%d %d", &a, &b);
	if (a > b)
	{
		while (a >= b)
		{
			printf("%d ", a);
			Sum += a;
			p += pow(a,2);
			a--; n++;
		}
	}
	else
	{
		while (b >= a)
		{
			printf("%d ", a);
			Sum += a;
			p += pow(a, 2);
			a++; n++;
		}
	}
	printf("\nAverage = %.1lf\n", Sum / n);
	SD = sqrt((p - (Sum * Sum) / n) / (n - 1.0));
	printf("SD = %.2lf", SD);
	return 0;
}