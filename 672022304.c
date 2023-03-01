#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define phi 3.14285714

char nama[99],pass[50],nama1 [99],pass1 [50];
int a,b,c=0;
void main()
{

    int pil;
    printf("1. REGISTER\n");
    printf("2. LOGIN\n");
    printf("3. EXIT\n");
    printf("\n PILIHAN ANDA : \n");
    scanf("%1d", &pil);

    switch(pil)
    {

    case 1:
        system("cls");
        regis();
        break;
    case 2:
        system("cls");
        login();
        break;
    }
}
 void regis()
{

    printf("Silahkan Registrasi\n\n");
    printf("\nNama : ");
    scanf("%s",&nama);
    printf("\nPass : ");
    scanf("%s",&pass);
    strcpy(nama1,nama);
    strcpy(pass1,pass);
    system("cls");
    main();
}


void login()
{
        printf("please Login\n\n");
        printf(".Nama    :");
        scanf("%s",&nama);
        printf("pass : ");

        do{pass[c]=getch();
        if(pass[c]!='\r'){
            printf("*");
        }
        c++;
        }while(pass[c-1]!='\r');
        pass[c-1]='\0';

        a=strcmp(nama1,nama);
        b=strcmp(pass1,pass);
        if(a==0 && b==0){
            menu();

        }else{
            printf("\nUsername/Password Salah");


 	}

}

void menu ()
{

    system ("cls");
    int pilihan;
    printf ("----------------------\n\n");
    printf ("  TUGAS KALKULATOR\n\n");
    printf ("----------------------\n\n");
    printf ("1. PingPoroLanSudo\n");
    printf ("2. SinCosTan\n");
    printf ("3. Hitung Keliling dan Luas\n");
    printf ("4. Hitung Akar Kuadrat\n");
    printf ("5. Exit\n");
    printf ("\n----------------------\n\n");
    printf ("Masukkan Pilihan : ");
    scanf ("%d", &pilihan);

    switch(pilihan)
    {
        case 1: PingPoroLanSudo(); break;
        case 2: sincostan(); break;
        case 3: kelilingdanluas (); break;
        case 4: akarkuadrat (); break;
        case 5: printf ("\n\n   T E R I M A  K A S I H  :)\n\n"); break;
        default:   printf("\n Masukkan Salah! \n");
        getch();
    }
}

