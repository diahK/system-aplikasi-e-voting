#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<windows.h>

using namespace std;

void garis()
{
    cout<<"   ========================================================================="<<endl;
}

void gotoxy(int x, int y)
		{ // LETAK
		COORD coord;
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
		}


void bingkai()
{
    for(int a=2;a<78;a++){
        gotoxy(a,2);
        cout<<"*";
        gotoxy(a,23);
        cout<<"*";
    }
        for (int a=2; a<23;a++){
        gotoxy(2,a)  ;
        cout<<"*";
        gotoxy(77,a)  ;
        cout<<"*";
        }
}


int main()
{// PROGRAM UTAMA
		//	VARIABEL
		int n_calon,ke,suara,n;
		char nama1 [8];  int b_suara1; 	float j_suara1;	 float t_suara1;
		char nama2 [8];	 int b_suara2;	float j_suara2;	 float t_suara2;
		char nama3 [8];	 int b_suara3;	float j_suara3;	 float t_suara3;
                         int b_golput;	float j_golput;	 float t_golput;
		float npeserta;
        int ulang,i,pw,user;
{//WARNA
    system("color 70");
}

{// COVER
        bingkai();
        gotoxy(26,6);
        cout<<" P R O G R A M    V O T I N G "<<endl;
        gotoxy(18,10);
		cout<<" DIAH KOMALASARI DAN DESTARIA WILANDINI   "<<endl;
		gotoxy(24,12);
		cout<<" (1810631170015 DAN 1810631170048)"<<endl;
		gotoxy(25,15);
		cout<<"     TEKNIK INFORMATIKA  "<<endl;
		gotoxy(19,17);
		cout<<" UNIVERSITAS  SINGAPERBANGSA  KARAWANG    "<<endl;
		gotoxy(25,20);
		system("PAUSE>null");

}

{//KETERANGAN

        system("cls");
        bingkai();
        gotoxy(26,3);
        cout<<" P R O G R A M    V O T I N G "<<endl;
        gotoxy (10,10);
		cout<<" KETERANGAN : "<<endl;
		gotoxy (10,12);
		cout<<" - NAMA CALON MAKSIMAL 10 HURUF (TANPA SPASI)"<<endl;
		gotoxy (10,14);
		cout<<"- INPUT SUARA TIDAK SAMA DENGAN NOMOR CALON DIANGGAP GOLPUT"<<endl;
		gotoxy (10,16);
		cout<<"- INPUT JUMLAH PESERTA ADALAH BILANGAN BULAT(INT)"<<endl;
		system("pause>null");

}
    do
	{	// PROGRAM VOTING @d2
	    {
            ke=0;
			b_suara1=0; 	j_suara1=0; 	t_suara1=0;
			b_suara2=0; 	j_suara2=0;		t_suara2=0;
			b_suara3=0; 	j_suara3=0;		t_suara3=0;
			b_golput=0;  	j_golput=0;		t_golput=0;

        system("cls");
        bingkai();
        gotoxy(36,9);
        cout<<"  M E N U "<<endl;
        gotoxy(29,11);
        cout<<"1 .   VOTING 2 CALON "<<endl;
        gotoxy(29,13);
        cout<<"2 .   VOTING 3 CALON "<<endl;
        gotoxy(29,17);
        cout<<" MASUKAN PILIHAN : ";cin>>n_calon;
        system("pause>null");
        }

	if (n_calon==1)
    {//2 CALON
        system("cls");
        bingkai();
        gotoxy(27,3);
        cout<<" V O T I N G   2   C A L O N   "<<endl;
        garis();
        gotoxy(28,7);
        cout<<" N A M A    C A L O N    "<<endl;
        gotoxy(15,9);
        cout<<" 1.  Calon Pertama : ";cin>>nama1;
        gotoxy(15,11);
        cout<<" 2.  Calon Kedua   : ";cin>>nama2;
        gotoxy(19,15);
        cout<<"MASUKKAN JUMLAH PESERTA VOTING : ";cin>>npeserta;
        for (int n=1; n<=npeserta; n++)
        system("pause>null");

            {//INPUT SUARA
            system("cls");
            bingkai();
            gotoxy(26,6);
            cout<<" CALON 2 PEMIMPIN "<<endl;
            garis();
            gotoxy(11,9); cout<<"1";
			gotoxy(13,9);
			cout<<nama1<<endl;
			cout<<"     =====================";
			gotoxy(11,11); cout<<"2";
			gotoxy(13,11);
			cout<<nama2<<endl;
			cout<<"     =====================";
            for (n=1; n<=npeserta; n++){
            ke=ke+1;
            gotoxy(22,19);
            cout<<"MASUKAN  PILIHAN  ANDA "; cin>>suara;
            if (suara==1)
            {
				b_suara1=b_suara1+1;
				t_suara1=t_suara1+1;
            }
			if (suara==2)
            {
                b_suara2=b_suara2+1;
                t_suara2=t_suara2+1;
            }
            else if ((suara!=1)&&(suara!=2))
            {
                b_golput=b_golput+1;
                t_golput=t_golput+1;
            }
            system("cls");
            bingkai();
            gotoxy(26,6);
            cout<<" CALON 2 PEMIMPIN "<<endl;
            garis();
            gotoxy(11,9); cout<<"1";
			gotoxy(13,9);
			cout<<nama1<<endl;
			cout<<"     =====================";
			gotoxy(11,11); cout<<"2";
			gotoxy(13,11);
			cout<<nama2<<endl;
			cout<<"     =====================";}
        gotoxy(48,11);
        cout<<"VOTING  SELESAI"<<endl;
        gotoxy(38,13);
		cout<<"TEKAN ANYKEY UNTUK MELIHAT HASILNYA"<<endl	;
        bingkai();
		system("pause>null");
        system("Cls");
        }
		{//HASIL VOTING
		    system("cls");
		    bingkai();
		    gotoxy(17,7);
		    cout<<"1"<<endl;
		    gotoxy(22,7);
			cout<<nama1<<endl;
			j_suara1=(t_suara1*100)/npeserta;
			gotoxy(37,7);
			cout<<b_suara1<<endl;
			gotoxy(52,7);
			cout<<j_suara1<<endl;
			garis();
			gotoxy(17,11);
			cout<<"2"<<endl;
			gotoxy(22,11);
			cout<<nama2<<endl;
            j_suara2=(t_suara2*100)/npeserta;
            gotoxy(37,11);
            cout<<b_suara2<<endl;
            gotoxy(52,11);
			cout<<j_suara2<<endl;
			garis();
			j_golput=(t_golput*100)/npeserta;
			gotoxy(26,19);
			cout<<"TIDAK  MEMILIH"<<endl;
            gotoxy(52,19);
			cout<<j_golput<<endl;
			system("pause>null");
			system("cls");
		}
        }// << TUTUP N_CALON=1

    if (n_calon==2)
    {//3 CALON
        system("cls");
        bingkai();
        gotoxy(27,3);
        cout<<" V O T I N G   3   C A L O N   "<<endl;
        garis();
        gotoxy(28,7);
        cout<<" N A M A    C A L O N    "<<endl;
        gotoxy(15,9);
        cout<<" 1.  Calon Pertama : ";cin>>nama1;
        gotoxy(15,11);
        cout<<" 2.  Calon Kedua   : ";cin>>nama2;
        gotoxy(15,13);
        cout<<" 3.  Calon Ketiga  : ";cin>>nama3;
        gotoxy(21,15);
        cout<<"MASUKKAN JUMLAH PESERTA VOTING : ";cin>>npeserta;
        for (int n=1; n<=npeserta; n++)
        system("pause>null");

            {//INPUT SUARA
            system("cls");
            bingkai();
            gotoxy(26,6);
            cout<<" CALON 3 PEMIMPIN "<<endl;
            garis();
            gotoxy(11,9); cout<<"1";
			gotoxy(13,9);
			cout<<nama1<<endl;
			cout<<"     =====================";
			gotoxy(11,11); cout<<"2";
			gotoxy(13,11);
			cout<<nama2<<endl;
			cout<<"     =====================";
			gotoxy(11,13); cout<<"3";
			gotoxy(15,13);
			cout<<nama3<<endl;
			cout<<"     =====================";
            for (n=1; n<=npeserta; n++){
            ke=ke+1;
            gotoxy(22,19);
            cout<<"MASUKAN  PILIHAN  ANDA "; cin>>suara;
            if (suara==1)
            {
				b_suara1=b_suara1+1;
				t_suara1=t_suara1+1;
            }
			if (suara==2)
            {
                b_suara2=b_suara2+1;
                t_suara2=t_suara2+1;
            }
            if (suara==3)
            {
                b_suara3=b_suara3+1;
                t_suara3=t_suara3+1;
            }
            else if ((suara!=1)&&(suara!=2)&&(suara!=3))
            {
                b_golput=b_golput+1;
                t_golput=t_golput+1;
            }
            system("cls");
            bingkai();
            gotoxy(26,6);
            cout<<" CALON 3 PEMIMPIN "<<endl;
            garis();
            gotoxy(11,9); cout<<"1";
			gotoxy(13,9);
			cout<<nama1<<endl;
			cout<<"     =====================";
			gotoxy(11,11); cout<<"2";
			gotoxy(13,11);
			cout<<nama2<<endl;
			cout<<"     =====================";
			gotoxy(11,13); cout<<"3";
			gotoxy(15,13);
			cout<<nama3<<endl;
			cout<<"     =====================";
			}
        gotoxy(48,11);
        cout<<"VOTING  SELESAI"<<endl;
        gotoxy(38,13);
		cout<<"TEKAN ANYKEY UNTUK MELIHAT HASILNYA"<<endl	;
        bingkai();
		system("pause>null");
        system("Cls");
        }
		{//HASIL VOTING
		    system("cls");
		    bingkai();
		    garis();
		    gotoxy(17,7);
		    cout<<"1"<<endl;
		    gotoxy(22,7);
			cout<<nama1<<endl;
			j_suara1=(t_suara1*100)/npeserta;
			gotoxy(37,7);
			cout<<b_suara1<<endl;
			gotoxy(52,7);
			cout<<j_suara1<<endl;
			garis();
			gotoxy(17,11);
			cout<<"2"<<endl;
			gotoxy(22,11);
			cout<<nama2<<endl;
            j_suara2=(t_suara2*100)/npeserta;
            gotoxy(37,11);
            cout<<b_suara2<<endl;
            gotoxy(52,11);
			cout<<j_suara2<<endl;
			garis();
			gotoxy(17,11);
			cout<<"3"<<endl;
			gotoxy(22,11);
			cout<<nama3<<endl;
            j_suara3=(t_suara3*100)/npeserta;
            gotoxy(37,11);
            cout<<b_suara3<<endl;
            gotoxy(52,11);
			cout<<j_suara3<<endl;
			garis();
			j_golput=(t_golput*100)/npeserta;
			gotoxy(26,19);
			cout<<"TIDAK  MEMILIH"<<endl;
            gotoxy(52,19);
			cout<<j_golput<<endl;
			system("pause>null");
			system("cls");
		}
        }// << TUTUP N_CALON=2
    else if ((n_calon!=1)&&(n_calon!=2))
	{ // KODE SALAH
	bingkai();
	gotoxy(30,9);
	cout<<"   MAAF KODE SALAH ";
	gotoxy(32,13);
	cout<<" ANYNUM MENU ";
	gotoxy(28,17);
	cout<<"MASUKAN PILIHAN ANDA  : ";
	cin>>ulang;
	system("cls");
	}
	{ // MENGGUNAKAN LAGI / TIDAK
	bingkai();
	gotoxy(36,9);
	cout<<" M E N U ";
	gotoxy(26,12);
	cout<<" ANYNUM MENGGUNAKAN LAGI";
	gotoxy(26,14);
	cout<<"  KLIK 9  UNTUK KELUAR PROGRAM";
	gotoxy(28,17);
	cout<<"MASUKAN PILIHAN ANDA  : ";
	cin>>ulang;
	system("cls");
	}
	}
	while(ulang!=9);
    { // PENUTUP
    system("cls");
    bingkai();
    gotoxy(26,3);
	cout<<"P R O G R A M    V O T I N G";
	gotoxy(28,11);
	cout<<"T E R I M A    K A S I H";
	gotoxy(25,15);
	system("pause>null");
	system("cls");
	}
	system("pause>null");
	getch();
	return 0;
}


