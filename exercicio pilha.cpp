#include<stdio.h>
#include<stdlib.h>
int const MAXTAM = 10;

	int Pilha[MAXTAM];
	int Topo;

bool Pilha_Cheia(){
	if(Topo == MAXTAM - 1)
		return true;
	else
		return false;
}

void InserirValor_Pilha(){
	Topo = -1;
}

bool Pilha_Push(int valor){ //empilhar
	if (Pilha_Cheia()){
		return false;
	}else{
		Topo++;
		Pilha[Topo] = valor;
		return true;
	}
}

bool Pilha_Vazia(){
	if(Topo == -1)
		return true;
	else;
		return false;
}

bool Pilha_Pop(int &valor){ //desempilhar
	if(Pilha_Vazia()){
		return false;
	}else{
		valor = Pilha[Topo];
		Topo--;
		return true;
	}
}

int Pilha_Tamanho(){ //para mostrar quantos itens tem na pilha
	return Topo+1;
}

int main(){
	int valor;
	
	InserirValor_Pilha();
	Pilha_Push(1);
	Pilha_Push(2);
	Pilha_Push(3);
		
	
	
	return 0;
}

