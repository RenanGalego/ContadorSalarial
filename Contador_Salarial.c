#include <stdio.h>
#include <stdlib.h>

//1	R$ 0,00-------------R$ 999,00	 10 %
//2	R$ 999,01-----------R$ 1.999,00	 15 %
//3	R$ 1.999,01 -------	R$ 9.999,00	 20 %
//4	R$ 9.999,01---------R$ 99.999,00 25 %
//5	Acima 99.999,01	---------------- 30 %

//desenvolva um programa que leia o salário bruto de 15 funcionários de uma empresa,
//calcule e exiba o salário líquido de cada funcionário.
//Ao final, mostre o total de salários brutos, salários líquidos e impostos de todos os funcionários.

void main(){

float salario_bruto = 0;
float salario_liqudo = 0;
float imposto=0;
float total_bruto = 0, total_liquido = 0, total_imposto = 0;
int contador = 1;

while(contador<=5 ){

    printf("\nEntre com o salario bruto: R$ ");
    scanf("%f", &salario_bruto);

    if(salario_bruto <900.00){
        imposto = salario_bruto * 0.10;
        total_bruto = total_bruto + salario_bruto;
        total_imposto = total_imposto + imposto;
        total_liquido = total_liquido + salario_liqudo;

    }else if ((salario_bruto >900.01) && (salario_bruto <= 1999)){
        imposto = salario_bruto * 0.15;
        total_bruto = total_bruto +salario_bruto;
        total_imposto = total_imposto + imposto;
        total_liquido = total_liquido + salario_liqudo;

    }else if ((salario_bruto >1999.01) && (salario_bruto <= 9999)){
        imposto = salario_bruto * 0.20;
        total_bruto = total_bruto +salario_bruto;
        total_imposto = total_imposto + imposto;
        total_liquido = total_liquido + salario_liqudo;

    }else if ((salario_bruto >9999.01) && (salario_bruto <= 99999)){
        imposto = salario_bruto * 0.25;
        total_bruto = total_bruto +salario_bruto;
        total_imposto = total_imposto + imposto;
        total_liquido = total_liquido + salario_liqudo;

    }else{
        imposto = salario_bruto * 0.30;
        total_bruto = total_bruto +salario_bruto;
        total_imposto = total_imposto + imposto;
        total_liquido = total_liquido + salario_liqudo;
    }

    contador++;
    fflush;
    salario_liqudo = salario_bruto - imposto;
    printf("Imposto: %f\n", imposto);
    printf("Salario liquido: %f\n\n", salario_liqudo);

}

printf("Total salario bruto: R$ %f\n\n", total_bruto);
printf("Total salario liquido: R$ %f\n\n", total_liquido);
printf("Total de imposto: R$ %f\n\n", total_imposto);

}