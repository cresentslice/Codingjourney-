#include <stdio.h>

int main(int argc, char const *argv[])
{
    int u = 50;
    int v = 60;
    int w = 70;

    printf("\nu = %d,v = %d,w = %d\n",u,v,w);

    u = v + w;
    v = w + 20;
    w = v + 100;

    printf("\nu = %d,v = %d,w = %d\n",u,v,w);

    return 0;
}
