#include<stdio.h>
int a[50],n,i,k;
void create()
{
int i;
printf("enter size of array:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}

void insert()
{

n=n+1;
printf("enter the item to be inserted:");
scanf("%d",&x);
printf("enter the position of item to be inserted:");
scanf("%d",&k);
for(i=n;i>k;i--)
{
a[i+1]=a[i];
}
a[k]=x;
}
void delete()
{
printf("enter the position to be deleted:");
scanf("%d",&k);
for(i=k;i<n;i++)
{
a[i]=a[i+1];
}
n=n-1;
}
void traverse()
{
printf("Array elements are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}


int main()
{
int ch;
while(1)
{
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:create();
       break;
case 2:insert();
       break;
case 3:delete();
       break;
case 4:traverse();
       break;       
case 5:exit(0);
       break;
default:printf("invalid choice");                     	

return 0;

}

