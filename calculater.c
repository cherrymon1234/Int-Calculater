// 계산기
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int square(int a, int b)
{
    long long result = 1;

    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    
    return result;
}

int main(void)
{
    int select;
    int a;
    int b;

    while (1)
    {
        printf("\n=========\n 계산기 \n=========\n");
        printf("1.더하기\n");
        printf("2.빼기\n");
        printf("3.곱하기\n");
        printf("4.나누기\n");
        printf("5.제곱\n");
        printf("0.종료\n");
        printf(": ");
        scanf("%d", &select);

        if (select == 0)
        {
            return 0;
        }
        

        printf("수 입력(두개 공백 간격): ");
        scanf("%d %d", &a, &b);

        printf("  ");

        switch (select)
        {
            case 1:
                printf("%d", add(a, b));
                break;
            
            case 2:
                printf("%d", minus(a, b));
                break;

            case 3:
                printf("%d", multiply(a, b));
                break;

            case 4:
                printf("%d", divide(a, b));
                break;

            case 5:
                printf("%d", square(a, b));
                break;

            default:
                break;
        }
    }
}