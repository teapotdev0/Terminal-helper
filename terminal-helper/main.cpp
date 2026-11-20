#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
// красивый запуск
string usertdo,text,io;
cout << "ooooooooooooo                                       o8o                        oooo  \n";
cout << "8'   888   `8                                       `''                        `888  \n"; 
cout << "     888       .ooooo.  oooo d8b ooo. .oo.  .oo.   oooo  ooo. .oo.    .oooo.    888  \n";
cout << "     888      d88' `88b `888``8P `888P'Y88bP'Y88b  `888  `888P'Y88b  `P  )88b   888  \n"; 
cout << "     888      888ooo888  888      888   888   888   888   888   888   .oP'888   888  \n";
cout << "     888      888    .o  888      888   888   888   888   888   888  d8(  888   888  \n";
cout << "    o888o     `Y8bod8P' d888b    o888o o888o o888o o888o o888o o888o `Y888'88o o888o  \n";     
cout << "                                                                                      \n"; 
cout << "         oooo                  oooo                                \n";                           
cout << "         `888                  `888                                \n";                            
cout << "          888 .oo.    .ooooo.   888  oo.ooooo.   .ooooo.  oooo d8b  \n";                           
cout << "          888P`Y88b  d88' `88b  888   888  `88b d88' `88b `888""8P  \n";                           
cout << "          888   888  888ooo888  888   888   888 888ooo888  888     \n";                           
cout << "          888   888  888    .o  888   888   888 888    .o  888      \n";                          
cout << "         o888o o888o `Y8bod8P' o888o  888bod8P' `Y8bod8P' d888b     \n";                          
cout << "                                      888                          \n";                           
cout << "                                     o888o                         \n"; 
cout << " @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout << " @                                                                           @\n";
cout << " @  Доступные команды:                                                       @\n";
cout << " @                                                                           @\n";
cout << " @  to do <название>    - создать задачу                                     @\n";
cout << " @  del todo <название> - удалить задачу                                     @\n";
cout << " @  list to do          - показать все задачи                                @\n";
cout << " @  help                - показать эту справку                               @\n";
cout << " @  calc                - калькулятор                                        @\n";
cout << " @  texted              - текстовый редактор                                 @\n";
cout << " @  about               - об этой программе                                  @\n";                       
cout << " @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
string dash = "/";
//цикл main
main:
while(true){
  string usertdo,text,io;
    string usrin;
    cout << dash << endl;
    getline(cin >> ws, usrin);
    if(usrin == "help"){
cout << " @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout << " @                                                                           @\n";
cout << " @  Доступные команды:                                                       @\n";
cout << " @                                                                           @\n";
cout << " @  to do <название>    - создать задачу                                     @\n";
cout << " @  del todo <название> - удалить задачу                                     @\n";
cout << " @  list to do          - показать все задачи                                @\n";
cout << " @  help                - показать эту справку                               @\n";
cout << " @  calc                - калькулятор                                        @\n";
cout << " @  texted              - текстовый редактор                                 @\n";
cout << " @  about               - об этой программе                                  @\n";                       
cout << " @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
        }else 
        // прыжок на to do
        if(usrin == "to do"){
         goto todo;
        }else if (usrin =="todo"){
            goto todo;
        }else if (usrin =="calculator"){
          goto calc;
        }else if(usrin == "calc"){
            goto calc;
// о проге        
}else if(usrin == "about") 
        {
 cout << "                              ..............................\n";                                              
 cout << "                         _.-..                               ...--.\n";                                        
 cout <<"                       ---.                                        .---.\n";                                     
 cout <<"                    .--.                                                .::.\n";                                  
 cout <<"                 .::.                                                      :+.\n";                                
 cout <<"               .:-            _                                             .*. \n";                              
 cout <<"             .:-             :*:                                             .*-....---. \n";                     
 cout <<"           -:.               :*:                                              +.       -*. \n";                   
 cout <<"         .+-                 .:.                                              -:        :+  \n";                  
 cout <<"        ::                                                                    +         *- \n";                  
 cout <<"        +-............-:                                                      *         :+ \n";                  
 cout <<"                       .*.                                                    :-        :+  \n";                 
 cout <<"                       *-           ::                                        .:        -+  \n";                 
 cout <<"                     +:          .::                                          +         *  \n";                 
 cout <<"                    ++.....----:-                                             +         *. \n";                 
 cout <<"                   :+                                                         +.        +:  \n";                
 cout <<"                  .*.                                                         ::        -*      \n";            
 cout <<"                  :+                                                          ::        .*.         \n";        
 cout <<"                 .*.                                                          ::         *-    \n";             
 cout <<"                 +:                                                           :+         *-        \n";         
 cout <<"                -*                                                            :*::......:*.            \n";     
 cout <<"                *-                                                            ++            \n";          
 cout <<"               :+                                                             *:                      \n";      
 cout <<"               -*                                                             .*.                          \n";  
 cout <<"              *.                                                             ++\n";            
cout << "ooooooooooooo                                       o8o                        oooo  \n";
cout << "8'   888   `8                                       `''                        `888  \n"; 
cout << "     888       .ooooo.  oooo d8b ooo. .oo.  .oo.   oooo  ooo. .oo.    .oooo.    888  \n";
cout << "     888      d88' `88b `888``8P `888P'Y88bP'Y88b  `888  `888P'Y88b  `P  )88b   888  \n"; 
cout << "     888      888ooo888  888      888   888   888   888   888   888   .oP'888   888  \n";
cout << "     888      888    .o  888      888   888   888   888   888   888  d8(  888   888  \n";
cout << "    o888o     `Y8bod8P' d888b    o888o o888o o888o o888o o888o o888o `Y888'88o o888o  \n";     
cout << "                                                                                      \n";               
cout << "         oooo                  oooo                                \n";                           
cout << "         `888                  `888                                \n";                            
cout << "          888 .oo.    .ooooo.   888  oo.ooooo.   .ooooo.  oooo d8b  \n";                           
cout << "          888P`Y88b  d88' `88b  888   888  `88b d88' `88b `888""8P  \n";                           
cout << "          888   888  888ooo888  888   888   888 888ooo888  888     \n";                           
cout << "          888   888  888    .o  888   888   888 888    .o  888      \n";                          
cout << "         o888o o888o `Y8bod8P' o888o  888bod8P' `Y8bod8P' d888b     \n";                          
cout << "                                      888                          \n";                           
cout << "                                     o888o                         \n";
cout << "\n========================================\n";
cout << "  Termainl-helper\n";
cout << "  Версия: 0.0.0 \n";
cout << "  Автор: [Teapotdev0]\n";
cout << "----------------------------------------\n";
cout << "  Это твой помощник в консоли:\n";
cout << "      Хранит задачи в файле mon.todo\n";
cout << "      Считает в калькуляторе\n";
cout << "      Можно писать текст в эдиторе\n";
cout << "==========================================\n";
}
else if(usrin =="text"){
goto texted; 
}
else if (usrin =="texted"){
goto texted;
}else
{
    cout << "syntax error\n";
}
    };
