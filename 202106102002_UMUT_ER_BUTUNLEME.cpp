#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main(){
ifstream matris1r, matris2r;

matris1r.open("matris5x5.txt");
matris2r.open("matris1x5.txt");
int i,j = 0;
float ch=0.0,ch2=0.0;

float A[5][5];//A MATRISI ICIN
float Akl[5][5];//A MATRISI DETERMINAT ICIN
float B[1][5];//B MATRISI ICIN
float GA[5][5];//GAUS ALGORITMASI ICIN A MATRISI ICIN
float birim[5][5];//5X5 BIRIM MATRIS
while(matris1r.is_open())
{
  matris1r >> ch;
  if (matris1r.eof())
    break;
  A[i/5][i%5] = ch;//A MATRISI ICIN
  Akl[i/5][i%5] = ch;//A MATRISI DETERMINAT ICIN
  GA[i/5][i%5] = ch;//GAUS ALGORITMASI ICIN A MATRISI ICIN
  i++;
}
while(matris2r.is_open())
{
  matris2r >> ch2;
  if (matris2r.eof())
    break;
  B[0][j] = ch2;//B MATRISI ICIN
  j++;
}

matris1r.close();
matris2r.close();
for(int i = 0; i<5; i++)
{
  for(int j = 0; j < 5; j++)
  {   
      if(j==4) cout << "\n";
  }
}

	
	float b11,b12,b13,b14,b15,b21,b22,b23,b24,b25,b31,b32,b33,b34,b35,b41,b42,b43,b44,b45,b51,b52,b53,b54,b55,
	B11,B12,B13,B14,B15,A10,
	c11,c12,c13,c14,c15,c21,c22,c23,c24,c25,c31,c32,c33,c34,c35,c41,c42,c43,c44,c45,c51,c52,c53,c54,c55,
	c10,ratio,det,
	p11,p12,p13,p14,p15,p21,p22,p23,p24,p25,p31,p32,p33,p34,p35,p41,p42,p43,p44,p45,p51,p52,p53,p54,p55,
	r11,r12,r13,r14,r15,r21,r22,r23,r24,r25,r31,r32,r33,r34,r35,r41,r42,r43,r44,r45,r51,r52,r53,r54,r55,
	s11,s12,s13,s14,s15,s21,s22,s23,s24,s25,s31,s32,s33,s34,s35,s41,s42,s43,s44,s45,s51,s52,s53,s54,s55,
	t11,t12,t13,t14,t15,t21,t22,t23,t24,t25,t31,t32,t33,t34,t35,t41,t42,t43,t44,t45,t51,t52,t53,t54,t55,
	u11,u12,u13,u14,u15,u21,u22,u23,u24,u25,u31,u32,u33,u34,u35,u41,u42,u43,u44,u45,u51,u52,u53,u54,u55,
	alfa1,alfa2,alfa3,alfa4,alfa5,kh,
	GA11,GA12,GA13,GA14,GA15,GB1,
	GA211,GA212,GA213,GA214,GA215,GB21,GA221,GA222,GA223,GA224,GA225,GB22,
	GA311,GA312,GA313,GA314,GA315,GB31,GA321,GA322,GA323,GA324,GA325,GB32,GA331,GA332,GA333,GA334,GA335,GB33,
	GA411,GA412,GA413,GA414,GA415,GB41,GA421,GA422,GA423,GA424,GA425,GB42,GA431,GA432,GA433,GA434,GA435,GB43,GA441,GA442,GA443,GA444,GA445,GB44,
	GA511,GA512,GA513,GA514,GA515,GB51,GA521,GA522,GA523,GA524,GA525,GB52,GA531,GA532,GA533,GA534,GA535,GB53,GA541,GA542,GA543,GA544,GA545,GB54,GA551,GA552,GA553,GA554,GA555,GB55,
	X5,X4,X3,X2,X1,xx1,xx2,xx3,xx4,xx5,xxx1,xxx2,xxx3,xxx4,xxx5,
	ATB1,ATB2,ATB3,ATB4,ATB5,
	y11,y12,y13,y14,y15,yb1,y20,y21,y22,y23,y24,yb2,y31,y32,y33,y34,yb3,y41,y42,y43,yb4,y51,y52,y53,yb5,y61,y62,yb6,y71,y72,yb7,y81,yb8,y91,y92;
	
 float z11,z12,z13,z14,z15,zb1,z21,z22,z23,z24,zb2,z31,z32,z33,zb3,z41,z42,zb4,z51,zb5,dd,kk;
	int k,l,sayi;
	
	A10 = sqrt((b11)+(b22)+(b33)+(b44)+(b55));
	b11 = (A[0][0]*A[0][0])+(A[1][0]*A[1][0])+(A[2][0]*A[2][0])+(A[3][0]*A[3][0])+(A[4][0]*A[4][0]);
	b12 = (A[0][0]*A[0][1])+(A[1][0]*A[1][1])+(A[2][0]*A[2][1])+(A[3][0]*A[3][1])+(A[4][0]*A[4][1]);
	b13 = (A[0][0]*A[0][2])+(A[1][0]*A[1][2])+(A[2][0]*A[2][2])+(A[3][0]*A[3][2])+(A[4][0]*A[4][2]);
	b14 = (A[0][0]*A[0][3])+(A[1][0]*A[1][3])+(A[2][0]*A[2][3])+(A[3][0]*A[3][3])+(A[4][0]*A[4][3]);
	b15 = (A[0][0]*A[0][4])+(A[1][0]*A[1][4])+(A[2][0]*A[2][4])+(A[3][0]*A[3][4])+(A[4][0]*A[4][4]);	
	b21 = (A[0][1]*A[0][0])+(A[1][1]*A[1][0])+(A[2][1]*A[2][0])+(A[3][1]*A[3][0])+(A[4][1]*A[4][0]);
	b22 = (A[0][1]*A[0][1])+(A[1][1]*A[1][1])+(A[2][1]*A[2][1])+(A[3][1]*A[3][1])+(A[4][1]*A[4][1]);
	b23 = (A[0][1]*A[0][2])+(A[1][1]*A[1][2])+(A[2][1]*A[2][2])+(A[3][1]*A[3][2])+(A[4][1]*A[4][2]);
	b24 = (A[0][1]*A[0][3])+(A[1][1]*A[1][3])+(A[2][1]*A[2][3])+(A[3][1]*A[3][3])+(A[4][1]*A[4][3]);
	b25 = (A[0][1]*A[0][4])+(A[1][1]*A[1][4])+(A[2][1]*A[2][4])+(A[3][1]*A[3][4])+(A[4][1]*A[4][4]);
	b31 = (A[0][2]*A[0][0])+(A[1][2]*A[1][0])+(A[2][2]*A[2][0])+(A[3][2]*A[3][0])+(A[4][2]*A[4][0]);
	b32 = (A[0][2]*A[0][1])+(A[1][2]*A[1][1])+(A[2][2]*A[2][1])+(A[3][2]*A[3][1])+(A[4][2]*A[4][1]);
	b33 = (A[0][2]*A[0][2])+(A[1][2]*A[1][2])+(A[2][2]*A[2][2])+(A[3][2]*A[3][2])+(A[4][2]*A[4][2]);
	b34 = (A[0][2]*A[0][3])+(A[1][2]*A[1][3])+(A[2][2]*A[2][3])+(A[3][2]*A[3][3])+(A[4][2]*A[4][3]);
	b35 = (A[0][2]*A[0][4])+(A[1][2]*A[1][4])+(A[2][2]*A[2][4])+(A[3][2]*A[3][4])+(A[4][2]*A[4][4]);
	b41 = (A[0][3]*A[0][0])+(A[1][3]*A[1][0])+(A[2][3]*A[2][0])+(A[3][3]*A[3][0])+(A[4][3]*A[4][0]);
	b42 = (A[0][3]*A[0][1])+(A[1][3]*A[1][1])+(A[2][3]*A[2][1])+(A[3][3]*A[3][1])+(A[4][3]*A[4][1]);
	b43 = (A[0][3]*A[0][2])+(A[1][3]*A[1][2])+(A[2][3]*A[2][2])+(A[3][3]*A[3][2])+(A[4][3]*A[4][2]);
	b44 = (A[0][3]*A[0][3])+(A[1][3]*A[1][3])+(A[2][3]*A[2][3])+(A[3][3]*A[3][3])+(A[4][3]*A[4][3]);
	b45 = (A[0][3]*A[0][4])+(A[1][3]*A[1][4])+(A[2][3]*A[2][4])+(A[3][3]*A[3][4])+(A[4][3]*A[4][4]);
	b51 = (A[0][4]*A[0][0])+(A[1][4]*A[1][0])+(A[2][4]*A[2][0])+(A[3][4]*A[3][0])+(A[4][4]*A[4][0]);
	b52 = (A[0][4]*A[0][1])+(A[1][4]*A[1][1])+(A[2][4]*A[2][1])+(A[3][4]*A[3][1])+(A[4][4]*A[4][1]);
	b53 = (A[0][4]*A[0][2])+(A[1][4]*A[1][2])+(A[2][4]*A[2][2])+(A[3][4]*A[3][2])+(A[4][4]*A[4][2]);
	b54 = (A[0][4]*A[0][3])+(A[1][4]*A[1][3])+(A[2][4]*A[2][3])+(A[3][4]*A[3][3])+(A[4][4]*A[4][3]);
	b55 = (A[0][4]*A[0][4])+(A[1][4]*A[1][4])+(A[2][4]*A[2][4])+(A[3][4]*A[3][4])+(A[4][4]*A[4][4]);
	c10 = sqrt((A[0][0]*A[0][0])+(A[1][0]*A[1][0])+(A[2][0]*A[2][0])+(A[3][0]*A[3][0])+(A[4][0]*A[4][0])+(A[0][1]*A[0][1])+(A[1][1]*A[1][1])+(A[2][1]*A[2][1])+(A[3][1]*A[3][1])+(A[4][1]*A[4][1])+(A[0][2]*A[0][2])+(A[1][2]*A[1][2])+(A[2][2]*A[2][2])+(A[3][2]*A[3][2])+(A[4][2]*A[4][2])+(A[0][3]*A[0][3])+(A[1][3]*A[1][3])+(A[2][3]*A[2][3])+(A[3][3]*A[3][3])+(A[4][3]*A[4][3])+(A[0][4]*A[0][4])+(A[1][4]*A[1][4])+(A[2][4]*A[2][4])+(A[3][4]*A[3][4])+(A[4][4]*A[4][4]));
	c11 = (A[0][0]/c10);
	c12 = (A[0][1]/c10);
	c13 = (A[0][2]/c10);
	c14 = (A[0][3]/c10);
	c15 = (A[0][4]/c10);
	c21 = (A[1][0]/c10);
	c22 = (A[1][1]/c10);
	c23 = (A[1][2]/c10);
	c24 = (A[1][3]/c10);
	c25 = (A[1][4]/c10);
	c31 = (A[2][0]/c10);
	c32 = (A[2][1]/c10);
	c33 = (A[2][2]/c10);
	c34 = (A[2][3]/c10);
	c35 = (A[2][4]/c10);
	c41 = (A[3][0]/c10);
	c42 = (A[3][1]/c10);
	c43 = (A[3][2]/c10);
	c44 = (A[3][3]/c10);
	c45 = (A[3][4]/c10);
	c51 = (A[4][0]/c10);
	c52 = (A[4][1]/c10);
	c53 = (A[4][2]/c10);
	c54 = (A[4][3]/c10);
	c55 = (A[4][4]/c10);
	ATB1 = A[0][0]*B[0][0]+A[1][0]*B[0][1]+A[2][0]*B[0][2]+A[3][0]*B[0][3]+A[4][0]*B[0][4];
	ATB2 = A[0][1]*B[0][0]+A[1][1]*B[0][1]+A[2][1]*B[0][2]+A[3][1]*B[0][3]+A[4][1]*B[0][4];
	ATB3 = A[0][2]*B[0][0]+A[1][2]*B[0][1]+A[2][2]*B[0][2]+A[3][2]*B[0][3]+A[4][2]*B[0][4];
	ATB4 = A[0][3]*B[0][0]+A[1][3]*B[0][1]+A[2][3]*B[0][2]+A[3][3]*B[0][3]+A[4][3]*B[0][4];
	ATB5 = A[0][4]*B[0][0]+A[1][4]*B[0][1]+A[2][4]*B[0][2]+A[3][4]*B[0][3]+A[4][4]*B[0][4];	
	cout.precision(4);
		
	alfa1 = sqrt((A[0][0]*A[0][0])+(A[0][1]*A[0][1])+(A[0][2]*A[0][2])+(A[0][3]*A[0][3])+(A[0][4]*A[0][4]));
	alfa2 = sqrt((A[1][0]*A[1][0])+(A[1][1]*A[1][1])+(A[1][2]*A[1][2])+(A[1][3]*A[1][3])+(A[1][4]*A[1][4]));
	alfa3 = sqrt((A[2][0]*A[2][0])+(A[2][1]*A[2][1])+(A[2][2]*A[2][2])+(A[2][3]*A[2][3])+(A[2][4]*A[2][4]));
	alfa4 = sqrt((A[3][0]*A[3][0])+(A[3][1]*A[3][1])+(A[3][2]*A[3][2])+(A[3][3]*A[3][3])+(A[3][4]*A[3][4]));
	alfa5 = sqrt((A[4][0]*A[4][0])+(A[4][1]*A[4][1])+(A[4][2]*A[4][2])+(A[4][3]*A[4][3])+(A[4][4]*A[4][4]));

