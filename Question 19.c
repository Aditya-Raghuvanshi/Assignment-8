#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=13;i++)
	{
		for(j=1;j<=19;j++)
		{
			if(i<=3)
			{
			    if(j>=4-i&&j<=6+i||j>=14-i&&j<=16+i)
				     printf("*");
				else
                     printf(" ");

			}
			else if(j>=i-3&&j<=23-i)
            {
                if(i==4&&j==7)
                    printf("M");
                else if(i==4&&j==8)
                    printf("y");
                else if(i==4&&j==9)
                    printf("S");
                else if(i==4&&j==10)
                    printf("i");
                else if(i==4&&j==11)
                    printf("r");
                else if(i==4&&j==12)
                    printf("G");
                else
                   printf("*");

            }
            else
                printf(" ");
		}
		printf("\n");
	}


	return 0;
}
