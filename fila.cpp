#include <iostream>
#include "fila.hpp"

using namespace std;

void InicializaFila(TipoFilaPrioridade *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->tamanho = 0;
}

bool VerificaFilaVazia(TipoFilaPrioridade *fila) {
    if (fila->inicio == NULL) {
        return true;
    } else return false;
}

void EnfileiraPrioridade(TipoFilaPrioridade *fila, TipoItem i) { 
    Apontador novo, aux;
    novo = new TipoElemento;
    novo->item = i;
    novo->prox = NULL;

    /* Se a fila estiver vazia, elemento será inserido no início */
    if (VerificaFilaVazia(fila)) {
        fila->inicio = novo;
        fila->fim = novo;
    } else {
        // É prioridade?
        if (i.prioridade) {
            // Não existe ninguém com prioridade na fila?
            if (!fila->inicio->item.prioridade) {
                // Insere no começo da fila
                aux = fila->inicio;
                fila->inicio = novo;
                fila->inicio->prox = aux;
            }
            // Já existe alguém com prioridade na fila?
            else {
                // Percorre a fila de prioridade
                aux = fila->inicio;
                while (aux->prox->item.prioridade) {
                    aux = aux->prox;
                }
                novo->prox = aux->prox;
                aux->prox = novo;
            }
        }
        else {
            // Enfileira normalmente
            fila->fim->prox = novo;
            fila->fim = novo;
        }
    }
    cout << endl << novo->item.valor << " inserido na fila.\n";
    fila->tamanho++;
}

void Desenfileira(TipoFilaPrioridade *fila) {
    Apontador aux;
    if (VerificaFilaVazia(fila)) {
        cout << "\nFila vazia.";
        return;
    }

    aux = fila->inicio;
    cout << endl << fila->inicio->item.valor << " removido da fila.\n";
    fila->inicio = fila->inicio->prox;
    free(aux);
    fila->tamanho--;
}

void ImprimeFila(TipoFilaPrioridade *fila) {
    Apontador aux;
    if (VerificaFilaVazia(fila)) {
        cout << "\nFila vazia.";
    } else {
        aux = fila->inicio;
        cout << "Fila: ";
        do {
            cout << aux->item.valor << " ";
            aux = aux->prox;
        } while (aux != NULL);
    }
}