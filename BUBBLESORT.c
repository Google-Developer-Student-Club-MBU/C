#include<stdio.h>
int main()
{
 int i,j,n,flag,store;
 printf("Enter the number of elements to be sorted:\n");
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
   printf("Enter Number:");
   scanf("%d",&a[i]);
   printf("\n");
 }
 for(i=0;i<n-1;i++)
 {
   flag=0;
   for(j=0;j<n-i-1;j++)
   {
     if(a[j]>a[j+1])
     {
       store=a[j];
       a[j]=a[j+1];
       a[j+1]=store;
       flag=1;
     }
   }
   if(flag==0)
   {
     break;
   }
  }
  printf("After sorting, the arranged data is:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}
