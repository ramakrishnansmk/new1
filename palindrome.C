#include<studio.h>
int main()
{
int n,reversedinteger=0,remainder,originalinteger;
printf("enter an integer");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
revisedInteger=reversedinteger*10+remainder;
n/10;
}
if(originalinteger==reversedinteger)
printf("%d is a palindrome",originalinteger);
else
printf("%d is not a palindrome",originalinteger);
return 0;
}
