#include<stdio.h>
int main()
{
char str[20];
int n,i;
printf("enter the string:");
scanf("%s",str);
printf("enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",str[i]);
}
return 0;
}
 
