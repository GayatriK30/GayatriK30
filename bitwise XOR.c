#include<stdio.h>
int main()
{
   int p,q,r;
p=60;//60=0011 1100//;
q=13;// 13=0000 1101//;
r=0;
r= p^q;//49= 0011 0001//;
printf("the value of r is %d",r );
return 0;
}



output:
the value of r is 49