/* PIVOTLAMA YONTEMI */
	
	p11 = (1/A[0][0]);
	p12 = -(A[0][1]/A[0][0]);
	p13 = -(A[0][2]/A[0][0]);
	p14 = -(A[0][3]/A[0][0]);
	p15 = -(A[0][4]/A[0][0]);
	
	p21 = (A[1][0]/A[0][0]) ;
	p22 = (A[1][1]-(A[0][1]*(A[1][0]/A[0][0]))) ;
	p23 = (A[1][2]-(A[0][2]*(A[1][0]/A[0][0]))) ;	
	p24 = (A[1][3]-(A[0][3]*(A[1][0]/A[0][0]))) ;	
	p25 = (A[1][4]-(A[0][4]*(A[1][0]/A[0][0]))) ;
	
	p31 = (A[2][0]/A[0][0]);
	p32 = (A[2][1]-(A[0][1]*(A[2][0]/A[0][0])));
	p33 = (A[2][2]-(A[0][2]*(A[2][0]/A[0][0])));	
	p34 = (A[2][3]-(A[0][3]*(A[2][0]/A[0][0])));	
	p35 = (A[2][4]-(A[0][4]*(A[2][0]/A[0][0])));
	
	p41 = (A[3][0]/A[0][0]);
	p42 = (A[3][1]-(A[0][1]*(A[3][0]/A[0][0])));
	p43 = (A[3][2]-(A[0][2]*(A[3][0]/A[0][0])));	
	p44 = (A[3][3]-(A[0][3]*(A[3][0]/A[0][0])));	
	p45 = (A[3][4]-(A[0][4]*(A[3][0]/A[0][0])));
		
	p51 = (A[4][0]/A[0][0]);
	p52 = (A[4][1]-(A[0][1]*(A[4][0]/A[0][0])));
	p53 = (A[4][2]-(A[0][2]*(A[4][0]/A[0][0])));	
	p54 = (A[4][3]-(A[0][3]*(A[4][0]/A[0][0])));	
	p55 = (A[4][4]-(A[0][4]*(A[4][0]/A[0][0])));
	
	r11 = (p11-(p21*(p12/p22)));
	r12 = (p12/p22);
	r13 = (p13-(p23*(p12/p22)));
	r14 = (p14-(p24*(p12/p22)));	
	r15 = (p15-(p25*(p12/p22)));
	
	r21 = -(p21/p22);
	r22 =  (1/p22);
	r23 = -(p23/p22);
	r24 = -(p24/p22);
	r25 = -(p25/p22);
	
	r31 = (p31-(p21*(p32/p22)));
	r32 = (p32/p22);
	r33 = (p33-(p23*(p32/p22)));
	r34 = (p34-(p24*(p32/p22)));
	r35 = (p35-(p25*(p32/p22)));
	
	r41 = (p41-(p21*(p42/p22)));
	r42 = (p42/p22);
	r43 = (p43-(p23*(p42/p22)));
	r44 = (p44-(p24*(p42/p22)));
	r45 = (p45-(p25*(p42/p22)));
	
	r51 = (p51-(p21*(p52/p22)));
	r52 = (p52/p22);
	r53 = (p53-(p23*(p52/p22)));
	r54 = (p54-(p24*(p52/p22)));
	r55 = (p55-(p25*(p52/p22)));
	
	s11 = (r11-(r31*(r13/r33)));
	s12 = (r12-(r32*(r13/r33)));
	s13 = (r13/r33);
	s14 = (r14-(r34*(r13/r33)));
	s15 = (r15-(r35*(r13/r33)));
	
	s21 = (r21-(r31*(r23/r33)));
	s22 = (r22-(r32*(r23/r33)));
	s23 = (r23/r33);
	s24 = (r24-(r34*(r23/r33)));
	s25 = (r25-(r35*(r23/r33)));

	s31 = -(r31/r33);
	s32 = -(r32/r33);
	s33 = (1/r33);
	s34 = -(r34/r33);
	s35 = -(r35/r33);
	
	s41 = (r41-(r31*(r43/r33)));
	s42 = (r42-(r32*(r43/r33)));
	s43 = (r43/r33);
	s44 = (r44-(r34*(r43/r33)));
	s45 = (r45-(r35*(r43/r33)));	

	s51 = (r51-(r31*(r53/r33)));
	s52 = (r52-(r32*(r53/r33)));
	s53 = (r53/r33);
	s54 = (r54-(r34*(r53/r33)));
	s55 = (r55-(r35*(r53/r33)));
	
	t11 = (s11-(s41*(s14/s44)));
	t12 = (s12-(s42*(s14/s44)));
	t13 = (s13-(s43*(s14/s44)));
	t14 = (s14/s44);
	t15 = (s15-(s45*(s14/s44)));
	
	t21 = (s21-(s41*(s24/s44)));
	t22 = (s22-(s42*(s24/s44)));
	t23 = (s23-(s43*(s24/s44)));
	t24 = (s24/s44);
	t25 = (s25-(s45*(s24/s44)));
	
	t31 = (s31-(s41*(s34/s44)));
	t32 = (s32-(s42*(s34/s44)));
	t33 = (s33-(s43*(s34/s44)));
	t34 = (s34/s44);
	t35 = (s35-(s45*(s34/s44)));
	
	t41 = -(s41/s44);
	t42 = -(s42/s44);
	t43 = -(s43/s44);
	t44 = (1/s44);
	t45 = -(s45/s44);
	
	t51 = (s51-(s41*(s54/s44)));
	t52 = (s52-(s42*(s54/s44)));
	t53 = (s53-(s43*(s54/s44)));
	t54 = (s54/s44);
	t55 = (s55-(s45*(s54/s44)));
	
	u11 = (t11-(t51*(t15/t55)));
	u12 = (t12-(t52*(t15/t55)));
	u13 = (t13-(t53*(t15/t55)));
	u14 = (t14-(t54*(t15/t55)));
	u15 = (t15/t55);
	
	u21 = (t21-(t51*(t25/t55)));
	u22 = (t22-(t52*(t25/t55)));
	u23 = (t23-(t53*(t25/t55)));
	u24 = (t24-(t54*(t25/t55)));
	u25 = (t25/t55);
	
	u31 = (t31-(t51*(t35/t55)));
	u32 = (t32-(t52*(t35/t55)));
	u33 = (t33-(t53*(t35/t55)));
	u34 = (t34-(t54*(t35/t55)));
	u35 = (t35/t55);
	
	u41 = (t41-(t51*(t45/t55)));
	u42 = (t42-(t52*(t45/t55)));
	u43 = (t43-(t53*(t45/t55)));
	u44 = (t44-(t54*(t45/t55)));
	u45 = (t45/t55);	
	
	u51 = -(t51/t55);
	u52 = -(t52/t55);
	u53 = -(t53/t55);
	u54 = -(t54/t55);
	u55 = (1/t55);	

