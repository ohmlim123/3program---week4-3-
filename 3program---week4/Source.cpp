#include<stdio.h>
int main()
{
	int  i, j, N;
	scanf_s("%d", &N);
	for (i = 1;i <= N;i++)
	{
		for (j = 1;j <= N;j++)
		{
			if (i == 2 || i == N - 1)
			{
				if (j == 1 || j == N)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else if (j==2||j==N-1)
			{
				if (i == 1 || i == N)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				printf("*");
			}
			
		}

		printf("\n");
	}

	return 0;
}