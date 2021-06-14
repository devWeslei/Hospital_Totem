#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct atendimento{
	char nome[41];
	char cpf[15];
	char sexo[2];
	int idade;
};
struct atendimento paciente;
int pontuacao;
char i;

int main(){
	
	FILE *file;
	
	setlocale(LC_ALL, "Portuguese");
			
	printf("Por favor, informe seus dados:\n\n");
	printf("digite seu CPF:  (Formato: ***.***.***-**)\n");
	fgets(paciente.cpf, 15, stdin);
	setbuf(stdin,NULL);
	
	printf("Digite seu nome:\n");
	fgets(paciente.nome, 41, stdin);
	setbuf(stdin,NULL);
	
	printf("Digite seu sexo:(f) feminino - (m) masculino\n");
	fgets(paciente.sexo, 2, stdin);
	setbuf(stdin,NULL);
	
	printf("digite sua idade:\n");
	scanf("%i",&paciente.idade);
	setbuf(stdin,NULL);
	
	system("cls");
	
	printf("\nCPF: %s \n", paciente.cpf);
	printf("Nome: %s", paciente.nome);
	printf("sexo: %s \n", paciente.sexo);
	printf("idade: %i \n", paciente.idade);

	printf("\ninforme quais sintomas esta sentindo...\n");
	
	printf("Tem Febre? (s) para SIM ou (n) para NÃO.\n"); //foi validado maiuscula e minuscula e um loop para resposta errada.
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 5;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Tem Febre?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 5;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("Tem dor de cabeça? (s) para SIM ou (n) para NÃO.\n");
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 1;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Tem dor de cabeça?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 1;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("Tem secreção nasal ou espirros? (s) para SIM ou (n) para NÃO.\n");
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 1;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Tem secreção nasal ou espirros?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 1;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("Tem dor dor/irritação na garganta? (s) para SIM ou (n) para NÃO.\n");
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 1;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Tem dor/irritação na garganta?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 1;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("Tem tosse seca? (s) para SIM ou (n) para NÃO.\n");
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 3;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Tem tosse seca?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 3;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("Tem dificuldade respiratória? (s) para SIM ou (n) para NÃO.\n");
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 10;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Tem dificuldade respiratória?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 10;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("Tem tosse dores no corpo? (s) para SIM ou (n) para NÃO.\n");
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 1;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Tem dores no corpo?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 1;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("Tem diarréia? (s) para SIM ou (n) para NÃO.\n");
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 1;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Tem diarréia?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 1;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? (s) para SIM ou (n) para NÃO.\n");
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 10;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 10;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("Esteve em locais com grande aglomeração? (s) para SIM ou (n) para NÃO.\n");
	scanf("%s",&i, stdin);
	if((i == 's') || (i == 'S'))
		pontuacao = pontuacao + 3;
	else if((i == 'n') || (i =='N'))
		pontuacao = pontuacao + 0;
	else{
		while((i != 's' && i != 'n') && (i != 'S' && i != 'N')){
			printf("por favor, responda apenas com (s) para SIM ou (n) para NÃO.\n");
			printf("Esteve em locais com grande aglomeração?\n");
			scanf("%s",&i, stdin);
				if((i == 's') || (i == 'S'))
					pontuacao = pontuacao + 3;
				else if((i == 'n') || (i =='N'))
					pontuacao = pontuacao + 0;
		}
	}
	
	printf("\npontuacao: %i \n", pontuacao);

	if(pontuacao <= 9)  //direcionando o paciente de acordo com o risco.
		printf("\nseu risco para COVID-19 é BAIXO, dirija-se ao setor Verde! obrigado.\n\n");
	else if(pontuacao >= 10 & pontuacao <= 19)
		printf("\nseu risco para COVID-19 é MÉDIO, dirija-se ao setor Amarelo! obrigado.\n\n");
	else
		printf("\nseu risco para COVID-19 é ALTO, dirija-se ao setor Vermelho! obrigado.\n\n");
	
	file = fopen("pacientes.txt", "a");
	fprintf(file,"---------------------------------------------------------\n");
	fprintf(file,"CPF: %s \n", paciente.cpf);
	fprintf(file,"Nome: %s", paciente.nome);
	fprintf(file,"sexo: %s \n", paciente.sexo);
	fprintf(file,"idade: %i \n", paciente.idade);
	fprintf(file,"pontuação: %i \n",pontuacao);
	fclose(file);
	
	system("pause");
	return 0;
}
