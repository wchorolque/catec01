#include <stdio.h>

int LeerEntero()
{
    int x;
    printf("Ingrese un numero entero: ");
    scanf("%d", &x);
    return x;
}

int Suma(int &a, int b)
{
    a = 3;
    int c;
    return a + b;
}

int Resta(int a, int b)
{
    return a - b;
}

int main()
{
    int a, b, c;
    a = LeerEntero();
    b = LeerEntero();
    printf ("\nvalor a = %d", a);
    printf ("\nvalor b = %d", b);
    c = Suma(a, b);
    printf ("\nSuma: %d", c);
    printf ("\nResta: %d", Resta(a, b));
    printf ("\nvalor a = %d", a);
    printf ("\nvalor b = %d", b);
    return 0;
}
