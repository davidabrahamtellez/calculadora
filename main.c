#include <stdio.h>

int main (){
    char operador;
    double primerNumero, segundoNumero;
    printf ("Ingresa un operador (+, -, *, /) : ");
    scanf ("%c", &operador);

    printf("Ingresa dos operandos: ");
    scanf("%lf %lf", &primerNumero, &segundoNumero);

    switch (operador) {
        case '+':
        printf("%.1lf + %.1lf = %2.lf\n", primerNumero, segundoNumero, primerNumero + segundoNumero);
        break;
        case '-':
        printf("%.1lf - %.1lf = %2.lf\n", primerNumero, segundoNumero, primerNumero - segundoNumero);
        break;
        case '*':
        printf("%.1lf * %.1lf = %2.lf\n", primerNumero, segundoNumero, primerNumero * segundoNumero);
        break;
        case '/':
        printf("%.1lf / %.1lf = %2.lf\n", primerNumero, segundoNumero, primerNumero / segundoNumero);
        break;
        default:
        printf("el operador no es correcto");
        break;
    }
}