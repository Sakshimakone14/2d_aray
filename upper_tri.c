#include<stdio.h>
    int main()
{
      int a[10][10],i,j,n,s=0;
         printf("Enter limit:  ");
            scanf("%d",&n);
         printf("Enter %d numbers= ",n*n);
            for(i=0;i<n;i++)
               {
                  for(j=0;j<n;j++)
                    {
                         scanf("%d",&a[i][j]);
                    }
               }
             for(i=0;i<n;i++)
               {
                  for(j=0;j<n;j++)
                    {
                         if(i>=j)
                           {
                               s=s+a[i][j];
                           }
                    }
               }       
      printf("\n Sum of upper triangular matrix= %d",s);
}    
