#include<stdio.h>

int main (){
    int a;
    printf ("enter the value of integer : ");
    scanf ("%d",&a);
    if (a>0){
        printf ("its an positive");
    }
    else if (a<0){
        printf ("its a negative");
    }
    else if (a==0){
        printf ("its a zero");
    }
    return 0;
}

