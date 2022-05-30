#include <stdio.h>
#include <math.h>

int main(void)
{
	int a[100], b[100], c[100] = { 0 };
	int tmp = 0;
	int x = 0, y = 0, z = 0;
	for (int i = 0; i < 100; i++){
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
		if (a[i] == 0 && b[i] == 0 && c[i] == 0)
			break;

		if (a[i] > c[i]){
			tmp = c[i];
			c[i] = a[i];
			a[i] = tmp;
		}
		if (b[i] > c[i]){
			tmp = c[i];
			c[i] = b[i];
			b[i] = tmp;
		}

	}
	for (int i = 0; i < 100; i++){
		x = a[i];
		y = b[i];
		z = c[i];
		double result1 = (a[i] * a[i] + b[i] * b[i]);
		double result2 = (c[i] * c[i]);

		if (a[i] == 0 && b[i] == 0 && c[i] == 0)
			break;

		if (result1 == result2)
			printf("right\n");
		else printf("wrong\n");

	}

	return 0;
}