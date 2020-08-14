#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
int Faktoriyel(int sayi)
{
    int fc=1;
    for(int i=1;i<=sayi;i++)
    {
        fc*=i;
    }
    return fc;
}
int Permutasyon(int n,int r)
{
    return Faktoriyel(n)/Faktoriyel(n-r);
}
int Kombinasyon(int n,int r)
{
    if(n>r)
        return Permutasyon(n,r)/Faktoriyel(r);
    else
        return 1;
}
int Toplama(int sayilar[],int uzunluk)
{
    int toplam=0;
    for (int i=0;i<(uzunluk);i++)
    {
        toplam+=sayilar[i];
    }
    return toplam;
}
int Cikarma(int sayilar[],int uzunluk)
{
    int cikarma=0;
    for (int i=0;i<(uzunluk);i++)
    {
        if(i==0)
            cikarma=sayilar[i];
        else
            cikarma-=sayilar[i];
    }
    return cikarma;
}
int Carpma(int sayilar[],int uzunluk)
{
    int carpma=1;
    for (int i=0;i<(uzunluk);i++)
    {
        carpma*=sayilar[i];
    }
    return carpma;
}
double Bolme(int sayilar[],int uzunluk)
{
    double bolme=0;
    for (int i=0;i<(uzunluk);i++)
    {
        if (i==0)
            bolme=sayilar[0];
        else
            bolme/=sayilar[i];
    }
    return bolme;
}
float usAlma(int sayi,int us)
{
	return (float)pow(sayi, us);
}
double kokAlma(int x)
{
    return sqrt(x);
}
int DeterminantAl( int matrix[10][10], int n) {   
   int det = 0;
   int submatrix[10][10];
   if (n == 2)
      return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   else {
      for (int x = 0; x < n; x++) {
            int subi = 0; 
            for (int i = 1; i < n; i++) {
               int subj = 0;
               for (int j = 0; j < n; j++) {
                  if (j == x)
                  continue;
                  submatrix[subi][subj] = matrix[i][j];
                  subj++;
               }
               subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * DeterminantAl( submatrix, n - 1 ));
      }
   }
   return det;
}
double Logaritma(int taban,int deger)
{
    int snc=0;
    double islem=(double)deger;
    while(islem>1){
        islem =(double) (islem/taban);
    snc++;}
    return snc;
}
const double PI=3.1415926535897932384626433832795;
int main()
{
    while(true)
    {
        int c=0;
        cout<<"1. Bilimsel Hesaplama\n2. Standart Hesaplama\n0. CIKIS\nLutfen bir tercih seciniz : ";
        cin>>c;
        if(c==1)
        {
            bilimsel:
            int islem=0;
            cout<<"\n\t\t\t\t : BILIMSEL HESAPLAMA : "<<endl;   
            string str="1 - SIN\n2 - COS\n3 - TAN\n4 - COT\n5 - TAM DEGER LOGARITMA\n6 - FAKTORIYEL\n7 - PERMUTASYON/KOMBINASYON\n8 - IKI MATRISIN TOPLAMI\n9 - MATRIS DETERMINANT ALMA\n0 - GERI";
            cout<<str<<"\n\t\t\t Bir islem giriniz : ";
            cin>>islem;
            switch (islem)
            {
                case 0:
                main();
                break;
                case 1:
                {
                    cout<<"\t\t\t\t: SIN :"<<endl;
                    cout<<"Sinusu alinacak aciyi derece olarak giriniz : ";
                    double derece=0;
                    cin>>derece;
                    if(derece>360)
                        derece=(double)(((int)derece)%360);
                    while(derece<-360)
                    {
                        derece+=360;
                        if(derece>=-360)
                            break;
                    }
                    if(-360<=derece<0)
                        derece=derece+360;
                     cout<<"\n\n\t\t\t SIN DEGERI : "<<sin(PI*(derece/180))<<endl;
                    goto  bilimsel;
                    break;
                }
                case 2:
                {
                  cout<<"\t\t\t\t: COS :"<<endl;
                    cout<<"Kosinusu alinacak aciyi derece olarak giriniz : ";
                    double derece=0;
                    cin>>derece;
                    if(derece>360)
                        derece=(double)(((int)derece)%360);
                    while(derece<-360)
                    {
                        derece+=360;
                        if(derece>=-360)
                            break;
                    }
                    if(-360<=derece<0)
                        derece=derece+360;
                     cout<<"\n\n\t\t\t COS DEGERI : "<<cos(PI*(derece/180))<<endl;
                    goto  bilimsel;
                    break;   
                }
                case 3:
                {
                     cout<<"\t\t\t\t: TAN :"<<endl;
                    cout<<"Tanjantı alinacak aciyi derece olarak giriniz : ";
                    double derece=0;
                    cin>>derece;
                    if(derece>360)
                        derece=(double)(((int)derece)%360);
                    while(derece<-360)
                    {
                        derece+=360;
                        if(derece>=-360)
                            break;
                    }
                    if(-360<=derece<0)
                        derece=derece+360;
                     cout<<"\n\n\t\t\t TAN DEGERI : "<<tan(PI*(derece/180))<<endl;
                    goto  bilimsel;
                    break;
                }
                case 4:
                {
                     cout<<"\t\t\t\t: COT :"<<endl;
                    cout<<"Kotanjantı alinacak aciyi derece olarak giriniz : ";
                    double derece=0;
                    cin>>derece;
                    if(derece>360)
                        derece=(double)(((int)derece)%360);
                    while(derece<-360)
                    {
                        derece+=360;
                        if(derece>=-360)
                            break;
                    }
                    if(-360<=derece<0)
                        derece=derece+360;
                     cout<<"\n\n\t\t\t COT DEGERI : "<<1/tan(PI*(derece/180))<<endl;
                    goto  bilimsel;
                    break;
                }
                case 5:
                {
                    cout<<"\t\t\t\t: LOGARITMA |TAM DEGER ICIN| :"<<endl;
                    cout<<"Logaritma taban degerini giriniz : ";   
                    int deger,taban=0;
                    cin>>taban;
                    cout<<"Logaritma degerini giriniz : ";
                    cin>>deger;
                    if(taban<=0 || taban==1)
                    {
                        taban=2;
                        cout<<"TABAN DEGERI 2 OLARAK DEGISTIRILDI!! TABAN DEGERI 0'DAN KUCUK VEYA ESIT OLAMAZ ya da 1 OLAMAZ"<<endl;
                        
                    }
                    if (deger<0)
                        deger=0;
                     cout<<"\n\n\t\t\t TAM LOGARITMA  DEGERI : "<<Logaritma(taban,deger)<<endl;
                    goto bilimsel;
                    break;
                }
                case 6:
                {
                     cout<<"\t\t\t\t: FAKTORIYEL :"<<endl;
                    cout<<"Faktoriyeli hesaplanacak degeri giriniz : ";   
                    int deger=0;
                    cin>>deger;
                    if (deger<=0)
                        deger=1;
                    cout<<"\n\n\t\t\t FAKTORIYEL  DEGERI : "<<Faktoriyel(deger)<<endl;
                    goto bilimsel;
                    break;
                }
                case 7:
                {
                    percom:
                    char tercih='q';
                     cout<<"\t\t\t\t: PERMUTASYON/KOMBINASYON :"<<endl;
                    cout<<"P - PERMUTASYON\nC - KOMBINASYON\nG - GERI\nLUTFEN SECIM YAPINIZ : ";
                    cin>>tercih;
                    if(tercih=='P' || tercih=='p')
                    {
                        int n,r;
                        cout<<"PERMUTASYON//  'n' degerini giriniz : ";
                        cin>>n;
                        cout<<"PERMUTASYON//  'r' degerini giriniz : ";
                        cin>>r;
                        if (n<=r)
                            n=r+1;
                        cout<<"\n\n\t\t\t PERMUTASYON  DEGERI : "<<Permutasyon(n,r)<<endl;
                        goto percom;
                    }
                    else if(tercih=='C'||tercih=='c')
                    {
                        int n,r;
                        cout<<"KOMBINASYON//  'n' degerini giriniz : ";
                        cin>>n;
                        cout<<"KOMBINASYON//  'r' degerini giriniz : ";
                        cin>>r;
                        cout<<"\n\n\t\t\t KOMBINASYON  DEGERI : "<<Kombinasyon(n,r)<<endl;
                        goto percom;
                    }
                    else if(tercih=='G' || tercih=='g')
                    {
                        goto bilimsel;
                    }
                    else
                    {
                         cout<<"\n\n\t\t\t!!!! Yanlis bir tercih yaptiniz !!!!\n\n\n";
                    goto percom;
                    }
                     getch();
                    goto bilimsel;
                    break;
                }
                case 8:
                {
                    int x,y;
                    cout<<"\t\t\t\t: IKI MATRISIN TOPLAMI :"<<endl;
                    cout<<"Matris satir sayisini giriniz : ";   
                    cin>>x;
                    cout<<"Matris sutun sayisini giriniz : ";
                    cin>>y;
                    if (x<=0)
                        x=1;
                    if(y<=0)
                        y=1;
                    int m1[x][y],m2[x][y];
                    int nMatris[x][y];
                    for(int i=0;i<x;i++)
                    {
                        for (int j=0;j<y;j++)
                        {
                            cout<<"1. Matrisin "<<i+1<<" x "<<j+1<<" degerini giriniz : ";
                            cin>>m1[i][j];
                            cout<<"2. Matrisin "<<i+1<<" x "<<j+1<<" degerini giriniz : ";
                            cin>>m2[i][j];
                            nMatris[i][j]=m1[i][j]+m2[i][j];
                        }
                    }
                    cout<<"\t\t\tMATRISLERIN TOPLAMI\n\t\t\t--------------------------"<<endl;
                    for(int m =0 ;m<x;m++)
                    {
                        cout<<"\n\t\t\t";
                        for(int n=0;n<y;n++)
                        {
                          cout<<nMatris[m][n]<<" ";
                        }
                    }
                    goto bilimsel;
                    break;
                }
                case 9:
                {
                    int x=0;
                    cout<<"\t\t\t\t: MATRISIN DETERMINANTINI ALMA :"<<endl;
                    cout<<"Matris boyutunu giriniz giriniz : ";   
                    cin>>x;
                    if (x<=0)
                        x=1;
                    int t[10][10];
                    for(int i=0;i<x;i++)
                    {
                        for(int j=0;j<x;j++)
                        {
                            cout<<"Matrisin "<<i+1<<" x "<<j+1<<" degerini giriniz : ";
                            cin>>t[i][j];
                        }
                    }
                    cout<<"\t\t\t  DETERMINANT DEGERI : "<<DeterminantAl(t,x);
                    goto bilimsel;
                    break;
                }
                default:
                    cout<<"\n\n\t\t\t!!!! Yanlis bir tercih yaptiniz !!!!\n\n\n";
                    goto bilimsel;
                    break;
            }
           
            
            break;
            getch();
        }
        else if(c==2)
        {
            standart:
            int islem=0;
            cout<<"\n\t\t\t\t : STANDART HESAPLAMA : "<<endl;   
            string str="1 - TOPLAMA\n2 - CARPMA\n3 - BOLME\n4 - CIKARMA\n5 - KARE ALMA\n6 - KAREKOK ALMA\n7 - US ALMA\n8 - MOD\n9 - DERECEYI RADAYAN YAPMA\n0 - GERI";
            cout<<str<<"\n\t\t\t Bir islem giriniz : ";
            cin>>islem;
            switch (islem)
            {
                case 0:
                    main();
                    break;
                case 1:
                {
                    cout<<"\t\t\t\t: TOPLAMA :"<<endl;
                    cout<<"Toplanacak sayi adedini giriniz : ";
                    int aded=1;
                    cin>>aded;
                    if(aded<=0)
                        aded=1;
                    int toplam[aded]={0};
                    for(int i=0;i<aded;i++)
                    {
                        cout<<i+1<<". degeri giriniz : ";
                        cin>>toplam[i];
                    }
                    cout<<"\n\n\t\t\t TOPLAM DEGER : "<<Toplama(toplam,aded)<<endl;
                    goto standart;
                    break;
                }
                case 2:
                {
                    cout<<"\t\t\t\t: CARPMA :"<<endl;
                    cout<<"Carpilacak sayi adedini giriniz : ";
                    int aded=1;
                    cin>>aded;
                    if(aded<=0)
                        aded=1;
                    int carpma[aded]={0};
                    for(int i=0;i<aded;i++)
                    {
                        cout<<i+1<<". degeri giriniz : ";
                        cin>>carpma[i];
                    }
                    cout<<"\n\n\t\t\t CARPIM DEGER : "<<Carpma(carpma,aded)<<endl;
                    goto standart;
                    break;
                }
                case 3:
                {
                    cout<<"\t\t\t\t: BOLME |ILK SAYIDAN BOLUNUR| :"<<endl;
                    cout<<"Bolunecek sayi adedini giriniz : ";
                    int aded=1;
                    cin>>aded;
                    if(aded<=0)
                        aded=1;
                    int bolum[aded]={0};
                    for(int i=0;i<aded;i++)
                    {
                        cout<<i+1<<". degeri giriniz : ";
                        cin>>bolum[i];
                    }
                    cout<<"\n\n\t\t\t BOLUM DEGER : "<<Bolme(bolum,aded)<<endl;
                    goto standart;
                    break;
                    break;
                }
                case 4:
                {
                    cout<<"\t\t\t\t: CIKARMA |ILK SAYIDAN CIKARILIR| :"<<endl;
                    cout<<"Cikarilacak sayi adedini giriniz : ";
                    int aded=1;
                    cin>>aded;
                    if(aded<=0)
                        aded=1;
                    int cikar[aded]={0};
                    for(int i=0;i<aded;i++)
                    {
                        cout<<i+1<<". degeri giriniz : ";
                        cin>>cikar[i];
                    }
                    cout<<"\n\n\t\t\t CIKARMA DEGER : "<<Cikarma(cikar,aded)<<endl;
                    goto standart;
                    break;
                    break;
                    
                }
                case 5:
                {
                    cout<<"\t\t\t\t: KARE ALMA :"<<endl;
                    cout<<"Karesi alinacak sayi : ";
                    int sayi=0;
                    cin>>sayi;
                    cout<<"\n\t\t\t"<<sayi<<" KARESI : "<<usAlma(sayi,2)<<endl;
                    goto standart;
                    break;
                }
                case 6:
                {
                    cout<<"\t\t\t\t: KAREKOK :"<<endl;
                    cout<<"Karekoku alinacak sayiyi giriniz : ";
                    int sayi=0;
                    cin>>sayi;
                    if(sayi<0)
                        sayi=0;
                    cout<<"\n\t\t\t"<<sayi<<" KAREKOKU : "<<kokAlma(sayi)<<endl;
                    goto standart;
                    break;
                    
                }
                case 7:
                {
                    cout<<"\t\t\t\t: US ALMA :"<<endl;
                    int sayi,us=0;
                    cout<<"Ussu alinacak sayiyi giriniz : ";
                    cin>>sayi;
                    cout<<"Us degerini giriniz : ";
                    cin>>us;
                    cout<<"\n\t\t\t US ALMA SONUCU : "<<usAlma(sayi,us);
                    goto standart;
                    break;
                }
                case 8:
                {
                    cout<<"\t\t\t\t: MOD :"<<endl;
                    int sayi,mod;
                    cout<<"Modu alinacak sayiyi giriniz : ";
                    cin>>sayi;
                    cout<<"Modu degerini giriniz : ";
                    cin>>mod;
                    if(mod<=0){
                        mod=2;
                    cout<<"MOD 2 olarak degistirildi. MOD 0'dan kucuk veya esit olamaz"<<endl;}
                    
                    cout<<"\n\t\t\t MOD ALMA SONUCU : "<<sayi%mod;
                    goto standart;
                    break;
                    
                }
                case 9:
                {
                    cout<<"\t\t\t\t: DERECEYI RADYAN YAPMA :"<<endl;
                    cout<<"Dereceyi giriniz : ";
                    double derece=0;
                    cin>>derece;
                    if(derece>360)
                        {int A=((int)derece)%360;
                derece=A;}
                   while(derece<-360)
                    {
                        derece+=360;
                        if(derece>=-360)
                            break;
                    }
                    if(-360<=derece<0)
                        derece=derece+360;
                    cout<<"\n\t\t\t RADYAN DEGERI : "<<PI*(derece/180);
                    goto standart;
                    break;
                    
                }
                default:
                    cout<<"\n\n\t\t\t!!!! Yanlis bir tercih yaptiniz !!!!\n\n\n";
                    goto standart;
                    break;
                getch();
            }
        break;
        }
        else if(c==0)
        {
            exit(1);
        }
        else 
        {
            cout<<"\n\n\t\t\t!!!! Yanlis bir tercih yaptiniz !!!!\n\n\n";
            continue;
        }
        
    }
    return 0;
}
