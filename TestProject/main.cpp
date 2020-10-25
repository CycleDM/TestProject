#include <stdlib.h>
#include <stdio.h>

void main()
{
	int num[8] = { 4, 5, 33, 31, 354, 44, 52, 22 };
	int temp;

	int length = sizeof(num) / sizeof(num[0]);
	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (num[j] < num[i])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
		printf_s("%d ", num[i]);
	}
	
	rewind(stdin);
	getchar();
	return;
}