/*GAUS ALGORITMASI*/ 

	GA11 = -1;
	GA12 = -(A[0][1]/A[0][0]);
	GA13 = -(A[0][2]/A[0][0]);
	GA14 = -(A[0][3]/A[0][0]);	
	GA15 = -(A[0][4]/A[0][0]);
	GB1  = (B[0][0]/A[0][0]);
	
	GA211= 0;
	GA212= (A[1][1]-(A[0][1]*A[1][0])/A[0][0]);
	GA213= (A[1][2]-(A[0][2]*A[1][0])/A[0][0]);	
	GA214= (A[1][3]-(A[0][3]*A[1][0])/A[0][0]);
	GA215= (A[1][4]-(A[0][4]*A[1][0])/A[0][0]);
	GB21 = (-B[0][1]+(B[0][0]*A[1][0])/A[0][0]);
	
	GA221= 0;
	GA222= -1;
	GA223= -(GA213/GA212);
	GA224= -(GA214/GA212);	
	GA225= -(GA215/GA212);
	GB22 = -(GB21/GA212);
	
	GA311= 0;
	GA312= (A[2][1]-(A[0][1]*A[2][0])/A[0][0]);
	GA313= (A[2][2]-(A[0][2]*A[2][0])/A[0][0]);
	GA314= (A[2][3]-(A[0][3]*A[2][0])/A[0][0]);	
	GA315= (A[2][4]-(A[0][4]*A[2][0])/A[0][0]);
	GB31= (-B[0][2]+(B[0][0]*A[2][0])/A[0][0]);
	
	GA321= 0;
	GA322= 0;
	GA323= (GA313-(GA312*GA213)/GA212);
	GA324= (GA314-(GA312*GA214)/GA212);
	GA325= (GA315-(GA312*GA215)/GA212);
	GB32 = (GB31-(GA312*GB21)/GA212);
	
	GA331= 0;
	GA332= 0;
	GA333= -1;
	GA334= -(GA324/GA323);
	GA335= -(GA325/GA323);
	GB33 = (-GB32/GA323);
	
	GA411= 0;
	GA412= (A[3][1]-(A[0][1]*A[3][0])/A[0][0]);
	GA413= (A[3][2]-(A[0][2]*A[3][0])/A[0][0]);
	GA414= (A[3][3]-(A[0][3]*A[3][0])/A[0][0]);	
	GA415= (A[3][4]-(A[0][4]*A[3][0])/A[0][0]);
	GB41=  (-B[0][3]-(-B[0][0]*A[3][0])/A[0][0]);
	
	GA421= 0;
	GA422= 0;
	GA423= (GA413-(GA412*GA313)/GA312);
	GA424= (GA414-(GA412*GA314)/GA312);
	GA425= (GA415-(GA412*GA315)/GA312);
	GB42 = (GB41-(GA412*GB31)/GA312);
		
	GA431= 0;
	GA432= 0;
	GA433= 0;
	GA434= (GA424-(GA423*GA324)/GA323);
	GA435= (GA425-(GA423*GA325)/GA323);
	GB43 = (GB42-(GA423*GB32)/GA323);		
	
	GA441= 0;
	GA442= 0;
	GA443= 0;
	GA444= -1;
	GA445= (-GA435/GA434);
	GB44 = (-GB43/GA434);
	
	GA511= 0;
	GA512= (A[4][1]-(A[0][1]*A[4][0])/A[0][0]);
	GA513= (A[4][2]-(A[0][2]*A[4][0])/A[0][0]);
	GA514= (A[4][3]-(A[0][3]*A[4][0])/A[0][0]);	
	GA515= (A[4][4]-(A[0][4]*A[4][0])/A[0][0]);
	GB51= (-B[0][4]-(-B[0][0]*A[4][0])/A[0][0]);	
	
	GA521= 0;
	GA522= 0;
	GA523= (GA513-(GA512*GA413)/GA412);
	GA524= (GA514-(GA512*GA414)/GA412);
	GA525= (GA515-(GA512*GA415)/GA412);
	GB52 = (GB51-(GA512*GB41)/GA412);

	GA531= 0;
	GA532= 0;
	GA533= 0;
	GA534= (GA524-(GA523*GA424)/GA423);
	GA535= (GA525-(GA523*GA425)/GA423);
	GB53 = (GB52-(GA523*GB42)/GA423);	

	GA541= 0;
	GA542= 0;
	GA543= 0;
	GA544= 0;
	GA545= (GA535-(GA534*GA435)/GA434);
	GB54 = (GB53-(GA534*GB43)/GA434);
	
	GA551= 0;
	GA552= 0;
	GA553= 0;
	GA554= 0;
	GA555= -1;
	GB55 = -(GB54/GA545);

