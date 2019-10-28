#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batas;
    srand(time(NULL));
    int nebak;
    int nyawa=3;
    int cheat;
    ulang:
    printf("Masukkan maksimal nilai (10-100) : ");scanf("%d",&batas);
    if(batas < 10 || batas > 100){
        printf("Masukkan angka 10-100 !!!\n\n");
        goto ulang;
    }
    printf("Silakan tebak nilai antara 0 - %d !!\n", batas);
    cheat = rand() % batas;
    printf("(cheat : ini adalah angka yg ditebak : %d )\n", cheat);

    while(nyawa !=0){
        printf("\nMasukkan tebakan Anda : ");scanf("%d",&nebak);
        if(nebak > cheat){
            nyawa--;
            printf("Tebakan Anda terlalu Besar.\n");
            printf("Tebakan Anda salah, nyawa : %d\n", nyawa);
        }else if(nebak < cheat){
            nyawa--;
            printf("Tebakan Anda terlalu Kecil.\n");
            printf("Tebakan Anda salah, nyawa : %d\n", nyawa);
        }else{
            printf("Selamat, tebakan anda Benar!!!\n");
            break;
        }
    }
    if(nyawa == 0){
         printf("\nGame Over !!!\n");
    }
    return 0;
}
