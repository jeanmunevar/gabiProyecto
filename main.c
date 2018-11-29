#include <stdio.h>
#include <conio.h>
#include <math.h>
#define  PI 3.14159265

int main() {
    float  vector1[100], vector2[100], productoPunto[100], totalPunto= 0, vector1Elevado[100], vector2Elevado[100], vectorDeRaiz1[100], vectorDeRaiz2[100], vectorDivision1[100], vectorDivision2[100];
    int a, b;
    double val;
    val = 180.0 / PI;

    //Recibir datos del primer vector por un for
    printf("Ingrese el tamaño del vector 1");
    scanf("%i", &a);
    printf("Ingrese el tamaño del vector 2");
    scanf("%i", &b);

    if (a != b)
    {
        printf("Los tamños de los vectores no son iguales");
    } else {
        for (int i = 0; i < a; i++) {
            printf(" Digite el valor del vector 1 \t");
            scanf("%f", &vector1[i]);
        }

        for (int j = 0; j < b; ++j) {
            printf("Ingrese el valor del vector 2 \t");
            scanf("%f", &vector2[j]);
        }
        //Producto punto de los dos vectores
        for (int k = 0; k < b; ++k) {
            productoPunto[k] = vector1[k] * vector2[k];
            totalPunto += productoPunto[k];
        }


        float suma1= 0, suma2 = 0, segEcua1= 0 , segEcua2 = 0, ecuacionFinal= 0 , ecuacionFinalFinal;
        // elevar todos los elementos del vector a la 2
        for (int i = 0; i < a ; ++i) {
            vector1Elevado[i] = pow(vector1[i],2);
            vector2Elevado[i] = pow(vector2[i],2);
            suma1 +=vector1Elevado[i];
            suma2 +=vector2Elevado[i];


        }
        segEcua1 = sqrtf(suma1);
        segEcua2 = sqrtf(suma2);

        ecuacionFinal= totalPunto/(segEcua1*segEcua2);

        ecuacionFinalFinal = acosf(ecuacionFinal)*val;// aqui se ponen los grados uwu

        printf("%f \n Esta es el resultado", ecuacionFinalFinal);





    }



//    for (i = 0; i < a; i++) {
//        printf("%i. Digite el valor del vector \n");
//        printf("%f", vector1[i]);
//    }
    //Recibir datos del segundo vector por un for




    return 0;
}