X5=(GB55);
X4=(GA445*X5+GB44);
X3=(GA334*X4+GA335*X5+GB33);
X2=(GA223*X3+GA224*X4+GA225*X5+GB22);
X1=(GA12*X2+GA13*X3+GA14*X4+GA15*X5+GB1);

/* MODERNLESTIRILMIS GAUS ALGORITMASINA GORE X VEKTORLER */
y11=-1;
y12=-b12/b11;
y13=-b13/b11;
y14=-b14/b11;
y15=-b15/b11;
yb1=(-ATB1/-b11);

y20=0;
y21=(b22+(b12*y12));
y22=(b23+(b12*y13));
y23=(b24+(b12*y14));
y24=(b25+(b12*y15));
yb2=(-ATB2+(b12*yb1));

y31=-1;
y32=(-y22/y21);
y33=(-y23/y21);
y34=(-y24/y21);
yb3=(-yb2/y21);

y41=(b33+b13*y13-y22*y22/y21);
y42=(b34+b13*y14+y22*y33);
y43=(b35+b13*y15+y22*y34);
yb4=(-ATB3+b13*yb1+y22*yb3);

y51=-1;
y52=(-y42/y41);
y53=(-y43/y41);
yb5=(-yb4/y41);

y61=(b44+b14*y14+y23*y33+y42*y52);
y62=(b45+b14*y15+y23*y34+y42*y53);
yb6=(-ATB4+b14*yb1+y23*yb3+y42*yb5);

