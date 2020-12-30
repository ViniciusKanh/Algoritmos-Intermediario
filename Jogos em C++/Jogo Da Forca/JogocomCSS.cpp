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

void exibestatus(string palavracommascara,string letraarriscada, int tamanhopalavra, int tentativasrestantes){

 cout<<"\n A Palavra : "<<palavracommascara<<" \nTamanho: "<<tamanhopalavra;
 cout<<"\nTentativas restante: "<<tentativasrestantes;


 cout<<"\n Letras arriscada: ";

 int cont=0;
 for(cont=0; cont< letraarriscada.size();cont++){
 cout<<letraarriscada[cont]<<" , ";
 

 }
  
}

void jogarsozinho(){
string palavra = retornapalavraaleatoria();

int tamanhopalavra = palavra.size();


string palavracommascara =palavramascarada(palavra, tamanhopalavra);

int tentativas=0,maxtentativas=5;
int cont=0;
char letra;
string letrajaarriscada;
bool jadigitouletra=false;

while(palavra!=palavracommascara && maxtentativas-tentativas>0){
 limpatela();
  exibestatus(palavracommascara,letrajaarriscada,tamanhopalavra, maxtentativas-tentativas);

  cout<<"\t\nDigite uma Letra: ";
  cin>>letra;

  for(cont=0;cont<tentativas;cont++){

    if (letrajaarriscada[cont]==letra){

        cout<<"\t\n\tEssa letra ja foi digitada\n\t";
         jadigitouletra=true;

    }

  }

    if (jadigitouletra==false){
      
      letrajaarriscada+=letra;

  for(cont=0;cont<tamanhopalavra;cont++){
      
      if(palavra[cont]==letra){

    palavracommascara[cont]=palavra[cont];

      }
    

  }

  tentativas++;

    } 
  
  
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
cout<<" ████████████████████████████████████████\n";

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

 


}



}


void MenuInicial(){

    int opcao = 0;
  
while(opcao < 1 || opcao > 3){
  
cout<<"                                           \n";
cout<<"      ╦╔═╗╔═╗╔═╗  ╔╦╗╔═╗  ╔═╗╔═╗╦═╗╔═╗╔═╗  \n";
cout<<"      ║║ ║║ ╦║ ║   ║║╠═╣  ╠╣ ║ ║╠╦╝║  ╠═╣  \n" ;
cout<<"     ╚╝╚═╝╚═╝╚═╝  ═╩╝╩ ╩  ╚  ╚═╝╩╚═╚═╝╩ ╩  \n";
cout<<"                                           \n\n";


        cout << "\t\t\t\t\t Bem vindo ao Jogo\n\t";
        cout << "\n1 - Jogar Sozinho";
        cout << "\n2 - Jogar em Dupla";
        cout << "\n3 - Sobre";
        cout << "\n4 - Sair";
        cout << "\nEscolha uma opcao e tecle ENTER: ";






        cin >> opcao;
        
         switch(opcao){
            case 1:
                jogarsozinho();
                break;
            case 2:
               // if(jogar(2) == 1){
             //   }
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
                }

                break;
            case 4:
                cout << "Volte Sempre!";
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

