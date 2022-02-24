#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Human{
    char name[12];
    int age;
    int height;
};

void main(){
    struct Human noh;
    strcpy(noh.name,"junseok");
    noh.age = 25;
    noh.height = 170;
    printf("이름 : %s, 나이 : % d, 키 : %d\n",noh.name,noh.age,noh.height);
}