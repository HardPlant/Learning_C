#include <stdio.h>

int main(int argc, char* argv[]){
    int input;

    scanf("%d", &input);

    if(input > 0){
        printf("반복을 시작합니다.\n");
    } else {
        printf("잘못된 값입니다.\n");
    }
    
    while(input < 0){
        input--;
        printf("input: %d\n", input);

    }
    printf("\n");

    return 0;
}