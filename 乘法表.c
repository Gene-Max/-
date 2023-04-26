#include <stdio.h>

main()
{
	int i,k;
	for(i=1;i<=9;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("%d*%d=%d",k,i,i*k);
			if(i*k<10)
				printf("   ");
			else
				printf("  ");	
		}
		printf("\n");
	}
}