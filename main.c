/******************************************************************************

Crie um programa que pede 5 números inteiros pelo teclado e armazena-os, 
respectivamente, nas variáveis A, B, C, D e E. Em seguida, faça o que se pede: 
– sabendo que B e C são respectivamente a base e a altura de um triângulo, 
imprima a área deste triângulo – sabendo que A, B, C e D formam um retângulo, 
imprima o perímetro deste retângulo – sabendo que E é o valor do raio de um determinado círculo,
imprima a área deste círculo

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    printf("Digite o quarto número: ");
    scanf("%d", &d);
    printf("Digite o quinto número: ");
    scanf("%d", &e);
    
    int area = (b * c) / 2;
    printf("A área desse triangulo é: %d \n", area);
    
    int perimetro = (a * b)*2;
    printf("O perimetro desse triangulo é: %d \n", perimetro);
    
    int raio = (e * 2) * 3.14;
    printf("A área desse circulo é %d \n", raio);
    
    return 0;
    
}
