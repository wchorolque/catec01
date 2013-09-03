#include <stdio.h>

int LeerEntero()
{
    int x;
    printf("Ingrese un numero entero: ");
    scanf("%d", &x);
    return x;
}

int Suma(int a, int b)
{
    int c;
    return a + b;
}

int main()
{
    int a, b, c;
    a = LeerEntero();
    b = LeerEntero();
    c = Suma(a, b);
    printf ("Suma: %d", c);
    return 0;
}
