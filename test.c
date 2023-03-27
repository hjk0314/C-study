#include <stdio.h>
int main(void)
{
    /* 아래 범위를 넘어서면 제일 작은 숫자로 반복 순환한다. */
    signed char sc; /* -128 ~ 127*/
    unsigned char uc; /* 0 ~ 256 */
    signed short int ssi; /* -32768 ~ 32767 */
    unsigned short int usi; /* 0 ~ 65536 */
    signed long int sli; /* -2147483648 ~ 2147483647 */
    unsigned long int uli; /* 0 ~ 4294967296 */
    float f = 3.14f; /* 기본적으로 여섯자리까지 표현 */
    double d = 3.141592654; /* 더블도 기본적으로 여섯자리까지 표현 */
    printf("signed char: %d\n", sc);
    printf("unsigned char: %d\n", uc);
    printf("signed short int: %d\n", ssi);
    printf("unsigned short int: %d\n", usi);
    printf("signed long int: %d\n", sli);
    printf("unsigned long int: %d\n", uli);
    printf("float: %f\n", f);
    printf("double: %.9lf\n", d); /* 9자리 모두 표현하는 방법 */
    return 0;
}