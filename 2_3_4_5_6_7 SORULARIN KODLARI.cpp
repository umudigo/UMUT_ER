#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cout<< "######################################################" << endl ;		
	cout<< "##	ATA MATRISININ IZINI	 	            ##" << endl ;
	cout<< "## 	A MATRISININ SATIR NORMLARINI	  	    ##" << endl ;
	cout<< "##	A MATRISININ SUTUN NORMLARINI 		    ##" << endl ;
	cout<< "## 	A MATRISININ OKLID NORMUNU (N(A)) 	    ##" << endl ;
	cout<< "## 	A MATRISINI OKLID NORMUNA GORE NORMLASTIRMA ##" << endl ;
	cout<< "## 	A MATRISININ OZDEGERLERINI		    ##" << endl ;
	cout<< "## 	HESAPLAMAK ICIN ISTENEN VERILERI GIRINIZ    ##" << endl ;
	cout<< "######################################################" << endl ;	

	float A10,A11,A12,A13,A14,A15,A21,A22,A23,A24,A25,A31,A32,A33,A34,A35,A41,A42,A43,A44,A45,A51,A52,A53,A54,A55,b11,b12,b13,b14,b15,b21,b22,b23,b24,b25,b31,b32,b33,b34,b35,b41,b42,b43,b44,b45,b51,b52,b53,b54,b55,c11,c12,c13,c14,c15,c21,c22,c23,c24,c25,c31,c32,c33,c34,c35,c41,c42,c43,c44,c45,c51,c52,c53,c54,c55,c10;

	
	cout<< "A[1][1] ELEMANI GiRiNiZ" << endl ;
	cin>>A11;
	
	cout<<"A[1][2] ELEMANI GiRiNiZ" << endl ;
	cin>>A12;
	
	cout<<"A[1][3] ELEMANI GiRiNiZ" << endl ;
	cin>>A13;
	
	cout<<"A[1][4] ELEMANI GiRiNiZ" << endl ;
	cin>>A14;
	
	cout<<"A[1][5] ELEMANI GiRiNiZ" << endl ;
	cin>>A15;
	
	cout<< "A[2][1] ELEMANI GiRiNiZ" << endl ;
	cin>>A21;
	
	cout<<"A[2][2] ELEMANI GiRiNiZ" << endl ;
	cin>>A22;
	
	cout<<"A[2][3] ELEMANI GiRiNiZ" << endl ;
	cin>>A23;
	
	cout<<"A[2][4] ELEMANI GiRiNiZ" << endl ;
	cin>>A24;
	
	cout<<"A[2][5] ELEMANI GiRiNiZ" << endl ;
	cin>>A25;
	
	cout<< "A[3][1] ELEMANI GiRiNiZ" << endl ;
	cin>>A31;
	
	cout<<"A[3][2] ELEMANI GiRiNiZ" << endl ;
	cin>>A32;
	
	cout<<"A[3][3] ELEMANI GiRiNiZ" << endl ;
	cin>>A33;
	
	cout<<"A[3][4] ELEMANI GiRiNiZ" << endl ;
	cin>>A34;
	
	cout<<"A[3][5] ELEMANI GiRiNiZ" << endl ;
	cin>>A35;

	cout<< "A[4][1] ELEMANI GiRiNiZ" << endl ;
	cin>>A41;
	
	cout<<"A[4][2] ELEMANI GiRiNiZ" << endl ;
	cin>>A42;
	
	cout<<"A[4][3] ELEMANI GiRiNiZ" << endl ;
	cin>>A43;
	
	cout<<"A[4][4] ELEMANI GiRiNiZ" << endl ;
	cin>>A44;
	
	cout<<"A[4][5] ELEMANI GiRiNiZ" << endl ;
	cin>>A45;
	
	cout<< "A[5][1] ELEMANI GiRiNiZ" << endl ;
	cin>>A51;
	
	cout<<"A[5][2] ELEMANI GiRiNiZ" << endl ;
	cin>>A52;
	
	cout<<"A[5][3] ELEMANI GiRiNiZ" << endl ;
	cin>>A53;
	
	cout<<"A[5][4] ELEMANI GiRiNiZ" << endl ;
	cin>>A54;
	
	cout<<"A[5][5] ELEMANI GiRiNiZ" << endl ;
	cin>>A55;
	
	A10 = sqrt((b11)+(b22)+(b33)+(b44)+(b55));
	b11 = (A11*A11)+(A21*A21)+(A31*A31)+(A41*A41)+(A51*A51);
	b12 = (A11*A12)+(A21*A22)+(A31*A32)+(A41*A42)+(A51*A52);
	b13 = (A11*A13)+(A21*A23)+(A31*A33)+(A41*A43)+(A51*A53);
	b14 = (A11*A14)+(A21*A24)+(A31*A34)+(A41*A44)+(A51*A54);
	b15 = (A11*A15)+(A21*A25)+(A31*A35)+(A41*A45)+(A51*A55);	
	b21 = (A12*A11)+(A22*A21)+(A32*A31)+(A42*A41)+(A52*A51);
	b22 = (A12*A12)+(A22*A22)+(A32*A32)+(A42*A42)+(A52*A52);
	b23 = (A12*A13)+(A22*A23)+(A32*A33)+(A42*A43)+(A52*A53);
	b24 = (A12*A14)+(A22*A24)+(A32*A34)+(A42*A44)+(A52*A54);
	b25 = (A12*A15)+(A22*A25)+(A32*A35)+(A42*A45)+(A52*A55);
	b31 = (A13*A11)+(A23*A21)+(A33*A31)+(A43*A41)+(A53*A51);
	b32 = (A13*A12)+(A23*A22)+(A33*A32)+(A43*A42)+(A53*A52);
	b33 = (A13*A13)+(A23*A23)+(A33*A33)+(A43*A43)+(A53*A53);
	b34 = (A13*A14)+(A23*A24)+(A33*A34)+(A43*A44)+(A53*A54);
	b35 = (A13*A15)+(A23*A25)+(A33*A35)+(A43*A45)+(A53*A55);
	b41 = (A14*A11)+(A24*A21)+(A34*A31)+(A44*A41)+(A54*A51);
	b42 = (A14*A12)+(A24*A22)+(A34*A32)+(A44*A42)+(A54*A52);
	b43 = (A14*A13)+(A24*A23)+(A34*A33)+(A44*A43)+(A54*A53);
	b44 = (A14*A14)+(A24*A24)+(A34*A34)+(A44*A44)+(A54*A54);
	b45 = (A14*A15)+(A24*A25)+(A34*A35)+(A44*A45)+(A54*A55);
	b51 = (A15*A11)+(A25*A21)+(A35*A31)+(A45*A41)+(A55*A51);
	b52 = (A15*A12)+(A25*A22)+(A35*A32)+(A45*A42)+(A55*A52);
	b53 = (A15*A13)+(A25*A23)+(A35*A33)+(A45*A43)+(A55*A53);
	b54 = (A15*A14)+(A25*A24)+(A35*A34)+(A45*A44)+(A55*A54);
	b55 = (A15*A15)+(A25*A25)+(A35*A35)+(A45*A45)+(A55*A55);
	c10 = sqrt((A11*A11)+(A21*A21)+(A31*A31)+(A41*A41)+(A51*A51)+(A12*A12)+(A22*A22)+(A32*A32)+(A42*A42)+(A52*A52)+(A13*A13)+(A23*A23)+(A33*A33)+(A43*A43)+(A53*A53)+(A14*A14)+(A24*A24)+(A34*A34)+(A44*A44)+(A54*A54)+(A15*A15)+(A25*A25)+(A35*A35)+(A45*A45)+(A55*A55));
	c11 = (A11/c10);
	c12 = (A12/c10);
	c13 = (A13/c10);
	c14 = (A14/c10);
	c15 = (A15/c10);
	c21 = (A21/c10);
	c22 = (A22/c10);
	c23 = (A23/c10);
	c24 = (A24/c10);
	c25 = (A25/c10);
	c31 = (A31/c10);
	c32 = (A32/c10);
	c33 = (A33/c10);
	c34 = (A34/c10);
	c35 = (A35/c10);
	c41 = (A41/c10);
	c42 = (A42/c10);
	c43 = (A43/c10);
	c44 = (A44/c10);
	c45 = (A45/c10);
	c51 = (A51/c10);
	c52 = (A52/c10);
	c53 = (A53/c10);
	c54 = (A54/c10);
	c55 = (A55/c10);
	
	cout<< "#####################################################" << endl ;	
	cout<< "A MATRIS" << endl ;
	cout<< "#####################################################" << endl ;
	printf("%.4f %.4f %.4f %.4f %.4f\n",A11,A12,A13,A14,A15);
	printf("%.4f %.4f %.4f %.4f %.4f\n",A21,A22,A23,A24,A25);
	printf("%.4f %.4f %.4f %.4f %.4f\n",A31,A32,A33,A34,A35);	
	printf("%.4f %.4f %.4f %.4f %.4f\n",A41,A42,A43,A44,A45);
	printf("%.4f %.4f %.4f %.4f %.4f\n",A51,A52,A53,A54,A55);
	cout<< "#####################################################" << endl ;
	
	cout<< "AT MATRIS" << endl ;
	cout<< "#####################################################" << endl ;
	printf("%.4f %.4f %.4f %.4f %.4f\n",A11,A21,A31,A41,A51);
	printf("%.4f %.4f %.4f %.4f %.4f\n",A12,A22,A32,A42,A52);
	printf("%.4f %.4f %.4f %.4f %.4f\n",A13,A23,A33,A43,A53);	
	printf("%.4f %.4f %.4f %.4f %.4f\n",A14,A24,A35,A44,A54);
	printf("%.4f %.4f %.4f %.4f %.4f\n",A15,A25,A35,A45,A55);	
	cout<< "#####################################################" << endl ;
		
	cout<< "ATA MATRIS" << endl ;
	cout<< "#####################################################" << endl ;
	printf("%.4f %.4f %.4f %.4f %.4f\n",b11,b12,b13,b14,b15);
	printf("%.4f %.4f %.4f %.4f %.4f\n",b21,b22,b23,b24,b25);
	printf("%.4f %.4f %.4f %.4f %.4f\n",b31,b32,b33,b34,b35);	
	printf("%.4f %.4f %.4f %.4f %.4f\n",b41,b42,b43,b44,b45);
	printf("%.4f %.4f %.4f %.4f %.4f\n",b51,b52,b53,b54,b55);		
	cout<< "#####################################################" << endl ;
	
	cout<< "ATA MATRIS IZI" << endl ;
	cout<< "#####################################################" << endl ;
	cout<<((b11)+(b22)+(b33)+(b44)+(b55))<< endl;	
	cout<< "#####################################################" << endl ;
	
	cout<< "SATIR NORMU" << endl ;
	cout<< "#####################################################" << endl ;
	cout<<"N(A)1="<< sqrt((A11*A11)+(A12*A12)+(A13*A13)+(A14*A14)+(A15*A15))<< endl;
	cout<<"N(A)2="<< sqrt((A21*A21)+(A22*A22)+(A23*A23)+(A24*A24)+(A25*A25))<< endl;
	cout<<"N(A)3="<< sqrt((A31*A31)+(A32*A32)+(A33*A33)+(A34*A34)+(A35*A35))<< endl;
	cout<<"N(A)4="<< sqrt((A41*A41)+(A42*A42)+(A43*A43)+(A44*A44)+(A45*A45))<< endl;
	cout<<"N(A)5="<< sqrt((A51*A51)+(A52*A52)+(A53*A53)+(A54*A54)+(A55*A55))<< endl;
	cout<< "#####################################################" << endl ;
	
	cout<< "SUTUN NORMU" << endl ;
	cout<< "#####################################################" << endl ;
	cout<<"N(A)1="<< sqrt((A11*A11)+(A21*A21)+(A31*A31)+(A41*A41)+(A51*A51))<< endl;
	cout<<"N(A)2="<< sqrt((A12*A12)+(A22*A22)+(A32*A32)+(A42*A42)+(A52*A52))<< endl;
	cout<<"N(A)3="<< sqrt((A13*A13)+(A23*A23)+(A33*A33)+(A43*A43)+(A53*A53))<< endl;
	cout<<"N(A)4="<< sqrt((A14*A14)+(A24*A24)+(A34*A34)+(A44*A44)+(A54*A54))<< endl;
	cout<<"N(A)5="<< sqrt((A15*A15)+(A25*A25)+(A35*A35)+(A45*A45)+(A55*A55))<< endl;	
	cout<< "#####################################################" << endl ;
	
	cout<< "OKLID NORMU" << endl ;	
	cout<< "#####################################################" << endl ;
	printf("%.4f\n",c10);
	cout<< "#####################################################" << endl ;
	
	cout<< "ATA MATRIS IZININ KAREKOKU" << endl ;
	cout<< "#####################################################" << endl ;
	cout<<sqrt((b11)+(b22)+(b33)+(b44)+(b55))<< endl;	
	cout<< "#####################################################" << endl ;	
	
	cout<< "A MATRISINI OKLID NORMUNA GORE NORMLASTIRILMIS" << endl ;
	cout<< "#####################################################" << endl ;
	printf("%.4f %.4f %.4f %.4f %.4f\n",c11,c12,c13,c14,c15);
	printf("%.4f %.4f %.4f %.4f %.4f\n",c21,c22,c23,c24,c25);
	printf("%.4f %.4f %.4f %.4f %.4f\n",c31,c32,c33,c34,c35);	
	printf("%.4f %.4f %.4f %.4f %.4f\n",c41,c42,c43,c44,c45);
	printf("%.4f %.4f %.4f %.4f %.4f\n",c51,c52,c53,c54,c55);
	cout<< "#####################################################" << endl ;
}
