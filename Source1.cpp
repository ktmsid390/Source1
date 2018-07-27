#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, i, j, arr[9],temp;
	for (i = 0;i < 10;i++)
		scanf("%d", &arr[i]);
	for (i = 0;i < 10;i++)
	{
		if (arr[i] == 2)
		{
			a = 2;
			break;
		}
		else if (arr[i] == 1)
		{
			a = 1;
			break;
		}
		else a = 0;
	}
	for (i = 0;i < 9;i++)
	{
		for (j = 1;j < 10;j++)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[i];
				arr[j] = arr[i];
				arr[j] = temp;
			}
		}
	}
	printf("a=%d", a);
	for (i = 0;i < 10;i++)
		printf("%d", arr[i]);
	return 0;
}
