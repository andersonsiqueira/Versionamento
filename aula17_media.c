/*******************************************************************

Autor  		: Anderson Siqueira - aula 17 ESW
Data   		: 16/11/2016
Fun√ß√£o 		: Calcular a m√©dia dos alunos
Par√¢metros  : Nenhum, em termos de fun√ß√£o 
 
*/

# include <stdio.h>
# include <math.h>
# include <locale.h>

int main() {
	
	float nMedia1Bim, nMedia2Bim, nMedia3Bim, nMedia4Bim, nMediaFinal;
	char vNome[50];
	
	setlocale(LC_ALL,"Portuguese");
	
	// Informar os dados do aluno e m√©dias
	printf("Informe o nome do aluno     : ");
	fgets(vNome,sizeof(vNome),stdin);
	
	printf("Informe a MÈdia 1o Bimestre : ");
	scanf("%f",&nMedia1Bim);
	
	printf("Informe a MÈdia 2o Bimestre : ");
	scanf("%f",&nMedia2Bim);
	
	printf("Informe a MÈdia 3o Bimestre : ");
	scanf("%f",&nMedia3Bim); 
	
	printf("Informe a MÈdia 4o Bimestre : ");
	scanf("%f",&nMedia4Bim);
	
	nMediaFinal = (nMedia1Bim+nMedia2Bim+nMedia3Bim+nMedia4Bim)/4;
	
	printf("\n\nO aluno %s est·",vNome);
	
	if (nMediaFinal >= 6) {
		printf("\nAprovado");
	}
	else if ( (nMediaFinal >= 4) && (nMediaFinal < 6)) {
		printf("\nem exame");
	}
	else {
		printf("\nReprovado");
	}
	
	return 0;
	
}
