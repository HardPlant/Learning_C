#include <stdio.h>

int main(int argc, char* argv[]){
    int input;

    scanf("%d", &input);

    if(input == 10){
        printf("10을 입력했습니다.\n");
    } else if (input == 20) {
        printf("20을 입력했습니다.\n");
    }
    else{
        print("10,20이 아닌 다른 것을 입력했습니다.\n");
    }

    return 0;
}