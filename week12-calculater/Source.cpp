#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

void Sum(double *n, double*m)
{                      
    double total;
    total = *n + *m;
    printf("\n%.2lf", total);
}

void Min(double* n, double* m)
{
    double total;
    total = *n - *m;
    printf("\n%.2lf", total);
}

void Mul(double* n, double* m)
{
    double total;
    total = (*n)*(*m);
    printf("\n%.2lf", total);
}

void Div(double* n, double* m)
{
    double total;
    total = *n / *m;
    printf("\n%.2lf", total);
}

int main() 
{                                   
    double num[2];
    int key;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%lf", &num[i]);
    }
    printf("\n1.Sum\n2.Minus\n3.Multiply\n4.Divide\n");

    printf("Select : "); 
    scanf("%d", &key);

    if (key == 1)
        Sum(&num[0], &num[1]);
    else if (key == 2)
        Min(&num[0], &num[1]);
    else if (key == 3)
        Mul(&num[0], &num[1]);
    else if (key == 4)
        Div(&num[0], &num[1]);

    return 0;
}