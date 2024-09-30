#include <stdio.h>

int pertenceFibonacci(int n) {
    int a = 0, b = 1, temp;
    
    if (n == 0) return 1; 

    while (b < n) {
        temp = b;
        b = (a + b);
        a = temp;
    }
    
    return (b == n) ? 1 : 0; 
}

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero)) {
        printf("O nemero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O nemero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}