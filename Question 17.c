#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i==1||10-i==j||i==j)
			{
				printf("*");

			}
			else
            {
                printf(" ");
            }
		}
		printf("\n");
	}


	return 0;
}
