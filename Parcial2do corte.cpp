#include <stdio.h>

float promedio(int valores[], int cantidad) {
    int i;
    float suma = 0.0;

    for (i = 0;i<cantidad;i++)
        suma += valores[i];

    return suma / (float) cantidad;
}


int main() {

    int notas[12];
    char nombre[25];
    char opcion[3];
    char nombredeprofesor[30];
    int n,i;

    do {
        printf("Ingresar nombre del alumno: ");
        scanf("%s", nombre);
        
         printf("Ingresar nombre de profesor:");
        scanf("%s",nombredeprofesor);

        printf("Csntidad de notas %s? ", nombre);
        scanf("%d", &n);

        for (i = 0; i < n; ++i) {
            printf("  Nota %d: ", i + 1);
            scanf("%d", &notas[i]);
        }

        printf("El promedio de la nota %s es %.1f\n", nombre, promedio(notas, n));

        printf("Desea verificar mas promedios? ");
        scanf("%s",opcion);
        
        
        
        

    } while (opcion[0] == 's' || opcion[0] == 'S');

    return 0;
}