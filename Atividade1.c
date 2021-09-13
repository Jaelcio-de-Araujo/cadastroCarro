#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 10

typedef struct {
char marca[30];
char modelo[30];
int ano_fabricacao;
char placa[10];}
Veiculo;
Veiculo veic[TAM];Veiculo aux;

int main() {
int i,j,u,k, ano = 0, cont = 0, opcao = 0, sum, sum2, sum3;
int ano_fabri[TAM];   char modelo[30];
setlocale(LC_ALL,"portuguese");
 // -------------------------------------- MENU---------------------------------- //


while(-1 != 0) {
if(cont < TAM) {
printf("\n  --------------- Sistema de cadastro de veiculos --------------- \n");
printf(" \n 1. Cadastrar veiculo ");
printf(" \n 2. Veiculos cadastrados ");
printf(" \n 3. Buscar por ano ");
printf(" \n 4. Buscar por modelo ");
printf(" \n 5. Busca por ano acima de ");
printf(" \n 0. Sair \n");

printf("-----------------------------------------------------------------");}
else
{
printf("  --------------- Sistema de cadastro de veiculos --------------- \n");
printf(" \n 2. Veiculos cadastrados ");         printf(" \n 3. Buscar por ano ");
printf(" \n 4. Buscar por modelo ");         printf(" \n 5. Buscar por ano acima de\n");
printf(" \n 0. Sair \n");
printf("-----------------------------------------------------------------");
}
printf(" \n Digite o número da opção desejada: ");    scanf("%d", &opcao);

switch (opcao) {  // ------------------------------------- CADASTRO ---------------------------------------

case 1:
if(cont < TAM) {
printf("\n");
printf(" Digite a marca do veiculo: ");
 scanf("%s", &veic[cont].marca);
printf(" Digite o modelo do veiculo: ");
scanf("%s", &veic[cont].modelo);
printf(" Digite o ano de fabricação (XXXX): ");
scanf("%d", &veic[cont].ano_fabricacao);
 printf(" Digite a placa do veiculo (ABC-1234): ");
scanf("%s", &veic[cont].placa);
while (strlen(veic[cont].placa) != 8) {
printf("Placa inválida! Digite novamente: ");
scanf("%s", &veic[cont].placa);
}

cont +=
printf("\n");
printf("   ------------Veiculo cadastrado com sucesso! -----------\n\n\n\n");

}else { printf("\n ----------------- Limite máximo de cadastro atingido! ------------------\n\n\n\n\n");
}
break;

// ------------------------------- LISTA DE CADASTRO -------------------------------------
case 2:
for(i =  1 ; i < cont; i++){
for(u = 0; u < cont - 1; u++){
if (veic[u].ano_fabricacao > veic[u+1].ano_fabricacao){
 aux = veic[u];
veic[u] = veic[u+1];
veic[u+1] = aux;
 }
}
}
for(j = 0; j < cont; j++){
printf("\nMarca:%s", veic[j].marca);
printf("\nModelo:%s", veic[j].modelo);
printf("\nAno de fabricação:%d", veic[j].ano_fabricacao);
printf("\nPlaca:%s\n", veic[j].placa);
}
printf("\n\n\n");
system ("\n\npause");
 break;

// ------------------------------------ LISTA POR ANO ----------------------------------------

case 3:
sum2 = 0;
printf("\nDigite o ano de fabricação: ");
scanf("%d", &ano);
for(k = 0; k < cont; k++){
if(ano == veic[k].ano_fabricacao){
printf("\nMarca:%s", veic[k].marca);
printf("\nModelo:%s", veic[k].modelo);
printf("\nAno de fabricação:%d", veic[k].ano_fabricacao);
printf("\nPlaca:%s\n\n\n", veic[k].placa);
sum2 ++;
}
}
if (sum == 0){
printf("\n   --------------- Veiculo não encontrado. --------------------\n\n\n");
 }
system ("\n\npause");
break;

// ------------------------------------ LISTA POR MODELO ----------------------------------------

case 4:
sum = 0;
printf("\nDigite o modelo do veiculo: ");
 scanf("%s", &modelo);
for(i = 0; i <= cont; i++){
 if(!strcmp(modelo, veic[i].modelo)){
printf("\nMarca:%s", veic[i].marca);
printf("\nModelo:%s", veic[i].modelo);
 printf("\nAno de fabricação:%d", veic[i].ano_fabricacao);
printf("\nPlaca:%s\n\n\n", veic[i].placa);
sum ++;
}
}if (sum == 0){
printf("\n   ---------------- Veiculo não encontrado. ---------------------\n\n\n");
}
system ("\n\npause");
 break;   // --------------------------------- LISTA POR ANO  -------------------------------------

case 5:
sum3 = 0;
printf("\nBuscar por ano acima de: ");
scanf("%d", &ano);
for(i = 0; i < cont; i++){
if(ano <= veic[i].ano_fabricacao){
printf("\nMarca:%s", veic[i].marca);
printf("\nModelo:%s", veic[i].modelo);
printf("\nAno de fabricação:%d", veic[i].ano_fabricacao);
printf("\nPlaca:%s\n\n\n", veic[i].placa);
sum3 ++;
}
}if (sum3 == 0){
printf("\n   --------------Veiculo não encontrado. ----------------------\n\n\n");
}
system ("\n\npause");
break;

// --------------------------------------- SAIR -----------------------------------------

case 0:
printf ("\n   -----------------Programa Finalizado-------------------\n\n\n\n\n");
exit(0);
break;
default:
printf(" \n Você digitou uma opção inválida!");
break;
}   }
return 0;
}
