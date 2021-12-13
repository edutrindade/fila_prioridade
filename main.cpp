#include <iostream>
#include "fila.cpp"

using namespace std;

int main() {
    TipoFilaPrioridade f;
    TipoItem i;

    InicializaFila(&f);

    if (VerificaFilaVazia(&f)) {
        cout << "Fila vazia.";
    }

    i.valor = 35;
    EnfileiraPrioridade(&f, i);
    ImprimeFila(&f);
    cout << "Tamanho: " << f.tamanho << endl;

    i.valor = 56;
    EnfileiraPrioridade(&f, i);
    ImprimeFila(&f);
    cout << "Tamanho: " << f.tamanho << endl;

    i.valor = 68;
    i.prioridade = true;
    EnfileiraPrioridade(&f, i);
    ImprimeFila(&f);
    cout << "Tamanho: " << f.tamanho << endl;

    i.valor = 65;
    i.prioridade = true;
    EnfileiraPrioridade(&f, i);
    ImprimeFila(&f);
    cout << "Tamanho: " << f.tamanho << endl;

    i.valor = 71;
    i.prioridade = true;
    EnfileiraPrioridade(&f, i);
    ImprimeFila(&f);
    cout << "Tamanho: " << f.tamanho << endl;

    i.valor = 24;
    i.prioridade = false;
    EnfileiraPrioridade(&f, i);
    ImprimeFila(&f);
    cout << "Tamanho: " << f.tamanho << endl;

    Desenfileira(&f);
    ImprimeFila(&f);
    cout << "Tamanho: " << f.tamanho << endl;

    return 0;
}