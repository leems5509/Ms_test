#include <stdio.h>

int main(void)
{
    int age, score;  // 변수 선언

    3+4;
    printf("나이가 어떻게 되세요? : "); 
    scanf("%d", &age);
    
    printf("점수는요? : "); 
    scanf("%d", &score);

    // 한 줄로 합친 printf
    printf("\n\nMy age : %d \n%d is my point \nGood \nmorning \neverybody\n", age, score);

    return 0;
}
