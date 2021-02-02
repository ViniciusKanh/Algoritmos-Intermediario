/***

Programa desenvolvido por Vinicius de Souza Santos
na data de 28/12/2020
Descricao: Algoritmo em C++ que tem a funcao semelhante a de um jogo Popular chamado: "JOGO DA FORCA"
 */


#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <new>
#include <time.h>

using namespace std;

void limpatela(){
  system("clear");
}

string retornapalavraaleatoria(){

string palavras [] = {"abacaxi","manga","morango"};

int indicealeatorio =rand()%3;


return palavras[indicealeatorio];

}

string palavramascarada(string palavra, int tamanhopalavra){

int cont =0;
string palavracommascara;

while(cont < tamanhopalavra){
  palavracommascara += "_";
  cont++;
}

return palavracommascara;
}

void exibestatus(string palavracommascara,string letraarriscada, int tamanhopalavra, int tentativasrestantes,string mensagem){
 cout<<mensagem<<"\n";
 cout<<"\n A Palavra : "<<palavracommascara<<" \nTamanho: "<<tamanhopalavra;
 cout<<"\nTentativas restante: "<<tentativasrestantes;


 cout<<"\n Letras arriscada: ";

 int cont=0;
 for(cont=0; cont< letraarriscada.size();cont++){
 cout<<letraarriscada[cont]<<" , ";
 

 }
  
}

