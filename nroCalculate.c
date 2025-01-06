#include<stdio.h>

int main() {
    int coderun;

    while (1) {
        
        printf("Chuong trinh tinh chi so NRO(Chi nhap so):\n");
        printf("1. Cong HP\n");
        printf("2. Cong MP\n");
        printf("3. Cong Tan Cong\n");
        printf("4. Cong Giap\n");
        printf("5. Cong Chi Mang\n");
        printf("Nhap 0 do thoat chuong trinh.\n");
        scanf("%d", &coderun);
        system("cls");
        if (coderun < 1 || coderun > 5) break;

        switch (coderun) {
            case 1:
                {
                int htHP, sauHP, resultHP = 0;
                printf("Nhap chi so HP hien tai: ");
                scanf("%d", &htHP);
                printf("Nhap chi so HP muon dat duoc: ");
                scanf("%d", &sauHP);
                for (int j = htHP; j < sauHP; j += 20) {
                    resultHP += (j + 1000);
                }
                
                printf("Muc tiem nang can de nang la: %lld\n", resultHP);
            }
            break;

            case 2:
                {
                int htMP, sauMP, resultMP = 0;
                printf("Nhap chi so MP hien tai: ");
                scanf("%d", &htMP);
                printf("Nhap chi so MP muon dat duoc: ");
                scanf("%d", &sauMP);
                for (int j = htMP; j < sauMP; j += 20) {
                    resultMP += (j + 1000);
                } 
                
                printf("Muc tiem nang can de nang la: %lld\n", resultMP);
            }
            break;

            case 3:
                {
                int htAT, sauAT, resultAT = 0;
                printf("Nhap chi so Tan Cong hien tai: ");
                scanf("%d", &htAT);
                printf("Nhap chi so Tan Cong muon dat duoc: ");
                scanf("%d", &sauAT);
                for (int j = htAT; j < sauAT; j++) {
                    resultAT += j*100;
                } 
                
                printf("Muc tiem nang can de nang la: %lld\n", resultAT);
            }
            break;

            case 4:
                {
                int htGiap, sauGiap;
                long long resultGiap = 0;
                printf("Nhap chi so Giap hien tai: ");
                scanf("%d", &htGiap);
                printf("Nhap chi so Giap muon dat duoc: ");
                scanf("%d", &sauGiap);
                for (int j = htGiap; j < sauGiap; j++) {
                    resultGiap += j*100000 + 500000;
                }
                
                printf("Muc tiem nang can de nang la: %lld\n", resultGiap);
            }
            break;

            case 5:
                {
                int htCM, sauCM, resultCM = 50000000;
                printf("Nhap chi so CM hien tai: ");
                scanf("%d", &htCM);
                printf("Nhap chi so CM muon dat duoc: ");
                scanf("%d", &sauCM);
                for (int j = htCM; j < sauCM; j++) resultCM += 50000000;
                
                printf("Muc tiem nang can de nang la: %lld\n", resultCM);
            }
            break;
            default: break;
        }

    }

    return 0;
}