void PingPoroLanSudo()
{
    menu1:
    system ("cls");
    int PingPorolanSudo;
    float h, i, j;
    char ulang;
    printf ("-------------------\n");
    printf ("  PingPoroLanSudo\n");
    printf ("-------------------\n\n");
    printf ("1. Penjumlahan\n");
    printf ("2. Pengurangan\n");
    printf ("3. Perkalian\n");
    printf ("4. Pembagian\n");
    printf ("5. Kembali Menu Utama\n");
    printf ("\n-------------------\n\n");
    printf ("Masukkan Pilihan : ");
    scanf ("%d", &PingPorolanSudo);
    switch (PingPorolanSudo)
    {
    case 1 :
        penjumlahan:
        system ("cls");
        printf ("Masukkan Angka Pertama : ");
        scanf ("%f", &h);
        printf ("Masukkan Angka Kedua   : ");
        scanf ("%f", &i);
        j = h+i;
        printf ("Hasil dari %.2f + %.2f adalah %.2f", h, i, j);
        ulang3:
        printf ("\n\nIngin Mengulangi Penjumlahan? (y/n) ");
        scanf ("%c", &ulang);
        ulang= getchar();
        if (ulang=='y')
        {
            printf ("\n");
            goto penjumlahan;
        }
        if (ulang=='n')
        {
            printf ("\n");
            goto menu1;
        }
        else
        {
            system ("cls");
            printf ("\nPilihan Tidak Tersedia");
            goto ulang3;
        }
        break;

    case 2:
        pengurangan:
        system ("cls");
        printf ("Masukkan Angka Pertama : ");
        scanf ("%f", &h);
        printf ("Masukkan Angka Kedua   : ");
        scanf ("%f", &i);
        j = h-i;
        printf ("Hasil dari %.2f - %.2f adalah %.2f", h, i, j);
        ulang4:
        printf ("\n\nIngin Mengulangi Pengurangan? (y/n) ");
        scanf ("%c", &ulang);
        ulang= getchar();
        if (ulang=='y')
        {
            printf ("\n");
            goto pengurangan;
        }
        if (ulang=='n')
        {
            printf ("\n");
            goto menu1;
        }
        else
        {
            system ("cls");
            printf ("\nPilihan Tidak Tersedia");
            goto ulang4;
        }
        break;

    case 3 :
        perkalian:
        system ("cls");
        printf ("Masukkan Angka Pertama : ");
        scanf ("%f", &h);
        printf ("Masukkan Angka Kedua   : ");
        scanf ("%f", &i);
        j = h*i;
        printf ("Hasil dari %.2f x %.2f adalah %.2f", h, i, j);
        ulang1:
        printf ("\n\nIngin Mengulangi Perkalian? (y/n) ");
        scanf ("%c", &ulang);
        ulang= getchar();
        if (ulang=='y')
        {
            printf ("\n");
            goto perkalian;
        }
        if (ulang=='n')
        {
            printf ("\n");
            goto menu1;
        }
        else
        {
            system ("cls");
            printf ("\nPilihan Tidak Tersedia");
            goto ulang1;
        }
        break;

    case 4 :
        pembagian:
        system ("cls");
        printf ("Masukkan Angka Pertama : ");
        scanf ("%f", &h);
        printf ("Masukkan Angka Kedua   : ");
        scanf ("%f", &i);
        j = h/i;
        printf ("Hasil dari %.2f : %.2f adalah %.2f", h, i, j);
        ulang2:
        printf ("\n\nIngin Mengulangi Pembagian? (y/n) ");
        scanf ("%c", &ulang);
        ulang= getchar();
        if (ulang=='y')
        {
            printf ("\n");
            goto pembagian;
        }
        if (ulang=='n')
        {
            printf ("\n");
            goto menu1;
        }
        else
        {
            system ("cls");
            printf ("\nPilihan Tidak Tersedia");
            goto ulang2;
        }
        break;

    case 5: main(); break;

    default: main ();
    }

}

void sincostan ()
{
    menu2:
    system ("cls");
    int SINCOSTAN;
    float a;
    char ulangg;
    printf ("-------------\n");
    printf ("  SinCosTan\n");
    printf ("-------------\n\n");
    printf ("1. Sinus\n");
    printf ("2. Cosinus\n");
    printf ("3. Tangen\n");
    printf ("4. Kembali Menu Utama\n");
    printf ("\n-------------\n\n");
    printf ("Masukkan Pilihan : ");
    scanf ("%d", &SINCOSTAN);

    switch (SINCOSTAN)
    {
        case 1:
        sinuss:
        system ("cls");
        printf ("Masukkan derajat Sinus : ");
        scanf ("%f", &a);
        printf ("Hasil Sinus adalah: %.2f", sin(a*(phi/180)));
        ulang11:
        printf ("\n\nIngin mengulangi Sinus (y/n) ");
        scanf ("%c", &ulangg);
        ulangg = getchar ();
        if (ulangg == 'y')
        {
            printf ("\n");
            goto sinuss;
        }
        if (ulangg == 'n')
        {
            printf ("\n");
            goto menu2;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang11;
        }
        break;

        case 2:
        cosinuss:
        system ("cls");
        printf ("Masukkan derajat Cosinus : ");
        scanf ("%f", &a);
        printf ("Hasil Cosinus adalah: %.2f", cos(a*(phi/180)));
        ulang12:
        printf ("\n\nIngin mengulangi Cosinus (y/n) ");
        scanf ("%c", &ulangg);
        ulangg = getchar ();
        if (ulangg == 'y')
        {
            printf ("\n");
            goto cosinuss;
        }
        if (ulangg == 'n')
        {
            printf ("\n");
            goto menu2;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang12;
        }
        break;

        case 3:
        tangenn:
        system ("cls");
        printf ("Masukkan derajat Tangen : ");
        scanf ("%f", &a);
        printf ("Hasil Tangen adalah: %.2f", tan(a*(phi/180)));
        ulang13:
        printf ("\n\nIngin mengulangi Tangen (y/n) ");
        scanf ("%c", &ulangg);
        ulangg = getchar ();
        if (ulangg == 'y')
        {
            printf ("\n");
            goto tangenn;
        }
        if (ulangg == 'n')
        {
            printf ("\n");
            goto menu2;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang13;
        }
        break;

        case 4: main(); break;

        default: sincostan ();

    }
}

