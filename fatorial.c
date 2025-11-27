#include <stdio.h>

int fatorial(int numero){
    
    int resultado = numero;
    
    for(int i = 2; i < numero; i++){
        resultado = resultado * i;
    }

    return resultado;
}