y71=(-1);
y72=(-y62/y61);
yb7=(-yb6/y61);

y81=(b55+b15*y15+y24*y34+y43*y53+y62*y72);
yb8=(-ATB5+b15*yb1+y24*yb3+y43*yb5+y62*yb7);

y91=(-1);
y92=(-yb8/y81);


xx5=y92;
xx4=(xx5*y72+yb7);
xx3=(y52*xx4+y53*xx5+yb5);
xx2=(y32*xx3+y33*xx4+y34*xx5+yb3);
xx1=(y12*xx2+y13*xx3+y14*xx4+y15*xx5+yb1);

/*cout<< "CHOLESKY YONTEMI ILE X VEKTORLERI" << endl ;*/
z11 = sqrt(b11);
z12 = (b12/z11);
z13 = (b13/z11);
z14 = (b14/z11);
z15 = (b15/z11);
zb1 = (-ATB1/z11);
z21 = (sqrt(y21));
z22 = (y22/z21);
z23 = (y23/z21);
z24 = (y24/z21);
zb2 = (yb2/z21);
z31 = (sqrt(y41));
z32 = (y42/z31);
z33 = (y43/z31);
zb3 = (yb4/z31);
z41 = (sqrt(y61));
z42 = (y62/z41);
zb4 = (yb6/z41);
z51 =(sqrt(y81));
zb5 =(yb8/z51);

