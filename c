#include <stdio.h>

void positnegat (int num1, int num2){
int positivo = 0, negativo = 0;
if (num1 > 0){
positivo += 1;
}
else {
negativo += 1;
}
if (num2 > 0){
positivo += 1;
}
else {
negativo += 1;
}
printf ("\nPositivos: %i\nNegativos: %i\n", positivo, negativo);
}


    q    qw  q    float nota(float numA, float numB, float numC){
float media_ponderada = (numA * 1 + numB * 3 + numC * 5) /9;

return(media_ponderada);
}

int tabuada(int numA, int numB){
int soma_um = 0, soma_dois = 0, soma_total = 0, resultado1 = 0, resultado2 = 0;

printf("\nTabuada do primeiro número: \n");
for(int x = 1; x <= 10; ++x){
resultado1 = x * numA;
printf("\n%ix%i = %i\n", x, numA, resultado1);
soma_um = soma_um + resultado1;
}

printf("\nTabuada do segundo número: \n");
for(int x = 1; x <= 10; ++x){
resultado2 = x * numB;
printf("\n%ix%i = %i\n", x, numB, resultado2);
soma_dois = soma_dois + resultado2;
}

soma_total = soma_um + soma_dois;
float media = nota(numA, numB, soma_total);
printf("\nA média ponderada das tabuadas é: %.2f\n", media);

return (soma_total);
}

int main(void){

int num1 = 0, num2 = 0;

printf ("Digite o primeiro número: ");
scanf ("%i", &num1);
printf ("Digite o segundo número: ");
scanf ("%i", &num2);
positnegat(num1, num2);

float numA, numB, numC, solucao;

printf("\nDigite sua primeira nota: ");
scanf ("%f", &numA);
printf("Digite sua segunda nota: ");
scanf ("%f", &numB);

numC = numA + numB;
solucao = nota(numA, numB, numC);

printf("\nA média final é: %.2f\n", solucao);

int tabuada_um, tabuada_dois, resultado;

printf("\nDigite o primeiro número: ");
scanf("%i", &tabuada_um);
printf("Digite o segundo número: ");
scanf("%i", &tabuada_dois);
resultado = tabuada(tabuada_um, tabuada_dois);
printf("\nA soma dos resultados das duas tabuadas é: %d", resultado);

return 0;
}
