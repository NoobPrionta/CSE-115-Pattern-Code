#include<stdio.h>

// 1
// 0 0
// 1 1 1

int main(){
    int n,row,col;
    printf("Enter N:");
    scanf("%d",&n);
    for (row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",row%2);
        }
        printf(" \n");
    }
return 0;
}