xxx5=(-zb5/z51);
xxx4=(-zb4-z42*xxx5)/z41;
xxx3=(-zb3-z33*xxx5-z32*xxx4)/z31;
xxx2=(-zb2-z24*xxx5-z23*xxx4-z22*xxx3)/z21;
xxx1=(-zb1-z15*xxx5-z14*xxx4-z13*xxx3-z12*xxx2)/z11;



	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
	
}}
	for(i=0;i<5;i++){
    for(j=0;j<5;j++){
    if(j>i)
{
    ratio = Akl[j][i]/Akl[i][i];
    	for(k = 0; k < 5; k++){
            Akl[j][k] -= ratio * Akl[i][k];
}}}}
    det = 1;
        for(i = 0; i < 5; i++)
        	det *= Akl[i][i];

	kh = (abs(det)/(alfa1*alfa2*alfa3*alfa4*alfa5));
	
	

	for (int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i==j)
			birim[i][j]=1;
			else
			birim[i][j]=0;
		}
	}
	for (int i=0;i<5;i++){
		dd=GA[i][i];
		for(int j=0;j<5;j++){
			GA[i][j]=GA[i][j]/dd;
			birim[i][j]=birim[i][j]/dd;
		}
		for(int x=0;x<5;x++){
			if(x!=i){
				kk=GA[x][i];
				for(int j=0;j<5;j++){
					GA[x][j]=GA[x][j]-(GA[i][j]*kk);
					birim[x][j]=birim[x][j]-(birim[i][j]*kk);
				}
			}
		}
	}

	
	
	while(1==1){
	cout<< "##########################################################################" << endl ;
	cout<< "##  A,B MATRISINI GORMEK ICIN 0 BAS   	   	             		##" << endl ;	
	cout<< "##  A MATRISININ DETERMINATI ICIN 1 BAS 	              		##" << endl ;
	cout<< "##  ATA MATRISININ IZINI ICIN 2 BAS	 	             		##" << endl ;
	cout<< "##  A MATRISININ SATIR NORMLARINI ICIN 3 BAS	  	      		##" << endl ;
	cout<< "##  A MATRISININ SUTUN NORMLARINI ICIN 4 BAS		      		##" << endl ;
	cout<< "##  A MATRISININ OKLID NORMUNU (N(A)) ICIN 5 BAS	      		##" << endl ;
	cout<< "##  N(A) = (iz(ATA))^2 SAGLAMASI ICIN 6 BAS	   	     		##" << endl ;		
	cout<< "##  A MATRISINI OKLID NORMUNA GORE NORMLASTIRMA ICIN 7 BAS   		##" << endl ;
	cout<< "##  A MATRISININ HADAMARD SARTI SAYISI ICIN 8 BAS            		##" << endl ;
	cout<< "##  A MATRISININ PIVOTLAMA YONTEMINE GORE TERSI ICIN 9 BAS	    	##" << endl ;
	cout<< "##  GAUS YONTEMI ILE A MATRISININ TERSI	 10 BAS 	   	    	##" << endl ;	
	cout<< "##  GAUS ALGORITMASINA GORE X VEKTORLERI ICIN 11 BAS 	   	    	##" << endl ;
	cout<< "##  MODERNLESTIRILMIS GAUS ALGORITMASINA GORE X VEKTORLERI ICIN 12 BAS	##" << endl ;	
	cout<< "##  CHOLESKY YONTEMI ILE X VEKTORLERI ICIN 13 BAS  			##" << endl ;	
	cout<< "##########################################################################" << endl ;
	cin>>sayi;
	cout<<"\n";
		if(sayi==0){
	cout<< "##########################################################################" << endl ;
	cout<<"A MATRISI\n";
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<A[i][j]<<"\t";	
				}
					cout<<"\n";			
	}
	cout<< "##########################################################################" << endl ;
	cout<<"B MATRISI\n";
		for(i=0;i<1;i++){
			for(j=0;j<5;j++){
				cout<<B[i][j]<<"\t";	
					}
						cout<<"\n";
	}
	cout<< "##########################################################################" << endl ;						
	}
		if(sayi==1){
	cout<< "##########################################################################" << endl ;	
                cout << "A MATRISININ DETERMINANTI :\n";
                    cout << det;
                    cout<<"\n";       
	cout<< "##########################################################################" << endl ;
	}
		if(sayi==2){
	cout<< "##########################################################################" << endl ;	
	cout<< "ATA MATRIS IZI" << endl ;
	cout<< "##########################################################################" << endl ;
	cout<<((b11)+(b22)+(b33)+(b44)+(b55))<< endl;	
	cout<< "##########################################################################" << endl ;
	}
		if(sayi==3){
	cout<< "##########################################################################" << endl ;	
	cout<< "SATIR NORMU" << endl ;
	cout<< "##########################################################################" << endl ;
	cout<<"N(A)1="<<  alfa1 << endl;
	cout<<"N(A)2="<<  alfa2 << endl;
	cout<<"N(A)3="<<  alfa3 << endl;
	cout<<"N(A)4="<<  alfa4 << endl;
	cout<<"N(A)5="<<  alfa5 << endl;
	cout<< "##########################################################################" << endl ;
	}
		if(sayi==4){
	cout<< "##########################################################################" << endl ;	
	cout<< "SUTUN NORMU" << endl ;
	cout<< "##########################################################################" << endl ;
	cout<<"N(A)1="<< sqrt((A[0][0]*A[0][0])+(A[1][0]*A[1][0])+(A[2][0]*A[2][0])+(A[3][0]*A[3][0])+(A[4][0]*A[4][0]))<< endl;
	cout<<"N(A)2="<< sqrt((A[0][1]*A[0][1])+(A[1][1]*A[1][1])+(A[2][1]*A[2][1])+(A[3][1]*A[3][1])+(A[4][1]*A[4][1]))<< endl;
	cout<<"N(A)3="<< sqrt((A[0][2]*A[0][2])+(A[1][2]*A[1][2])+(A[2][2]*A[2][2])+(A[3][2]*A[3][2])+(A[4][2]*A[4][2]))<< endl;
	cout<<"N(A)4="<< sqrt((A[0][3]*A[0][3])+(A[1][3]*A[1][3])+(A[2][3]*A[2][3])+(A[3][3]*A[3][3])+(A[4][3]*A[4][3]))<< endl;
	cout<<"N(A)5="<< sqrt((A[0][4]*A[0][4])+(A[1][4]*A[1][4])+(A[2][4]*A[2][4])+(A[3][4]*A[3][4])+(A[4][4]*A[4][4]))<< endl;	
	cout<< "##########################################################################" << endl ;
	}
		if(sayi==5){
	cout<< "##########################################################################" << endl ;	
	cout<< "OKLID NORMU" << endl ;	
	cout<< "##########################################################################" << endl ;
	printf("%.4f\n",c10);
	cout<< "##########################################################################" << endl ;
	}
		if(sayi==6){
	cout<< "##########################################################################" << endl ;				
cout << "ATA MATRIS IZININ KAREKOKU " << sqrt((b11)+(b22)+(b33)+(b44)+(b55)) << " ESITTIR "<< c10 << " OKLID NORMUNA"<<endl; 
	cout<< "##########################################################################" << endl ;		
	}
		if(sayi==7){
	cout<< "##########################################################################" << endl ;
	cout<< "A MATRISINI OKLID NORMUNA GORE NORMLASTIRILMIS" << endl ;
	cout<< "##########################################################################" << endl ;
	printf("%.4f %.4f %.4f %.4f %.4f\n",c11,c12,c13,c14,c15);
	printf("%.4f %.4f %.4f %.4f %.4f\n",c21,c22,c23,c24,c25);
	printf("%.4f %.4f %.4f %.4f %.4f\n",c31,c32,c33,c34,c35);	
	printf("%.4f %.4f %.4f %.4f %.4f\n",c41,c42,c43,c44,c45);
	printf("%.4f %.4f %.4f %.4f %.4f\n",c51,c52,c53,c54,c55);
	cout<< "##########################################################################" << endl ;
	}
	if(sayi==8){
	cout<< "##########################################################################" << endl ;	
	cout << "A MATRISININ HADAMARD SAYISI :\n";
		cout<< kh << endl;    
			if(kh<pow(10,-2)){
				cout<<"kararsiz"<<"\n";
}
else
{
cout<<"Kararli"<<"\n";

	cout<< "##########################################################################" << endl ;
  }	
}
	if(sayi==9){
	cout<< "##########################################################################" << endl ;
	cout<< "A MATRISININ PIVOTLAMA YONTEMINE TERSI" << endl ;
	cout<< "##########################################################################" << endl ;
	printf("% .4f %.4f  %.4f %.4f %.4f\n",u11,u12,u13,u14,u15);
	printf("% .4f  %.4f %.4f  %.4f %.4f\n",u21,u22,u23,u24,u25);
	printf("%.4f %.4f  %.4f  %.4f %.4f\n",u31,u32,u33,u34,u35);	
	printf("%.4f  %.4f %.4f  %.4f  %.4f\n",u41,u42,u43,u44,u45);
	printf("%.4f  %.4f  %.4f %.4f %.4f\n",u51,u52,u53,u54,u55);
	cout<< "##########################################################################" << endl ;
  }	 
  if(sayi==10){
  	cout<< "##########################################################################" << endl ;	
  	printf(" GAUS ALGORITMASI ILE MATRISIN TERSI: \n");
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		printf("%.4f  ",birim[i][j]);
		printf("\n");
	}
	cout<< "##########################################################################" << endl ;
}
  	if(sayi==11){
	cout<< "##########################################################################" << endl ;
cout<< "GAUS ALGORITMASINA GORE X VEKTORLERI" << endl ;
	cout<< "##########################################################################" << endl ;
printf(" %.4f  %.4f  %.4f  %.4f  %.4f   %.4f\n",A[0][0],A[0][1],A[0][2],A[0][3],A[0][4],B[0][0]);
printf("%.4f %.4f %.4f %.4f %.4f   %.4f\n",GA11,GA12,GA13,GA14,GA15,GB1);
printf(" %.4f  %.4f  %.4f  %.4f  %.4f   %.4f\n",A[1][0],A[1][1],A[1][2],A[1][3],A[1][4],B[0][1]);
printf("         %.4f  %.4f  %.4f  %.4f  %.4f\n",GA212,GA213,GA214,GA215,GB21);
printf("        %.4f %.4f %.4f %.4f   %.4f\n",GA222,GA223,GA224,GA225,GB22);
printf(" %.4f  %.4f  %.4f  %.4f  %.4f   %.4f\n",A[2][0],A[2][1],A[2][2],A[2][3],A[2][4],B[0][2]);
printf("        %.4f  %.4f  %.4f  %.4f  %.4f\n",GA312,GA313,GA314,GA315,GB31);
printf("                 %.4f  %.4f  %.4f  %.4f\n",GA323,GA324,GA325,GB32);
printf("                %.4f %.4f %.4f   %.4f\n",GA333,GA334,GA335,GB33);	
printf(" %.4f  %.4f  %.4f  %.4f  %.4f   %.4f\n",A[3][0],A[3][1],A[3][2],A[3][3],A[3][4],B[0][3]);
printf("         %.4f  %.4f  %.4f  %.4f  %.4f\n",GA412,GA413,GA414,GA415,GB41);
printf("                %.4f %.4f %.4f %.4f\n",GA423,GA424,GA425,GB42);
printf("                        %.4f %.4f   %.4f\n",GA434,GA435,GB43);
printf("                        %.4f %.4f   %.4f\n",GA444,GA445,GB44);
printf(" %.4f  %.4f  %.4f  %.4f  %.4f   %.4f\n",A[4][0],A[4][1],A[4][2],A[4][3],A[4][4],B[0][4]);
printf("        %.4f  %.4f  %.4f  %.4f  %.4f\n",GA512,GA513,GA514,GA515,GB51);
printf("                 %.4f  %.4f  %.4f  %.4f\n",GA523,GA524,GA525,GB52);
printf("                         %.4f %.4f  %.4f\n",GA534,GA535,GB53);
printf("                                %.4f   %.4f\n",GA545,GB54);
printf("                                %.4f   %.4f\n",GA555,GB55);

cout<<"X1="<< X1 << endl;
cout<<"X2="<< X2 << endl;
cout<<"X3="<< X3 << endl;
cout<<"X4="<< X4 << endl;
cout<<"X5="<< X5 << endl;
	cout<< "##########################################################################" << endl ;
  }	 
	if(sayi==12){
	cout<< "##########################################################################" << endl ;				
cout<< "MODERNLESTIRILMIS GAUS ALGORITMASINA GORE X VEKTORLER" << endl ;
	cout<< "##########################################################################" << endl ;
printf(" %.4f  %.4f  %.4f  %.4f  %.4f %.4f\n",b11,b12,b13,b14,b15,-ATB1);
printf("%.4f %.4f %.4f %.4f %.4f  %.4f\n",y11,y12,y13,y14,y15,yb1);
printf("         %.4f  %.4f  %.4f  %.4f %.4f\n",b22,b23,b24,b25,-ATB2);
printf("         %.4f  %.4f  %.4f  %.4f %.4f\n",y21,y22,y23,y24,yb2);
printf("        %.4f %.4f %.4f %.4f  %.4f\n",y31,y32,y33,y34,yb3);
printf("                 %.4f  %.4f  %.4f %.4f\n",b33,b34,b35,-ATB3);		
printf("                 %.4f  %.4f  %.4f %.4f\n",y41,y42,y43,yb4);
printf("                %.4f %.4f %.4f  %.4f\n",y51,y52,y53,yb5);
printf("                         %.4f  %.4f %.4f\n",b44,b45,-ATB4);
printf("                         %.4f  %.4f %.4f\n",y61,y62,yb6);
printf("                        %.4f %.4f  %.4f\n",y71,y72,yb7);
printf("                                 %.4f %.4f\n",b55,-ATB5);
printf("                                 %.4f %.4f\n",y81,yb8);
printf("                                %.4f  %.4f\n",y91,y92);
	
cout<<"X1="<< xx1 << endl;
cout<<"X2="<< xx2 << endl;
cout<<"X3="<< xx3 << endl;
cout<<"X4="<< xx4 << endl;
cout<<"X5="<< xx5 << endl;
cout<< "##########################################################################" << endl ;
  }	  
  if(sayi==13){
cout<< "##########################################################################" << endl ;
cout<< "CHOLESKY YONTEMI ILE X VEKTORLERI" << endl ;
cout<< "##########################################################################" << endl ;

printf(" %.4f  %.4f  %.4f  %.4f  %.4f %.4f\n",b11,b12,b13,b14,b15,-ATB1);
printf(" %.4f  %.4f  %.4f  %.4f  %.4f %.4f\n",z11,z12,z13,z14,z15,zb1);
printf("         %.4f  %.4f  %.4f  %.4f %.4f\n",b22,b23,b24,b25,-ATB2);
printf("         %.4f  %.4f  %.4f  %.4f %.4f\n",y21,y22,y23,y24,yb2);
printf("         %.4f  %.4f  %.4f  %.4f %.4f\n",z21,z22,z23,z24,zb2);
printf("                 %.4f  %.4f  %.4f %.4f\n",b33,b34,b35,-ATB3);		
printf("                 %.4f  %.4f  %.4f %.4f\n",y41,y42,y43,yb4);
printf("                 %.4f  %.4f  %.4f  %.4f\n",z31,z32,z33,zb3);
printf("                         %.4f  %.4f %.4f\n",b44,b45,-ATB4);
printf("                         %.4f  %.4f %.4f\n",y61,y62,yb6);
printf("                         %.4f  %.4f %.4f\n",z41,z42,zb4);
printf("                                 %.4f %.4f\n",b55,-ATB5);
printf("                                 %.4f %.4f\n",y81,yb8);
printf("                                 %.4f %.4f\n",z51,zb5);

cout<<"X1="<< xxx1 << endl;
cout<<"X2="<< xxx2 << endl;
cout<<"X3="<< xxx3 << endl;
cout<<"X4="<< xxx4 << endl;
cout<<"X5="<< xxx5 << endl;

cout<< "##########################################################################" << endl ;
		}
	}
}
