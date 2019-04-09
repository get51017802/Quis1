#include <stdio.h>
#include <iostream.h>
#include <conio.h>
main()
{
char Nama[26],Jurusan[18];
float NK,NT1,NT2,NT3,ND,NQ,NF,TNT,NA,E,D,k,o,j;
	cout<<"Masukan Nama : ";cin>>Nama;
   cout<<"Masukan Jurusan : ";cin>>Jurusan;
   cout<<"Masukan Nilai Kehadiran : ";cin>>NK;
   cout<<"Masukan Nilai Tugas 1 : ";cin>>NT1;
   cout<<"Masukan Nilai Tugas 2 : ";cin>>NT2;
   cout<<"Masukan Nilai Tugas 3 : ";cin>>NT3;
   cout<<"Masukan Nilai Mid : ";cin>>ND;
   cout<<"Masukan Nilai Quis : ";cin>>NQ;
   cout<<"Masukan Nilai Final : ";cin>>NF;

   TNT=(NT1+NT2+NT3)/3;
   cout<<endl;
   E=NK*20/100;
   D=TNT*20/100;
   k=ND*20/100;
   o=NQ*20/100;
   j=NF*20/100;
   NA=E+D+k+o+j;
   cout<<endl;


   cout<<"Nilai Akhir : "<<NA<<endl;


getch();
}