void keliling ()
{
    keliling1:
    system ("cls");
    int Keliling;
    float p, l, kelilinG, KELILING, KelilinG, kelilingd, kelilingr;
    float aa, bb, mm, dd, r;
    char ulanggg;
    printf ("-------------------------\n");
    printf ("  Keliling Bangun Datar\n");
    printf ("-------------------------\n\n");
    printf ("1. Keliling Persegi\n");
    printf ("2. Keliling Trapesium\n");
    printf ("3. Keliling Layang-layang\n");
    printf ("4. Keliling Lingkaran\n");
    printf ("5. Kembali Ke Menu Sebelumnya\n");
    printf ("\n-------------------------\n\n");
    printf ("Masukkan Pilihan : ");
    scanf ("%d", &Keliling);
    switch (Keliling)
    {
    case 1:
        kelper:
        system ("cls");
        printf ("Masukkan Panjang Persegi: ");
        scanf ("%f", &p);
        printf ("Masukkan Lebar Persegi: ");
        scanf ("%f", &l);
        kelilinG = (2*p)+(2*l);
        printf ("Keliling Persegi adalah = %.2f", kelilinG);
        ulang21:
        printf ("\n\nIngin mengulangi Keliling Persegi? (y/n) ");
        scanf ("%c", &ulanggg);
        ulanggg = getchar ();
        if (ulanggg == 'y')
        {
            printf ("\n");
            goto kelper;
        }
        if (ulanggg == 'n')
        {
            printf ("\n");
            goto keliling1;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang21;
        }
        break;

    case 2:
        keltrap:
        system ("cls");
        printf ("Masukkan Sisi Atas Trapesium Sama Kaki: ");
        scanf ("%f", &aa);
        printf ("Masukkan Sisi Bawah Trapesium Sama Kaki: ");
        scanf ("%f", &bb);
        printf ("Masukkan Sisi Miring Trapesium Sama Kaki: ");
        scanf ("%f", &mm);
        KELILING = (2*mm) + aa + bb;
        printf ("Keliling Trapesium Sama Kaki adalah = %.2f", KELILING);
        ulang22:
        printf ("\n\nIngin mengulangi Keliling Trapesium? (y/n) ");
        scanf ("%c", &ulanggg);
        ulanggg = getchar ();
        if (ulanggg == 'y')
        {
            printf ("\n");
            goto keltrap;
        }
        if (ulanggg == 'n')
        {
            printf ("\n");
            goto keliling1;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang22;
        }
        break;

    case 3:
        kellayang:
        system ("cls");
        printf ("Masukkan Panjang Sisi Atas: ");
        scanf ("%f", &aa);
        printf ("Masukkan Panjang Sisi Bawaah: ");
        scanf ("%f", &bb);
        KelilinG = 2 * (aa+bb);
        printf ("Keliling Layang-layang adalah = %.2f", KelilinG);
        ulang23:
        printf ("\n\nIngin mengulangi Keliling Layang-layang? (y/n) ");
        scanf ("%c", &ulanggg);
        ulanggg = getchar ();
        if (ulanggg == 'y')
        {
            printf ("\n");
            goto kellayang;
        }
        if (ulanggg == 'n')
        {
            printf ("\n");
            goto keliling1;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang23;
        }
        break;

    case 4:
        kelling:
        system ("cls");
        printf ("Masukkan Panjang Diameter: ");
        scanf ("%f", &dd);
        printf ("Masukkan Panjang Jari-jari: ");
        scanf ("%f", &r);
        kelilingd = 22 * dd / 7;
        kelilingr = 22 * 2 * r / 7;
        printf ("Keliling Lingkaran Berdasarkan Diameter adalah = %.2f\n", kelilingd);
        printf ("Keliling Lingkaran Berdasarkan Jari-jari adalah = %.2f", kelilingr);
        ulang24:
        printf ("\n\nIngin mengulangi Keliling Lingkaran? (y/n) ");
        scanf ("%c", &ulanggg);
        ulanggg = getchar ();
        if (ulanggg == 'y')
        {
            printf ("\n");
            goto kelling;
        }
        if (ulanggg == 'n')
        {
            printf ("\n");
            goto keliling1;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang24;
        }
        break;

    case 5: kelilingdanluas (); break;
    default: printf ("Pilihan Anda Tidak Ada");
    }
}

