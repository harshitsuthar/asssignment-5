#include<stdio.h>
int main()
{
int x,y,z,p;
for(z=0;z<=2;z++)
{for(x=0;x<=20;x++)
if(x<20)
printf("*");
printf("\n");
for(y=0;y<1;y++)
{for(p=1;p<=20;p++)
if(p==1||p==6||p==11||p==16)
printf("*");
else
printf("0");}
printf("\n");
}}
