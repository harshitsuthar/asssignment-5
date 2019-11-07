#include<stdio.h>
int main()
{
int a,b,c;
printf("printing a pattern which is described in assignment 5 problem");
for(a=1;a<=10;a++)
{for(b=1;b<=20;b++)
if(a+b==10)
   {printf("*");
    printf("\n");}
   else
   {c=(a+b)%2;
   if(c==1)
    printf("*");
    else
        printf("0");

}

}}