void luas ()
{
    luass:
    system ("cls");
    int Luas;
    float LP, LUAS, LL, LD, LR;
    float ppp, lll, mmm;
    char luas1;
    printf ("---------------------\n");
    printf ("  Luas Bangun Datar\n");
    printf ("---------------------\n\n");
    printf ("1. Luas Persegi\n");
    printf ("2. Luas Trapesium\n");
    printf ("3. Luas Layang-layang\n");
    printf ("4. Luas Lingkaran\n");
    printf ("5. Kembali Ke Menu Sebelumnya\n");
    printf ("\n---------------------\n\n");
    printf ("Masukkan Pilihan : ");
    scanf ("%d", &Luas);
    switch (Luas)
    {
    case 1:
        luper:
        system ("cls");
        printf ("Masukkan Panjang Persegi: ");
        scanf ("%f", &ppp);
        printf ("Masukkan Lebar Persegi: ");
        scanf ("%f", &lll);
        LP = ppp * lll;
        printf ("Luas Persegi adalah = %.2f", LP);
        ulang31:
        printf ("\n\nIngin mengulangi Luas Persegi? (y/n) ");
        scanf ("%c", &luas1);
        luas1 = getchar ();
        if (luas1 == 'y')
        {
            printf ("\n");
            goto luper;
        }
        if (luas1 == 'n')
        {
            printf ("\n");
            goto luass;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang31;
        }
        break;

    case 2:
        lutrap:
        system ("cls");
        printf ("Masukkan Sisi Atas Trapesium Sama Kaki: ");
        scanf ("%f", &ppp);
        printf ("Masukkan Sisi Bawah Trapesium Sama Kaki: ");
        scanf ("%f", &lll);
        printf ("Masukkan Tinggi Trapesium Sama Kaki: ");
        scanf ("%f", &mmm);
        LUAS = (ppp+lll) * mmm / 2;
        printf ("Luas Trapesium Sama Kaki adalah = %.2f", LUAS);
        ulang32:
        printf ("\n\nIngin mengulangi Luas Trapesium? (y/n) ");
        scanf ("%c", &luas1);
        luas1 = getchar ();
        if (luas1 == 'y')
        {
            printf ("\n");
            goto lutrap;
        }
        if (luas1 == 'n')
        {
            printf ("\n");
            goto luass;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang32;
        }
        break;

    case 3:
        luyang:
        system ("cls");
        printf ("Masukkan Diagonal Panjang: ");
        scanf ("%f", &ppp);
        printf ("Masukkan Diagonal Lebar: ");
        scanf ("%f", &lll);
        LL = ppp * lll / 2;
        printf ("Luas Layang-layang adalah = %.2f", LL);
        ulang33:
        printf ("\n\nIngin mengulangi Luas Layang-layang? (y/n) ");
        scanf ("%c", &luas1);
        luas1 = getchar ();
        if (luas1 == 'y')
        {
            printf ("\n");
            goto luyang;
        }
        if (luas1 == 'n')
        {
            printf ("\n");
            goto luass;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang33;
        }

    case 4:
        luling:
        system ("cls");
        printf ("Masukkan Panjang Diameter: ");
        scanf ("%f", &ppp);
        printf ("Masukkan Panjang Jari-jari: ");
        scanf ("%f", &lll);
        LD = (22 * ppp * ppp / 7) / 4;
        LR = 22 * lll * lll / 7;
        printf ("Luas Lingkaran Berdasarkan Diameter adalah = %.2f\n", LD);
        printf ("Luas Lingkaran Berdasarkan Jari-jari adalah = %.2f", LR);
        ulang34:
        printf ("\n\nIngin mengulangi Luas Lingkaran? (y/n) ");
        scanf ("%c", &luas1);
        luas1 = getchar ();
        if (luas1 == 'y')
        {
            printf ("\n");
            goto luling;
        }
        if (luas1 == 'n')
        {
            printf ("\n");
            goto luass;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang34;
        }
        break;

    case 5: kelilingdanluas (); break;
    default: printf ("Pilihan Anda Tidak Ada");
    }
}

