#include<stdio.h>
int main(){
    int num,f=1;
    printf("Enter any number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        f=f*i;
        
    }
    printf("%d",f);
    return 0;
}