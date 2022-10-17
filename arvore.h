/*
 * Ficheiro: arvore.h
 * Autor: Leonor Barreiros
 * Descricao: interface da arvore binaria de pesquisa (BST)
 */

#ifndef _ARVORE_
#define _ARVORE_

#include "equipa.h"

/* ABSTRACOES */

#define NOROOT (NULL) /* arvore vazia -> quando a raiz e nula */
#define COMPARA(a,b) (strcmp(a,b)) /* elemento comparativo de insercao na arvore */

/* ESTRUTURAS */

/* definicao da estrutura arvore */
typedef struct arvore
{
    struct arvore *esq, *drt; /* ponteiros para as arvores esq e drt */
    equipa equipa; /* conteudo da arvore -> uma equipa */
} arvore;

/* PROTOTIPOS DAS FUNCOES */

/* funcao de criacao - cria uma arvore contendo um no */
arvore * ARVinit(equipa e);
/* funcao de libertacao - liberta a memoria associada a uma arvore */
void ARVclear(arvore * raiz);
/* funcao de adicao - adiciona um elemento a uma arvore */
arvore * ARVadd(arvore * raiz, equipa e);
/* funcao de impressao - percorre a arvore e imprime os elementos In-Order */
void ARVprint(arvore * raiz, int nL);

#endif
