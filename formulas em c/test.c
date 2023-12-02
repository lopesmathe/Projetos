#include <stdio.h>

float calcularJurosSimples(float capital, float taxa, float tempo) {
    return capital * (taxa / 100) * tempo;
}

int main() {
    float capital, taxa, tempo, jurosSimples;

    // Solicitar ao usuário para inserir os valores
    printf("Informe o capital: ");
    scanf("%f", &capital);

    printf("Informe a taxa de juros (em percentual): ");
    scanf("%f", &taxa);

    printf("Informe o tempo (em anos): ");
    scanf("%f", &tempo);

    // Calcular juros simples
    jurosSimples = calcularJurosSimples(capital, taxa, tempo);

    // Exibir o resultado
    printf("Juros simples: %.2f\n", jurosSimples);

    return 0;
}
