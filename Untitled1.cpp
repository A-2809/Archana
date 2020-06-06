#include<stdio.h>
main()
{
	int i,j;
	printf("enter 2 numbers\n");
	scanf("%d%d",&i,&j);
	i=i+j;
	j=i-j;
	i=i-j;
	printf("swapping numbers %d and %d",i,j);
	return 0;
}
