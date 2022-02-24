#include <stdio.h>
#include "headers/func.h"

int main(){
    int num, a, b;
    printf("원하는 숫자 입력 : ");
    scanf("%d",&num);
    printf("계산 숫자 두개 입력(a b) : ");
    scanf("%d %d",&a,&b);

    switch (num)
    {
    case 1:
        printf("%d + %d = %d\n",a,b,func1(a,b));
        //printf("%d + %d = %d\n",a,b,a+b);
        break;
    case 2:
        printf("%d - %d = %d\n",a,b,func2(a,b));
        //printf("%d + %d = %d\n",a,b,a-b);
        break;
    default:
        break;
    }
}