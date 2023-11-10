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

void medias();

void juros_simples();
float juros_simples_conta();
float resu_juros_simples(float x, float y, float h);
float mostrar_resu_juros_simples(float r);

float escolha_numeros();
int main(){
    int escolha0;
    printf("ola, escolha qual formula vc vai querer\n");
    printf("1 = basicas\n");
    printf("2 = medias\n");
    scanf("%d", &escolha0);
    switch (escolha0)
    {
    case 1: basicas(); break;
    case 2: medias(); break;
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

void medias(){
    int escolha2;
    printf("escolha entre:\n");
    printf("1 = juros simples");
    scanf("%d", &escolha2);
    switch (escolha2)
    {
    case 1: juros_simples(); break;
    default:printf("isso nao  he uma opçao valida"); break;
    }
}

void juros_simples(){
    juros_simples_conta();
}

float juros_simples_conta(){
    float j, c, i, t;
    printf("C = Capital\n");
    c = escolha_numeros();
    printf("I = Taxa de juros\n");
    i = escolha_numeros();
    printf("T = Tempo de aplicaçao");
    t = escolha_numeros();
    j = resu_juros_simples(c, i, t);
    mostrar_resu_juros_simples(j);
}

float resu_juros_simples(float x, float y, float h){
   return x * y * h;
}

float mostrar_resu_juros_simples(float r){
    printf("o valor do final do produto he %f", r);
}