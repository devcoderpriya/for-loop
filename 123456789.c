#include<stdio.h>
int main()
{
    char c=1;

    int rows;
    printf("enter the rows");
    scanf("%d",&rows);

    int column;
    printf("enter the rows");
    scanf("%d",&column);

    int i,j;
    for(i=1;i<=rows;i++){
        for(j=1;j<=column;j++){
            printf("%d",c);
            c++;
           }
            printf("\n");
    }
    return 0;
}
