/*******************************************************************

Autor  		: Anderson Siqueira - aula 17 ESW
Data   		: 01/11/2016
Fun��o 		: Calcular o IMC de uma pessoa a partir do peso e altura
              do sujeito
Par�metros  : Nenhum, em termos de fun��o 
 
*/

# include <stdio.h>
# include <math.h>

int main() {
	
	float nMedia1Bim, nMedia2Bim, nMedia3Bim, nMedia4Bim, nMediaFinal;
	char vNome[50];
	
	// Informar os dados do aluno e m�dias
	printf("Informe o nome do aluno     : ");
	fgets(vNome,sizeof(vNome),stdin);
	
	printf("Informe a M�dia 1o Bimestre : ");
	scanf("%f",&nMedia1Bim);
	
	printf("Informe a M�dia 2o Bimestre : ");
	scanf("%f",&nMedia2Bim);
	
	printf("Informe a M�dia 3o Bimestre : ");
	scanf("%f",&nMedia3Bim);
	
	printf("Informe a M�dia 4o Bimestre : ");
	scanf("%f",&nMedia4Bim);
	
	nMediaFinal = nMedia1Bim+nMedia2Bim+nMedia3Bim+nMedia4Bim;
	
	return 0;
	
}
