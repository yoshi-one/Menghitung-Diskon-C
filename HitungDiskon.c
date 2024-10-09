#include <stdio.h>

void main (){
    float hargabarangsatuan;
    float jumlahbarang;
    float diskon; //%

    printf("Masukkan harga barang :");
    scanf("%f", &hargabarangsatuan);

    printf("Masukkan jumlah barang :");
    scanf("%f", &jumlahbarang);

    printf("Masukkan diskon barang :");
    scanf("%f", &diskon);

    float jumlahbayar = hargabarangsatuan * jumlahbarang;
    float jumlahdiskon = jumlahbayar * diskon/100;
    float totalbayar = jumlahbayar - jumlahdiskon;

    printf("jumlah bayar : %f\n", jumlahbayar);
    printf("jumlah diskon : %f\n", jumlahdiskon);
    printf("total bayar : %f\n", totalbayar);
}