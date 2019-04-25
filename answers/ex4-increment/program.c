#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 20;
    int b = 30;
    int c = 40;

    printf("\na = %d, b = %d, c = %d\n",a,b,c);

    a = a + 30;
    b += 40;
    c++;

    printf("\na = %d, b = %d, c = %d\n",a,b,c);




    return 0;
}
