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
    printf("sc: %d\n", sc);
    return 0;
}