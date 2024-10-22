#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[50],n,i,x;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the item to be found:");
scanf("%d",&x);

for(i=0;i<n;i++)
{
if(a[i]==x)
printf("\nItem found which is in %dth position",i);

}
return 0;
}

