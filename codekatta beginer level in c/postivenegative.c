#include<stdio.h>
int main() 
{
int i;
printf("enter the number\n");
scanf("%d",&i); 
  if(i==0) 
  {  
  printf("the number is %d",i); }
else
 {
   i<0?printf("the number %d is negative",i):printf("the number %d is postive",i ); }
return 0;
}
