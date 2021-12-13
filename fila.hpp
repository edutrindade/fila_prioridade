#ifndef FILA_H
#define FILA_H

typedef struct TipoItem {
    int valor;
    bool prioridade = false;
} TipoItem;

typedef struct TipoElemento {
    TipoItem item;
    struct TipoElemento *prox;
} TipoElemento;

typedef struct TipoElemento *Apontador;

typedef struct TipoFilaPrioridade {
    Apontador inicio, fim;
    int tamanho;
} TipoFilaPrioridade;

void InicializaFila(TipoFilaPrioridade *fila);

bool VerificaFilaVazia(TipoFilaPrioridade *fila);

void EnfileiraPrioridade(TipoFilaPrioridade *fila, TipoItem item);

void Desenfileira(TipoFilaPrioridade *fila);

void ImprimeFila(TipoFilaPrioridade *fila);

#endif 