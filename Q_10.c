#include<stdio.h>

int main()

{
//code

int x,i,z;

printf("enter the number which want tof table: ");

scanf("%d",&z);

i=1;

for(x=1;x<=10;x++)

printf("%d ",x*z*i);

i++;

return 0;

}
