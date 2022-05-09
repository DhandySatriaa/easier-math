#include <stdio.h>
#include <math.h>

double kalkulator();
void MBDatar(); //Menu Bangun Datar
void MBRuang(); //Menu Bangun Ruang

int main(){
    double hasil;
    printf("Menu :\n"
           "1. Kalkulator\n"
           "2. Bangun Datar\n"
           "3. Bangun Ruang\n");
    char pilihan;
    printf("Masukan Pilihan : ");
    scanf("%c", &pilihan);
    while(getchar() != '\n');
    switch (pilihan)
    {
    case '1':
        hasil = kalkulator();
        printf("Hasil : %.2lf", hasil);
        break;
    case '2':
        MBDatar();
        break;
    case '3' :
        MBRuang();
        break;
    default:
        break;
    }
    return 0;
}

double kalkulator(){
    char pil;
    double awal, penambah;
    printf("Masukan Angka Pertama : ");
    scanf("%lf", &awal);
    printf("Masukan Pilihan ( + - * / ) : ");
    scanf("%c", &pil);
    printf("Masukan Angka Penambah : ");
    scanf("%lf", &penambah);

    if(pil == '+') return awal + penambah;
    if(pil == '-') return awal - penambah;
    if(pil == '*') return awal * penambah;
    if(pil == '/') return awal / penambah;
}

void MBDatar(){
    char pilihan,rumus;
    double sisi,panjang,lebar,luas,keliling;
    printf("Menu :\n"
           "1. Persegi\n"
           "2. Persegi Panjang\n"
           "3. Segitiga\n"
           "4. Jajar Genjang\n"
           "5. Trapesium\n"
           "6. Belah Ketupat\n"
           "7. Layang - layang\n"
           "8. Lingkaran\n"
           "Masukan Pilihan : ");
    scanf("%c",&pilihan);
    while(getchar() != '\n');
    switch (pilihan)
    {
    case '1':
        
        printf("Menu Persegi\n"
               "1. Mencari Luas\n"
               "2. Mencari Keliling\n"
               "3. Mencari Sisi (dengan luas)\n"
               "4. Mencari Sisi (dengan keliling)\n"
               "Masukan Pilihan : ");
                scanf("%c", &rumus);
                switch (rumus)
                {
                case '1':
                    printf("Masukan Sisi = ");
                    scanf("%lf", &sisi);
                    luas = sisi * sisi;
                    printf("Luas = %.2lf", luas);
                    break;
                case '2':
                    printf("Masukan Sisi = ");
                    scanf("%lf", &sisi);
                    keliling = sisi * 4;
                    printf("Keliling = %.2lf", keliling);
                    break;
                case '3':
                    printf("Masukan Luas = ");
                    scanf("%lf", &luas);
                    sisi = sqrt(luas);
                    printf("Sisi = %.2lf", sisi);
                    break;
                case '4':
                    printf("Masukan Luas = ");
                    scanf("%lf", &keliling);
                    sisi = keliling / 4;
                    printf("Sisi = %.2lf", sisi);
                    break;
                default:
                    break;
               }
        break;
    case '2':
        printf("Menu Persegi Panjang\n"
               "1. Mencari Luas\n"
               "2. Mencari Keliling\n"
               "3. Mencari panjang (dengan luas)\n"
               "4. Mencari panjang (dengan keliling)\n"
               "5. Mencari lebar (dengan luas)\n"
               "6. Mencari lebar (dengan keliling)\n"
               "Masukan Pilihan : ");
                scanf("%c", &rumus);
                switch (rumus)
                {
                case '1':
                    printf("Masukan  Panjang = ");
                    scanf("%lf", &panjang);
                    printf("Masukan  Lebar = ");
                    scanf("%lf", &lebar);
                    luas = panjang * lebar;
                    printf("Luas = %.2lf", luas);
                    break;
                case '2':
                    printf("Masukan  Panjang = ");
                    scanf("%lf", &panjang);
                    printf("Masukan  Lebar = ");
                    scanf("%lf", &lebar);
                    keliling = ( panjang + lebar ) * 2;
                    printf("Keliling = %.2lf", keliling);
                    break;
                case '3':
                    printf("Masukan Luas = ");
                    scanf("%lf", &luas);
                    printf("Masukan  Lebar = ");
                    scanf("%lf", &lebar);
                    panjang = luas / lebar;
                    printf("Panjang = %.2lf", panjang);
                    break;
                case '4':
                    printf("Masukan Luas = ");
                    scanf("%lf", &keliling);
                    printf("Masukan  Lebar = ");
                    scanf("%lf", &lebar);
                    panjang = ( keliling / 2 ) - lebar;
                    printf("Panjang = %.2lf", panjang);
                    break;
                case '5':
                    printf("Masukan Luas = ");
                    scanf("%lf", &luas);
                    printf("Masukan  panjang = ");
                    scanf("%lf", &panjang);
                    lebar = luas / panjang;
                    printf("Panjang = %.2lf", lebar);
                    break;
                case '6':
                    printf("Masukan Luas = ");
                    scanf("%lf", &luas);
                    printf("Masukan  Lebar = ");
                    scanf("%lf", &panjang);
                    lebar = ( keliling / 2 ) - panjang;
                    printf("Panjang = %.2lf", lebar);
                    break;
                default:
                    break;
               }
        break;
    case '3':
        break;
    case '4':
        break;
    case '5':
        break;
    case '6':
        break;
    case '7':
        break;
    case '8':
        break;
    default:
        break;
    }

}

void MBRuang(){
    printf("Menu :\n"
           "1. Kubus\n"
           "2. Balok\n"
           "3. Prisma\n"
           "4. Limas\n"
           "5. Tabung\n"
           "6. Kerucut\n"
           "7.Bola\n");
}

