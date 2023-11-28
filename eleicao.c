#include <stdio.h>

int main() {
    int voto, total = 0, antonio = 0, jose = 0, maria = 0, branco = 0, nulo = 0;

    printf("Digite o número do seu candidato (0 para encerrar):\n");
    scanf("%d", &voto);

    while(voto != 0) {
        total++;
        if(voto == 1) {
            antonio++;
        } else if(voto == 2) {
            jose++;
        } else if(voto == 3) {
            maria++;
        } else if(voto == 4) {
            branco++;
        } else {
            nulo++;
        }

        printf("Digite o número do seu candidato (0 para encerrar):\n");
        scanf("%d", &voto);
    }
    printf("Número de votos:\nAntonio: %d\nJosé: %d\nMaria: %d\nBranco: %d\nNulo: %d\n", antonio, jose, maria, branco, nulo);
    printf("Total de eleitores: %d\n", total);

    if(antonio > jose && antonio > maria) {
        printf("Candidato vitorioso: Antonio\n");
    } else if(jose > antonio && jose > maria) {
        printf("Candidato vitorioso: José\n");
    } else if(maria > antonio && maria > jose) {
        printf("Candidato vitorioso: Maria\n");
    } else {
        printf("VOTAÇÃO EM SEGUNDO TURNO\n");
    }

    return 0;
}

