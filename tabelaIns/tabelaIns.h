#include"intro.h"

// ordena as keys
void insercao1 (TABELA table[]) {
        printf("\n");
        int i;
        for (i=1 ; i<k; i++) {
                int j = i;
                while (table[j-1].key > table[j].key && j>0) {
                        char aux = table[j].key;
                        table[j].key = table[j-1].key;
                        table[j-1].key = aux;
                        j--; 
                }
        }
}

// ordena os registros (info)
void insercao2 (TABELA table[]) {
        printf("\n");
        int i;
        for (i=1 ; i<k; i++) {
                int j = i;
                while (table[j-1].info > table[j].info && j>0) {
                        int aux = table[j].info;
                        table[j].info = table[j-1].info;
                        table[j-1].info = aux;
                        j--; 
                }
        }

}

// ordena as keys e os registros junto
void insercao3 (TABELA table[]) {
        insercao1(table);
        insercao2(table);
}

// mostra a tabela
void printTable (TABELA table[]) {
    printf("\n");
    for (int i=0 ; i<k ; i++) {

        printf("(%c, %d)\n", table[i].key, table[i].info);

    } 
}
