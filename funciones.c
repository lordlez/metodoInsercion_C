#include "header.h"


void ordenInsercion(int vector[], int cant){
    int i, pos, aux;
    for(i=0; i<cant; i++){
        pos = i;
        aux = vector[i];
        while((pos>0) && (vector[pos-1]>aux)){
            vector[pos] = vector[pos-1];
            pos--;
        }
        vector[pos] = aux;
    }
}

void mostrarVector(int vector[], int cant){
    int i;
    for(i=0; i<cant; i++){
        printf("%d ", vector[i]);
    }
}
