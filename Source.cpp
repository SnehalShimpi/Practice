#include<stdio.h>
void Pattern1(int iNo1, int iNo2);
int main()
{
	int no1 = 0, no2 = 0;
	printf("Enter the value\n");
	scanf_s("%d", &no1);
	printf("Enter the value\n");
	scanf_s("%d", &no2);
	Pattern1(no1, no2);

	return 0;
}

void Pattern1(int iNo1, int iNo2)
{
	int i = 0, j = 0;
	if (iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	if (iNo2 < 0)
	{
		iNo2 = -iNo2;
	}

	for (i = 1;i <= iNo2;i++)
	{
		printf("*\t");
	}
	printf("\n");

	for (i = 1;i <= iNo1 - 2;i++)
	{
		for (j = 1;j <= iNo2; j++)
		{
			if (j == 1 || j == iNo2)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
	for (i = 1;i <= iNo2;i++)
	{
		printf("* \t");
	}

	printf("\n");
}

