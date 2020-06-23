#include <stdlib.h>
#include <stdio.h>
#define PI 3.14

int retangulo (float b, float h)
{
    return(b*h);

}

float triangulo (float b, float h)
{
    return(b*h/2);
}

float circulo (float r)
{
    return(PI*r*r);
}


int main ()
{
    int N;
    float b, h, r, x=0;
    scanf("%d", &N);

    while(N>0)
    {

        switch(N)
        {
        case 1:
            scanf("%f", &b);
            scanf("%f", &h);
            x=retangulo(b, h);
            printf("%.2f\n", x);
            break;

        case 2:
            scanf("%f", &b);
            scanf("%f", &h);
            x=triangulo(b, h);
            printf("%.2f\n", x);
            break;
        case 3:
            scanf("%f", &r);
            x=circulo(r);
            printf("%.2f\n", x);
            break;
        }
      scanf("%d", &N);
    }
    return 0;
}

