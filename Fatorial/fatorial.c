#include <stdio.h>
 
long long fatorial(int n) {
    if (n < 0) return -1; 
    if (n == 0) return 1; 
    
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
 
int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    long long resultado = fatorial(num);
    
    if (resultado == -1) {
        printf("Número negativo não tem fatorial!\n");
    } else {
        printf("%d! = %lld\n", num, resultado);
    }
    
    return 0;
}