#include <iostream>

using namespace std;

int main()
{


    int espacio=10;

    for (int i=0;i<=6;){
        char letra='A';
        for(int le=0;le<=i;le++){
            cout<<letra;
            letra++;
        }
            for(int k=0;k<=espacio;k++){
            cout<<" ";
        }
        letra='A'+i;
        espacio=espacio-2;
        for(int le2=0;le2<=i;le2++){
            if(letra!='G'){
                 cout<<letra;
                 letra=letra-1;
            }
            else{
                letra=letra-1;

            }



        }
        cout<<endl;
      i++;
    }



    espacio=10;

    for (int i=0;i<=6;){
        char letra='A';
        for(int le=0;le<=i;le++){
            cout<<letra;
            letra++;
        }
            for(int k=0;k<=espacio;k++){
            cout<<" ";
        }
        letra='A'+i;
        espacio=espacio-2;
        for(int le2=0;le2<=i;le2++){
            if(letra!='G'){
                 cout<<letra;
                 letra=letra-1;
            }
            else{
                letra=letra-1;

            }



        }
        cout<<endl;
      i++;
    }


    espacio=0;
    for(int i=5;i>=0;i--){
    char letra = 'A';
     for (int le=0;le<=i;le++){
         cout<<letra;
         letra=letra+1;
     }

     for(int k=0;k<=espacio;k++){
     cout<<" ";
        }
     espacio=espacio+2;
     if(espacio>12) break;
     letra=letra-1;
     for(int le2=0;le2<=i;le2++){
        cout<<letra;
            letra=letra-1;

     }

    cout<<endl;
    }


  cout<<endl;
  cout<<endl;
  cout<<endl;


  int entero,decimal,suma=0;
  cout<<"Por favor ingrese un numero entero"<<endl;
  cin>>entero;

  // decimal=entero%10; //permite tomar la parte decimal de una division
  // entero=entero/10;  // permite tomar la parte entera de una division

  while(entero!=0){
      decimal=entero%10;
      entero=entero/10;

      for(int i=1;i<=decimal;i++){
          int total;
          if(i==1){
              total=decimal*decimal;
          }
          else{
              total=total*decimal;
          }

          if(i==decimal){
              suma=suma+total;
          }
      }


  }

  cout<<"El resultado es : "<<suma<<endl;








    return 0;
}
