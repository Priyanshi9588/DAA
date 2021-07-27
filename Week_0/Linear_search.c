#include<stdio.h>
void main()
{

int arr[]={3,42,5,6,83,7,9,23,24,89};
int x,i,f=0;
printf("Enter element you want to search:");
scanf("%d",&x);
for(i=0;i<sizeof(arr)/sizeof(int);i++)
{
if(arr[i]==x)
	f=1;
}
if(f==1)
        printf("Element found");
else
        printf("Element not found");
}
