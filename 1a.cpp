#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tax1,tax2;
	char height[4],temp[4],favnum[5];
	printf("Enter your height in inches:");
	gets(height);
    printf("What temperature is it outside?");
	gets(temp);
    printf("Enter your favorite number:");
	gets(favnum);
	tax1=atoi(height)*atoi(favnum);
    tax2=atoi(temp)*atoi(favnum);
	if(tax1>tax2)
	{
		printf("You owe $%d in taxes.\n",tax1*10);
	}
	if(tax2>=tax1)//else
	{
		printf("You owe $%d in taxes.\n",tax2*10);
	}
	return(0);
}
