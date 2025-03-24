#include <stdio.h>

void convertirMoneda(float cantidad, int opcion) {
    float tasa_dolar = 7.8, tasa_euro = 8.5;
    
    switch (opcion) {
        case 1: // Quetzales a Dólares
            printf("Equivalente en dólares: %.2f\n", cantidad / tasa_dolar);
            break;
        case 2: // Quetzales a Euros
            printf("Equivalente en euros: %.2f\n", cantidad / tasa_euro);
            break;
        case 3: // Dólares a Quetzales
            printf("Equivalente en quetzales: %.2f\n", cantidad * tasa_dolar);
            break;
        case 4: // Euros a Quetzales
            printf("Equivalente en quetzales: %.2f\n", cantidad * tasa_euro);
            break;
        default:
            printf("Opción inválida.\n");
    }
}

int main() {
    int opcion;
    float cantidad;

    printf("Seleccione la conversión:\n");
    printf("1. Quetzales a Dólares\n2. Quetzales a Euros\n3. Dólares a Quetzales\n4. Euros a Quetzales\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    convertirMoneda(cantidad, opcion);
    
    return 0;
}
