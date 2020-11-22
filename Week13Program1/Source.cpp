#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int*, int, int);

int main()
{
	int log[5];
	for (int i = 0; i < 5; i++)scanf("%d", &log[i]);
	for (int i = 0; i < 4; i++)
	{
		if (log[i] > log[i + 1])
		{
			swap(log, i, i + 1);
			for (int j = 0; j < 5; j++)printf("%d ", log[j]);
			printf("\n");
		}
		if (i == 3)
		{
			for (int j = 0; j < 5; j++)
			{
				if (log[j] != j + 1)i = -1;
			}
		}
	}
}

void swap(int *x, int y, int z)
{
	int a;
	a = *(x + y);
	*(x + y) = *(x + z);
	*(x + z) = a;
}