#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
cout <<"A VE B MATRISININ TXT FORMATINDAKI DOSYALARINI OLUSTURMAYA YARAR\n\nILK ONCE A(5X5) MATRISINI ARDINDAN B(1X5) MATRISININ DEGERLERINI GIRIN\n"<<endl;
ofstream matris1,matris2;
ifstream matris1r, matris2r;
matris1.open("matris5x5.txt");
matris2.open("matris1x5.txt");
float a[5][5] = {0.};
float b[5] = {0.};
//1.MATRISIN OLUSTURMA ASAMASI
for(int i = 0; i<5; i++)
{
for(int j = 0; j < 5; j++)
{
cout << "A MATRISIN " << i << " SATIR "
 << j << " SUTUN DEGERLERINI GIRIN "<<endl; 
cin >> a[i][j];

}
}

//2.MATRISIN OLUSTURMA ASAMASI
for(int x=0;x<5;x++)
{
cout << "B MATRISININ "<<x<<" DEGERLERINI GIRIN"<<endl;
cin >> b[x];
}

//1.MATRISIN ISTENILEN FORMATTA YAZDIRILMA ASAMASI
cout << "DOSYALAR OLUSTURULMUSTUR: "<<endl;
for(int i = 0; i<5; i++)
{
for(int j = 0; j < 5; j++)
{ 
matris1 << a[i][j] << "\t";
if(j==4) matris1 << "\n";
}
}
 
//2.MATRISIN ISTENILEN FORMATTA YAZDIRILMA ASAMASI
for(int x=0;x<5;x++)
{
matris2 << b[x] << " ";
}
cout << "\n";

matris1.close();
matris2.close();


matris1r.open("matris5x5.txt");
matris2r.open("matris1x5.txt");
int i,j = 0;
float ch=0,ch2=0;

float Bm[5][5];
float Im[5];
while(matris1r.is_open())
{
matris1r >> ch;
if (matris1r.eof())
break;
Bm[i/5][i%5] = ch;
i++;
}
while(matris2r.is_open())
{
matris2r >> ch2;
if (matris2r.eof())
break;
Im[j] = ch2;
j++;
}


matris1r.close();

cout<<"A MATRISI: "<<endl;
for(int i = 0; i<5; i++)
{
for(int j = 0; j < 5; j++)
{ 

cout << Bm[i][j] << "\t";
if(j==4) cout << "\n";
}
}
 
cout << "BT MATRISI: "<<endl;
for(int x=0;x<5;x++)
{
cout << Im[x] <<" ";
}



}
