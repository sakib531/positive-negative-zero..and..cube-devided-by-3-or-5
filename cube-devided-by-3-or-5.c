#include<stdio.h>

int main (){
    int a;
    printf ("enter the value of integer : ");
    scanf ("%d",&a);
    if (a*a*a%3==0){
        printf ("it's only divisible by 3");
    }
    else if (a*a*a%5==0){
        printf ("it's only divisible by 5");
    }
    else if (a*a*a%3!=0 && a*a*a%5!=0){
        printf ("it's not divisible by 3 or 5");
    }
    return 0;
}

