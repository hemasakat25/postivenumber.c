#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a >= b && a >= c)
{
    printf(" Largest number %d ",a );
}
else if(b >= a && b >= c)
{
printf(" largest number %d",b);
}
else if(c >= a && c >= b)
{
    printf("largest number %d",c);
}

return 0;
}