int jogar(int numerojogador){
  
  string palavra;
  
  if (numerojogador == 1){
    
    palavra = retornapalavraaleatoria();
  }
else {
  
   cout<<"Digite uma Palavra: \n";
   cin>>palavra;
  
}

int tamanhopalavra = palavra.size();


string palavracommascara =palavramascarada(palavra, tamanhopalavra);

int tentativas=0,maxtentativas=8;
int cont=0,opcao;
char letra;
string letrajaarriscada;
string mensagem="Bem Vindo ao jogo!";
bool jaDigitouLetra=false,acertouLetra = false;    ;

while(palavra!=palavracommascara && maxtentativas-tentativas>0){
 limpatela();
  exibestatus(palavracommascara,letrajaarriscada,tamanhopalavra, maxtentativas-tentativas,mensagem);

  cout<<"\t\nDigite uma Letra: ";
  cin>>letra;

  for(cont=0;cont<tentativas;cont++){

    if (letrajaarriscada[cont]==letra){

        mensagem="\t\n\tEssa letra ja foi digitada\n\t";
         jaDigitouLetra=true;

    }

  }

    if (jaDigitouLetra==false){
      
      mensagem="\t\n\tParabens vc acertou uma letra!\n\t";
      
      letrajaarriscada+=tolower(letra);

  for(cont=0;cont<tamanhopalavra;cont++){
      
      if(palavra[cont]==tolower(letra)){

    palavracommascara[cont]=palavra[cont];
    
     acertouLetra = true;


      }
    

  }
  
  if(acertouLetra == false){

                mensagem = "Voce errou uma letra!";

            }else{

                mensagem = "Voce acertou uma letra!";

            }

  tentativas++;

    } 
  
         
        jaDigitouLetra = false;
        acertouLetra = false;

}


if (palavra == palavracommascara){

limpatela();

cout<<"                                           \n";
cout<<"    ╔═╗╔═╗╦═╗╔═╗╔╗ ╔╗╔╔═╗  ╦  ╦╔═╗╔═╗╔═╗   \n";
cout<<"    ╠═╝╠═╣╠╦╝╠═╣╠╩╗║║║╚═╗  ╚╗╔╝║ ║║  ║╣    \n";
cout<<"    ╩  ╩ ╩╩╚═╩ ╩╚═╝╝╚╝╚═╝   ╚╝ ╚═╝╚═╝╚═╝   \n";
cout<<"          ╔═╗╔═╗╔╗╔╦ ╦╔═╗╦ ╦               \n";
cout<<"          ║ ╦╠═╣║║║╠═╣║ ║║ ║               \n";
cout<<"          ╚═╝╩ ╩╝╚╝╩ ╩╚═╝╚═╝               \n";
cout<<"                                           \n";


cout<<" ████████████████████████████████████████\n";
cout<<" ████████████████████████████████████████\n";
cout<<" ██████▀░░░░░░░░▀████████▀▀░░░░░░░▀██████\n";
cout<<" ████▀░░░░░░░░░░░░▀████▀░░░░░░░░░░░░▀████\n";
cout<<" ██▀░░░░░░░░░░░░░░░░▀▀░░░░░░░░░░░░░░░░▀██\n";
cout<<" ██░░░░░░░░░░░░░░░░░░░▄▄░░░░░░░░░░░░░░░██\n";
cout<<" ██░░░░░░░░░░░░░░░░░░█░█░░░░░░░░░░░░░░░██\n";
cout<<" ██░░░░░░░░░░░░░░░░░▄▀░█░░░░░░░░░░░░░░░██\n";
cout<<" ██░░░░░░░░░░████▄▄▄▀░░▀▀▀▀▄░░░░░░░░░░░██\n";
cout<<" ██▄░░░░░░░░░████░░░░░░░░░░█░░░░░░░░░░▄██\n";
cout<<" ████▄░░░░░░░████░░░░░░░░░░█░░░░░░░░▄████\n";
cout<<" ██████▄░░░░░████▄▄▄░░░░░░░█░░░░░░▄██████\n";
cout<<" ████████▄░░░▀▀▀▀░░░▀▀▀▀▀▀▀░░░░░▄████████\n";
cout<<" ██████████▄░░░░░░░░░░░░░░░░░░▄██████████\n";
cout<<" ████████████▄░░░░░░░░░░░░░░▄████████████\n";
cout<<" ██████████████▄░░░░░░░░░░▄██████████████\n";
cout<<" ████████████████▄░░░░░░▄████████████████\n";
cout<<" ██████████████████▄▄▄▄██████████████████\n";
cout<<" ████████████████████████████████████████\n";
cout<<" ████████████████████████████████████████\n\n";

        cout << "\nDeseja reiniciar?";
        cout << "\n1-Sim";
        cout << "\n2-Nao \n ";
        cin >> opcao;
        return opcao;
        limpatela();

}

else {

  limpatela();


 cout<<"                                 \n";
 cout<<"     ╔═╗╔═╗╔╦╗╔═╗  ╔═╗╦  ╦╔═╗╦═╗ \n";
 cout<<"     ║ ╦╠═╣║║║║╣   ║ ║╚╗╔╝║╣ ╠╦╝ \n";
 cout<<"     ╚═╝╩ ╩╩ ╩╚═╝  ╚═╝ ╚╝ ╚═╝╩╚═ \n";
 cout<<"                                 \n";

cout<<" ▒▒▒▒▒▒▒▒▒▒▒▄▄▄▄░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▒▒▒▒▒▒▒▒▄██████▒▒▒▒▒▄▄▄█▄▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▒▒▒▒▒▒▄██▀░░▀██▄▒▒▒▒████████▄▒▒▒▒▒▒\n";
cout<<" ▒▒▒▒▒▒███░░░░░░██▒▒▒▒▒▒█▀▀▀▀▀██▄▄▒▒▒\n";
cout<<" ▒▒▒▒▒▄██▌░░░░░░░██▒▒▒▒▐▌▒▒▒▒▒▒▒▒▀█▄▒\n";
cout<<" ▒▒▒▒▒███░░▐█░█▌░██▒▒▒▒█▌▒▒▒▒▒▒▒▒▒▒▀▌\n";
cout<<" ▒▒▒▒████░▐█▌░▐█▌██▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▒▒▐████░▐░░░░░▌██▒▒▒█▌▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▒▒▒████░░░▄█░░░██▒▒▐█▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▒▒▒████░░░██░░██▌▒▒█▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▒▒▒████▌░▐█░░███▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▒▒▒▐████░░▌░███▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▒▒▒▒████░░░███▒▒▒▒█▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▒▒██████▌░████▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒▐████████████▒▒███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ▒█████████████▄████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ██████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ██████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" █████████████████▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" █████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<" ████████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
        cout << "\n\nDeseja reiniciar?";
        cout << "\n1-Sim";
        cout << "\n2-Nao \n";
        cin >> opcao;
        return opcao;
        limpatela();
    }
 


}




