#include <stdio.h>
int main()
{
    int row,col;
    printf("enter  n of rows and coloumns \n");
    scanf("%d %d",&row,&col);
    for(int i=0;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==row||j==col||i+j==row+1)
            {
             printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}