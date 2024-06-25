#include<stdio.h>
   int main()
{
      int a[10][10],i,j,n;
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
    printf("\n Diagonal elements= ");            
      for(i=0;i<n;i++)
             {
                 for(j=0;j<n;j++)
                     {
                        if(i==j)
                        {
                          printf("%d\t",a[i][j]);
                        }  
                     }
             }   
}   
