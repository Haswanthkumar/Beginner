#include<stdio.h>
int main (void)
{
	int count=0;
	do
	{
		static int count=0;
		++count;
		printf("\n count =%d\n",count);
		
		
	}
	while(++count<=8);
	printf("count=%d",count);
	return 0;
}
