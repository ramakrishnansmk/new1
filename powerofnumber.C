#include<studio.h>
int main()
{
int base,exponent;
long result=1;
printf("enter a base number:");
scanf("%d",&base);
printf("enter an exponent");
scanf("%d",&exponent);
while(exponent!=0)
{
result  *=base;
--exponent;
}
printf("answer=%ld",result);
return 0;
}
