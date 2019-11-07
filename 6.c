#include<stdio.h>
int main()
{
int x,p,z;
for(z=0;z<=2;z++)
{for(x=1;x<=19;x++)
if(x==1||x==6||x==11||x==15)
printf("0");
else
printf("*");
printf("\n");
for(p=1;p<=19;p++)
if(p==1||p==6||p==11||p==15)
printf("*");
else
printf("0");
printf("\n");
}}