void volume ()
{
    volumee:
    system ("cls");
    int Volume;
    float sisi, VK, as, ts, dl, jjl, tp;
    float VPP, VPS, VSJ, VSD;
    float VLP, VLS, VLSJ, VLSD;
    float VBJJ, VBD;
    char volume1;
    printf ("-----------------------\n");
    printf ("  Volume Bangun Ruang\n");
    printf ("-----------------------\n\n");
    printf ("1. Volume Kubus\n");
    printf ("2. Volume Prisma\n");
    printf ("3. Volume Limas\n");
    printf ("4. Volume Bola\n");
    printf ("5. Kembali Ke Menu Sebelumnya\n");
    printf ("\n-----------------------\n\n");
    printf ("Masukkan Pilihan : ");
    scanf ("%d", &Volume);
    switch (Volume)
    {
    case 1:
        volkub:
        system ("cls");
        printf ("Masukkan Panjang Sisi: ");
        scanf ("%f", &sisi);
        VK = sisi * sisi * sisi;
        printf ("Volume Kubus adalah = %.2f", VK);
        ulang41:
        printf ("\n\nIngin mengulangi Volume Kubus? (y/n) ");
        scanf ("%c", &volume1);
        volume1 = getchar ();
        if (volume1 == 'y')
        {
            printf ("\n");
            goto volkub;
        }
        if (volume1 == 'n')
        {
            printf ("\n");
            goto volumee;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang41;
        }
        break;

    case 2:
        volpris:
        system ("cls");
        printf ("Masukkan Sisi Persegi: ");
        scanf ("%f", &sisi);
        printf ("Masukkan Lebar Alas Segitiga: ");
        scanf ("%f", &as);
        printf ("Masukkan Tinggi Segitiga: ");
        scanf ("%f", &ts);
        printf ("Masukkan Diameter Lingkaran: ");
        scanf ("%f", &dl);
        printf ("Masukkan Jari-jari Lingkaran: ");
        scanf ("%f", &jjl);
        printf ("Masukkan Tinggi Prisma: ");
        scanf ("%f", &tp);
        VPP = sisi * sisi * tp;
        VPS = (as * ts / 2) * tp;
        VSJ = (22 * jjl * jjl / 7) * tp;
        VSD = (22 * dl * dl / 7) / 4 * tp;
        printf ("Volume Prisma Persegi adalah = %.2f\n", VPP);
        printf ("Volume Prisma Segitiga adalah = %.2f\n", VPS);
        printf ("Volume Silinder berdasarkan Jari-jari adalah = %.2f\n", VSJ);
        printf ("Volume Silinder berdasarkan Diameter adalah = %.2f\n", VSD);
        ulang42:
        printf ("\n\nIngin mengulangi Volume Prisma? (y/n) ");
        scanf ("%c", &volume1);
        volume1 = getchar ();
        if (volume1 == 'y')
        {
            printf ("\n");
            goto volpris;
        }
        if (volume1 == 'n')
        {
            printf ("\n");
            goto volumee;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang42;
        }
        break;

    case 3:
        vollim:
        system ("cls");
        printf ("Masukkan Sisi Persegi: ");
        scanf ("%f", &sisi);
        printf ("Masukkan Lebar Alas Segitiga: ");
        scanf ("%f", &as);
        printf ("Masukkan Tinggi Segitiga: ");
        scanf ("%f", &ts);
        printf ("Masukkan Diameter Lingkaran: ");
        scanf ("%f", &dl);
        printf ("Masukkan Jari-jari Lingkaran: ");
        scanf ("%f", &jjl);
        printf ("Masukkan Tinggi Limas: ");
        scanf ("%f", &tp);
        VLP = sisi * sisi * tp / 3;
        VLS = (as * ts / 2) * tp / 3;
        VLSJ = (22 * jjl * jjl / 7) * tp / 3;
        VLSD = (22 * dl * dl / 7) / 4 * tp / 3;
        printf ("Volume Limas Persegi adalah = %.2f\n", VLP);
        printf ("Volume Limas Segitiga adalah = %.2f\n", VLS);
        printf ("Volume Limas Silinder berdasarkan Jari-jari adalah = %.2f\n", VLSJ);
        printf ("Volume Limas Silinder berdasarkan Diameter adalah = %.2f\n", VLSD);
        ulang43:
        printf ("\n\nIngin mengulangi Volume Limas? (y/n) ");
        scanf ("%c", &volume1);
        volume1 = getchar ();
        if (volume1 == 'y')
        {
            printf ("\n");
            goto vollim;
        }
        if (volume1 == 'n')
        {
            printf ("\n");
            goto volumee;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang43;
        }
        break;

    case 4:
        volbol:
        system ("cls");
        printf ("Masukkan Jari-jari Lingkaran = ");
        scanf ("%f", &jjl);
        printf ("Masukkan Diameter Lingkaran = ");
        scanf ("%f", &dl);
        VBJJ = (4.0/3) * phi * jjl * jjl * jjl;
        VBD = (22 * dl * dl * dl / 7) / 6;
        printf ("Volume Bola berdasarkan Jari-jari adalah = %.2f\n", VBJJ);
        printf ("Volume Bola berdasarkan Diameter adalah = %.2f\n", VBD);
        ulang44:
        printf ("\n\nIngin mengulangi Volume Bola? (y/n) ");
        scanf ("%c", &volume1);
        volume1 = getchar ();
        if (volume1 == 'y')
        {
            printf ("\n");
            goto volbol;
        }
        if (volume1 == 'n')
        {
            printf ("\n");
            goto volumee;
        }
        else
        {
            system ("cls");
            printf ("Pilihan Tidak Tersedia");
            goto ulang44;
        }
        break;

    case 5: kelilingdanluas (); break;
    default: volume ();
    }
}
void kelilingdanluas ()
{
    system ("cls");
    int KelilingDanLuas;
    printf ("------------------------\n");
    printf ("  Keliling Luas Volume\n");
    printf ("------------------------\n\n");
    printf ("1. Hitung Keliling Bangun\n");
    printf ("2. Hitung Luas Bangun Datar\n");
    printf ("3. Hitung Volume Bangun Ruang\n");
    printf ("4. Kembali Menu Utama\n");
    printf ("\n------------------------\n\n");
    printf ("Masukkan Pilihan : ");
    scanf ("%d", &KelilingDanLuas);
    switch (KelilingDanLuas)
    {
        case 1: keliling (); break;
        case 2: luas (); break;
        case 3: volume (); break;
        case 4: main (); break;
        default: kelilingdanluas ();
    }

}

void akarkuadrat ()
{
    akarr:
    system ("cls");
    char akar1;
    float akar, sudahdiakar;
    printf ("Masukkan bilangan yang akan diakar = ");
    scanf ("%f", &akar);
    sudahdiakar  = sqrt (akar);
    printf ("Hasil akar dari %.2f adalah = %.2f", akar, sudahdiakar);
    ulang5:
    printf ("\n\n\nIngin mengulangi Akar? (y/n) ");
    scanf ("%c", &akar1);
    akar1 = getchar ();
    if (akar1 == 'y')
    {
    printf ("\n");
        goto akarr;
    }
    if (akar1 == 'n')
    {
        main ();
    }
    else
    {
        system ("cls");
        printf ("Pilihan Tidak Tersedia");
        goto ulang5;
    }
}
