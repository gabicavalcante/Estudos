//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "05desafio.h"

int main (void){

	Lista* l = NULL;
	l = insere(l,livro_cria("livro1","autor1","genero1",1930));
	l = insere(l,livro_cria("livro2","autor2","genero2",1950));
	l = insere(l,livro_cria("livro3","autor3","genero3",1939));
	l = insere(l,livro_cria("livro4","autor4","genero4",1500));
	l = insere(l,livro_cria("livro5","autor5","genero5",1550));
	l = insere(l,livro_cria("livro6","autor6","genero6",1560));
	//imprime(l); // Imprime a lista toda
	ordenar_titulo(l);
	imprime_node(meio(l)); /* IMPRIME O MAIS PRÓXIMO AO MEIO */

}

