#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[100];
char cpf[15];
char sexo[2];
int idade;


struct elemento{
	char pergunta[200];
	int pontuacao;
};

struct elemento questoes[10] = {
	{ .pergunta = "Tem Febre? (s) para SIM ou (n) para N�O.\n", .pontuacao = 5},
	{ .pergunta = "Tem dor de cabe�a? (s) para SIM ou (n) para N�O.\n", .pontuacao = 1},
	{ .pergunta = "Tem secre��o nasal ou espirros? (s) para SIM ou (n) para N�O.\n", .pontuacao = 1},
	{ .pergunta = "Tem dor dor/irrita��o na garganta? (s) para SIM ou (n) para N�O.\n", .pontuacao = 1},
	{ .pergunta = "Tem tosse seca? (s) para SIM ou (n) para N�O.\n", .pontuacao = 3},
	{ .pergunta = "Tem dificuldade respirat�ria? (s) para SIM ou (n) para N�O.\n", .pontuacao = 10},
	{ .pergunta = "Tem tosse dores no corpo? (s) para SIM ou (n) para N�O.\n", .pontuacao = 1},
	{ .pergunta = "Tem diarr�ia? (s) para SIM ou (n) para N�O.\n", .pontuacao = 1},
	{ .pergunta = "Esteve em contato, nos �ltimos 14 dias, com um caso diagnosticado com COVID-19? (s) para SIM ou (n) para N�O.\n", .pontuacao = 10},
	{ .pergunta = "Esteve em locais com grande aglomera��o? (s) para SIM ou (n) para N�O.\n", .pontuacao = 3},
	
};

void flush_in(void){  //procedimento para limpar o buffer caso usuario digite erroneamente outros caracteres.
    int ch;
    do{ch = fgetc(stdin);
	}while(ch  != EOF && ch != '\n' );
}
	
int main(){
	FILE *file;

	setlocale(LC_ALL,"portuguese");
	
	char res;
	int soma =0, i;
	
	printf("Por favor, informe seus dados:\n\n");
	printf("digite seu CPF:  (Formato: ***.***.***-**)\n");
	fgets(cpf, 15, stdin);
	setbuf(stdin,NULL);
	
	printf("Digite seu nome:\n");
	fgets(nome, 41, stdin);
	setbuf(stdin,NULL);
	
	printf("Digite seu sexo:(f) feminino - (m) masculino\n");
	fgets(sexo, 2, stdin);
	setbuf(stdin,NULL);
	
	printf("digite sua idade:\n");
	scanf("%d",&idade);
	setbuf(stdin,NULL);
	
	system("cls");
	
	for(i = 0; i < 10; i ++){
		printf("%s", questoes[i].pergunta);
		scanf("%c",&res);
		flush_in();
		
		if((res == 's') || (res == 'S'))
			soma = soma + questoes[i].pontuacao;
		else if((i == 'n') || (i =='N'))
			soma = soma + 0;
		else{
			while((res != 's' && res != 'n') && (res != 'S' && res != 'N')){
				printf("por favor, responda apenas com (s) para SIM ou (n) para N�O.\n");
				printf("%s", questoes[i].pergunta);
				scanf("%c",&res);
				flush_in();
		
				if((res == 's') || (res == 'S'))
					soma = soma + questoes[i].pontuacao;
				else if((res == 'n') || (res =='N'))
					soma = soma + 0;
		    }
	    }
	}
	
	printf("\npontuacao: %i \n", soma);
	
	if(soma <= 9)  //direcionando o paciente de acordo com o risco.
		printf("\nseu risco para COVID-19 � BAIXO, dirija-se ao setor Verde! obrigado.\n\n");
	else if(soma >= 10 & soma <= 19)
		printf("\nseu risco para COVID-19 � M�DIO, dirija-se ao setor Amarelo! obrigado.\n\n");
	else
		printf("\nseu risco para COVID-19 � ALTO, dirija-se ao setor Vermelho! obrigado.\n\n");
	
	file = fopen("pacientes.txt", "a");
	fprintf(file,"---------------------------------------------------------\n");
	fprintf(file,"CPF: %s \n", cpf);
	fprintf(file,"Nome: %s", nome);
	fprintf(file,"sexo: %s \n", sexo);
	fprintf(file,"idade: %d \n", idade);
	fprintf(file,"Pontua��o: %d \n",soma);
	fclose(file);
	
	return 0;
}


