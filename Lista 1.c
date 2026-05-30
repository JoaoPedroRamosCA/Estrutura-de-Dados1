#include <stdio.h>
#include <string.h>

enum { MAX_NOME = 60, MAX_DATA = 12, MAX_CURSO = 40};

typedef struct {
    int matricula;
    char nome[MAX_NOME];
    char dataNasc[MAX_DATA]; // dd/mm/aaaa
    char  curso[MAX_CURSO];
    float cr;
}   Aluno;

/* descarta resto da linha (para usar após scanf de números) */
static void limpa_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        
    }
}
