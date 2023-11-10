#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void basicas();

void adiçao();
float adiçao_conta();
float resu_adiçao(float x, float y);
float mostrar_resutado_adiçao(float r);

void subtraçao();
float subtraçao_conta();
float resu_subtraçao(float x, float y);
float mostrar_resutado_subtraçao(float r);

void mutiplicaçao();
float mutiplicaçao_conta();
float resu_mutiplicaçao(float x, float y);
float mostrar_resutado_mutiplicaçao(float r);

void divisao();
float divisao_conta();
float resu_divisao(float x, float y);
float mostrar_resutado_divisao(float r);

float escolha_numeros();
int main(){
    int escolha0;
    printf("ola, escolha qual formula vc vai querer\n");
    printf("1 = basicas\n");
    scanf("%d", &escolha0);
    switch (escolha0)
    {
    case 1: basicas(); break;
    default: printf("informaçao invalida"); break;
    }
}

void basicas(){
    int escolha1;
    printf("1 = adiçao\n");
    printf("2 = subtraçao\n");
    printf("3 = mutiplicaçao\n");
    printf("4 = divisao\n");
    scanf("%d", &escolha1);
    switch (escolha1)
    {
    case 1: adiçao(); break;
    case 2: subtraçao(); break;
    case 3: mutiplicaçao(); break;
    case 4: divisao(); break;
    default: printf("informaçao nao valida"); break;
    }
}

void adiçao(){
    adiçao_conta();
}

float adiçao_conta(){
    float a, b, r;
    a = escolha_numeros();
    b = escolha_numeros();
    r = resu_adiçao(a, b);
    mostrar_resutado_adiçao(r);
    return r;
}

float resu_adiçao(float x, float y){
    return x + y;
}

float mostrar_resutado_adiçao(float r){
    printf("o valor he %f", r);
}

void subtraçao(){
    subtraçao_conta();
}

float subtraçao_conta(){
    float a, b, r;
    a = escolha_numeros();
    b = escolha_numeros();   
    r = resu_subtraçao(a, b);
    mostrar_resutado_subtraçao(r);
}

float resu_subtraçao(float x, float y){
    return x - y;
}

float mostrar_resutado_subtraçao(float r){
    printf("o valor he %f", r);
}


void mutiplicaçao(){
    mutiplicaçao_conta();
}

float mutiplicaçao_conta(){
    int a, b, r;
    a = escolha_numeros();
    b = escolha_numeros();
    r = resu_mutiplicaçao(a, b);
    mostrar_resutado_mutiplicaçao(r);
}

float resu_mutiplicaçao(float x, float y){
    return x * y;
}

float mostrar_resutado_mutiplicaçao(float r){
    printf("o valor he %f", r);
}

void divisao(){
    divisao_conta();
}

float divisao_conta(){
    float a, b, r;
    a = escolha_numeros();
    b = escolha_numeros();
    r = resu_divisao(a, b);
    mostrar_resutado_divisao(r);
}

float resu_divisao(float x, float y){
    return x / y;
}

float mostrar_resutado_divisao(float r){
    printf("o resutado he %f", r);
}

float escolha_numeros(){
    float x;
    printf("me fale um valor");
    scanf("%f", &x);
    return x;
}