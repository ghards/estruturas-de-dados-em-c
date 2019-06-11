#ifndef _MAINLIB_H_
#define _MAINLIB_H_

#define _CHAR 50
#define IDADE(anoNasc) (2019 - anoNasc)

typedef struct data {
    int ano, mes, dia;
}DATA;

typedef struct livro {
    struct livro *livroAntes, *livroDepois;
    char nome[_CHAR];
    int id;
}LIVRO;

typedef struct leitor {
    char gambiarra[_CHAR], login[_CHAR], senha[_CHAR];
    LIVRO *primeiroLivro, *ultimoLivro, *novoLivro;
    struct leitor *proximo, *anterior;
    DATA dataNascimento;
}LEITOR;

int opcao;

// Funções da lista duplamente encadeada.
void alterarLivro(LIVRO* primeiro, LIVRO* ultimo);

#endif