//to do (name) 
todo:
while (getline(cin >> ws, usertdo)){     
        if(usertdo.rfind("to do ", 0) == 0){
ofstream("mon.todo", ios::app) << usertdo.substr(6) << "\n";
} else   
        if (usertdo == "list to do"){
ifstream  f("mon.todo");
 for (int i = 1; getline (f, text ); i++) 
                cout << i << " " << text << "\n";
}else if (usertdo.find("del to do ",0) == 0){
ifstream f("mon.todo");
 io = " ";
while (getline(f, text))
if (text != usertdo.substr(10)) io += text + "\n";
            ofstream("mon.todo")<< io ;
        }
else {
   //456374
    cout << "to do error\n";
}
goto main;
    }

    calc:
double a,b;
char oper;
cin>>a>>oper>>b;
if(oper=='+'){cout<<a+b;
}else if(oper=='-'){cout<<a-b;
}else if(oper=='*'){cout<<a*b;
}else if(oper=='/'){cout<<a/b; 
}else{cout<<"syntax error"<<endl;
}
goto main; 
  
texted:
cout <<"привет это текстовый редактор  напиши имя файла\n";
//создаем переменую имя файла  
string fname;
getline(cin, fname);

//спец тип записи данных в файл
ofstream  file(fname);
//!инверсия  если файл не открылся
if (!file.is_open()){
cout << "error\n";
return 1;
}
cout <<"вводите текст чтобы сохранить и выйти пишите end на следуйщей строке\n";
// одна текущая строка текста
string line;
while (getline(cin, line)){
    if ( line == "end"){
    break;
}
file << line << "\n";
// закрываем файл
file.close();
cout << "great\n";
}
goto main; 
return 0;
}