void MenuInicial(){

    int opcao = 0;
  
while(opcao < 1 || opcao < 4){
  
cout<<"                                           \n";
cout<<"      ╦╔═╗╔═╗╔═╗  ╔╦╗╔═╗  ╔═╗╔═╗╦═╗╔═╗╔═╗  \n";
cout<<"      ║║ ║║ ╦║ ║   ║║╠═╣  ╠╣ ║ ║╠╦╝║  ╠═╣  \n" ;
cout<<"     ╚╝╚═╝╚═╝╚═╝  ═╩╝╩ ╩  ╚  ╚═╝╩╚═╚═╝╩ ╩  \n";
cout<<"                                           \n\n";

cout<<"              ▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▄        \n";
cout<<"             █░░░█░░░░░░░░░░▄▄░██░█       \n";
cout<<"             █░▀▀█▀▀░▄▀░▄▀░░▀▀░▄▄░█       \n";
cout<<"             █░░░▀░░░▄▄▄▄▄░░██░▀▀░█        \n";
cout<<"              ▀▄▄▄▄▄▀─────▀▄▄▄▄▄▄▀         \n\n\n";




        cout << "\t\t\t\t\t Bem vindo ao Jogo\n\t";
        cout << "\n1 - Jogar Sozinho";
        cout << "\n2 - Jogar em Dupla";
        cout << "\n3 - Sobre";
        cout << "\n4 - Sair";
        cout << "\nEscolha uma opcao e tecle ENTER: ";






        cin >> opcao;
        
         switch(opcao){
            case 1:
                if (jogar(1)==1){
                  limpatela();
                  MenuInicial();
                };
                break;
            case 2:
               if(jogar(2) == 1){
                  limpatela();
                  MenuInicial();  
              }
                break;
            case 3:
                cout << "Algoritmo em C++ que tem a funcao semelhante a de um jogo Popular chamado: JOGO DA FORCA\n\n";

                cout << " DESENVOLVIDO POR VINICIUS DE SOUZA SANTOS \n\n";
cout << "                                        ##(#(/#                                   \n";           
cout << "                          @@@&&%%#*,..,........,.,,@@@&                           \n";
cout << "                     @@@@@@@@&#*,..,,,................&@@@@&                      \n";
cout << "                 @@@@@@@@@@&,.,.................,.......%@@&@@@@                  \n";
cout << "             @@@@@@@@@@@@,........................,,,,,.*&@@@@@@@@                \n";
cout << "           @@@@@@@@@@@@@@(,....,##(((((((/(///(/((%%%%#....,@@@@@@@@@@            \n";
cout << "         @@@@@@@@@@@@@@@/.*#%%%%%%%%%%%%%%%%%%%%%%%%%%%#/...*@@@&&@@@@@&          \n";
cout << "       &&&&&&&@@@@@@@@@@..(%%%%%%%%%&&%%%%%%%%%%%%%%%%%%#*...%%%%%&@@@@&&%        \n";
cout << "      %%&&&&&&&&&@@@@@@@,.(%%%%%%%%%&&&%&%%&%%%%%####%#%#(...%%%##&&&@&&%#%       \n";
cout << "    %%%%%%&&&&&&&&&&&@@@%.##%((((**//%#%%%###(//*,*((/*,#(..,#(//(#%%%%#(#%&(     \n";
cout << "  %%%%%%%&&&&&&&&&&@@@@&..#,*/(/#(((/...,*,...,//((/,...,...,..,*((#(((((%&&%     \n";
cout << "  %%%&&&&&&&&&&&&&&&&@@@(.*#(/,,...,,,/(..,.(*,,,./..*//#,../%#(/(#%%%#((#%&&@/   \n";
cout << " .&&@@@@@@@@@@@@@@@&&@@@#(%#(((/((///((./%%/.#//*/((//(###.#&&&&%%&&&&&&%%&&&@@   \n";
cout << " &@@@@@@@@@@@@@@@@@@@@@@%/.####%%%###(.#%&%%(.#%%%%%%%%#%.(#&@@&&%&@@@&&&&&@@@@@  \n";
cout << " &@@@@@@@@&&&@@@@@@@@@@@@%%%##/*,,*((#%&&&&&&%*,./##(*.*%%##&&&&%%&&&&&&%&&&&&@@  \n";
cout << "#%&&&&&&&&&&&@@@@@@@@@@@@@%%%%%%#((##(/(#(#/####(##%%%%%%#%%&&&%%%%&&&%%%&&&&&&&  \n";
cout << "(#%%&&&&&&&&@@@@@@@@@@@@@(&###(/,(#####((//(#(####(######%%&&&&&&%&&&&&&&&@&&&&&  \n";
cout << "/#%%&&&&&&@@@@@@@@@@@@@@@&&####/(,..*//////////###(/#((##&&&@@@&&&&&&&&@@@@@@&&@  \n";
cout << " #%&&@@@@@@@@@@@@@@@@@@&&&(&###%#%#(*/(%&&%&##(/########@@@@@@@@@&&@&&&&&&&@@&&&  \n";
cout << " &&@@@@@@@@@@@@@@@@@@&&&&&&&&###/#%%#(#####((#####/(/(*@@@&@@@@@&&&&&&&&&&&&&&&&  \n";
cout << " .&@@@@@@@@@@@@@&&&&&&&&&&&#&&&,,(##%%###(####%%(*,..#,*@&&&&&&&&&&&&&&&&&&&&&&   \n";
cout << "  &&&@&&&&&&&&&&&&&&&&&&&&&&&&&.,.*#(#%%%%%%%##/,..##,,,,*(&&&&&&&&&&&&&&&&&&&/   \n";
cout << "   &&&&&&@@&@@@@@@@@@&&&&&&&&.,,,(#,,*(*/****,..*((,,,,,,,.,,/&&&&&&&&&&%&&&&#    \n";
cout << "    @@@@@@@@@@@@@@@@@@&&&&&&.,,,.,#####((//////(/,,,,,,,,,.,,,,,,*&&&&&&&&&&      \n";
cout << "      @@@@@@@@@@@@@@@@&&*,,.,,,.,*#(#####(((.//,,,..,.,,,.,,,,,,,,,,,,*&&&&       \n";
cout << "       @@@@@@@@@@@@*,,,,,,,/*/,.//(#####((((*,,.......,...,,,,.,,,,,,,,%%#        \n";
cout << "         @@@@@@@@,,,,..,,,.//,..((###%###.,,,......,,...,,,,,,,,,,,,.,,%          \n";
cout << "           @@@@,,,,,..,,,,,(...##*#####,,......,,,,,,,.,.,,,,,,,,,..,#            \n";
cout << "              (,,,..,,,,,,,,...,/###%%#/...,,.,,.,,,,,,.,,,,,,,,,.,               \n";
cout << "                 ,.,,,,,,,,,,..,,(#%%(##,...,,..,,,,,,.,,,,,,,,/                  \n";
cout << "                     ,,,,,,,,,.,,,#%%%......,,,,,,,,,.,,,,,/                      \n";
 cout << "                         /,,,,.,..#%,....,,,,,,,,,,.,,                           \n\n";
                cout << "\n Jogo da Forca";
                cout << "\n1 - Voltar";
                cout << "\n2 - Sair\n";
                cin >> opcao;
                if(opcao == 1){
                  limpatela();
                  MenuInicial();
                }

                break;
            case 4:
            
            limpatela();
                cout << "\t\tVolte Sempre!\n\n";
                
cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout<<"▒▒▄▄▄▒▒▒█▒▒▒▒▄▒▒▒▒▒▒▒▒\n";
cout<<"▒█▀█▀█▒█▀█▒▒█▀█▒▄███▄▒\n";
cout<<"░█▀█▀█░█▀██░█▀█░█▄█▄█░\n";
cout<<"░█▀█▀█░█▀████▀█░█▄█▄█░\n";
cout<<"████████▀█████████████\n\n";


cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$_____$$$$\n";
cout<<"$$$$_____$$$$$$$$$$$$$$$_____$$$$\n";
cout<<"$$$$_____$$$$$$$$$$$$$$$_____$$$$\n";
cout<<"$$$$_____$$____$$$____$$_____$$$$\n";
cout<<"$$$$_____$______$______$_____$$$$\n";
cout<<"$$$$_____$______$______$_____$$$$\n";
cout<<"$$$$_____$____$$$$$$$$$$$$$$$$$$$\n";
cout<<"$$$$_____$___$$___________$$$$$$$\n";
cout<<"$$$$_____$__$$_______________$$$$\n";
cout<<"$$$$__________$$_____________$$$$\n";
cout<<"$$$$___________$$___________$$$$$\n";
cout<<"$$$$_____________$_________$$$$$$\n";
cout<<"$$$$$_____________________$$$$$$$\n";
cout<<"$$$$$$___________________$$$$$$$$\n";
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";


                break;
        
}

}

}

int main()
{
  //Funcao junto com a biblioteca time gera numeros aleatorio.

 srand( (unsigned)time(NULL));

    MenuInicial();

return 0;
}


}

