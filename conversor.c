#include <stdio.h>

void convertir(int opcion, double cantidad) {
    double resultado;

    if (opcion == 1) { // De quetzales a otras monedas
        printf("1. Convertir a Dólares\n");
        printf("2. Convertir a Euros\n");
        int subopcion;
        printf("Seleccione la opción (1-2): ");
        scanf("%d", &subopcion);
        
        if (subopcion == 1) {
            resultado = cantidad / 7.8;  // 1 USD = 7.8 GTQ (aproximadamente)
            printf("%.2f Quetzales son %.2f Dólares.\n", cantidad, resultado);
        } else if (subopcion == 2) {
            resultado = cantidad / 8.9;  // 1 EUR = 8.9 GTQ (aproximadamente)
            printf("%.2f Quetzales son %.2f Euros.\n", cantidad, resultado);
        } else {
            printf("Opción inválida.\n");
        }
    }
    else if (opcion == 2) { // De dólares a otras monedas
        printf("1. Convertir a Quetzales\n");
        printf("2. Convertir a Euros\n");
        int subopcion;
        printf("Seleccione la opción (1-2): ");
        scanf("%d", &subopcion);

        if (subopcion == 1) {
            resultado = cantidad * 7.8;  // 1 USD = 7.8 GTQ
            printf("%.2f Dólares son %.2f Quetzales.\n", cantidad, resultado);
        } else if (subopcion == 2) {
            resultado = cantidad * 0.91;  // 1 EUR = 1.1 USD aproximadamente
            printf("%.2f Dólares son %.2f Euros.\n", cantidad, resultado);
        } else {
            printf("Opción inválida.\n");
        }
    }
    else if (opcion == 3) { // De euros a otras monedas
        printf("1. Convertir a Quetzales\n");
        printf("2. Convertir a Dólares\n");
        int subopcion;
        printf("Seleccione la opción (1-2): ");
        scanf("%d", &subopcion);

        if (subopcion == 1) {
            resultado = cantidad * 8.9;  // 1 EUR = 8.9 GTQ
            printf("%.2f Euros son %.2f Quetzales.\n", cantidad, resultado);
        } else if (subopcion == 2) {
            resultado = cantidad / 0.91;  // 1 USD = 1.1 EUR
            printf("%.2f Euros son %.2f Dólares.\n", cantidad, resultado);
        } else {
            printf("Opción inválida.\n");
        }
    } else {
        printf("Opción inválida.\n");
    }
}

int main() {
    double cantidad;
    int opcion;

    printf("Conversor de Moneda:\n");
    printf("1. Convertir de Quetzales\n");
    printf("2. Convertir de Dólares\n");
    printf("3. Convertir de Euros\n");
    printf("Seleccione la opción (1-3): ");
    scanf("%d", &opcion);
    if((opcion > 3) || (opcion < 1)){
        printf("Error, opcion inválida");
        return 0;
    }

    printf("Ingrese la cantidad a convertir: ");
    scanf("%lf", &cantidad);

    convertir(opcion, cantidad);

    return 0;
}
