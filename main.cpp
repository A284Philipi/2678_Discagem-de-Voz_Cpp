#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, k;
    string texto, digito;
    while (getline(cin, texto)){
        i = 0;
        k = texto.length();
        while (i < k){
            if (texto[i] == '*' || texto[i] == '#' || texto[i] == '0' || texto[i] == '1' || texto[i] == '2' || texto[i] == '3' || texto[i] == '4' || texto[i] == '5' || texto[i] == '6' || texto[i] == '7' || texto[i] == '8' || texto[i] == '9'){
                cout << texto[i];
                i++;
            }else{
                if (texto[i] == 'a' || texto[i] == 'b' || texto[i] == 'c' || texto[i] == 'A' || texto[i] == 'B' || texto[i] == 'C'){
                    digito[0] = 50;
                    cout << digito[0];
                    i++;
                }else{
                    if (texto[i] == 'd' || texto[i] == 'D' || texto[i] == 'e' || texto[i] == 'E' || texto[i] == 'f' || texto[i] == 'F'){
                        digito[0] = 51;
                        cout << digito[0];
                        i++;
                    }else{
                        if (texto[i] == 'g' || texto[i] == 'G' || texto[i] == 'h' || texto[i] == 'H' || texto[i] == 'i' || texto[i] == 'I'){
                            digito[0] = 52;
                            cout << digito[0];
                            i++;
                        }else{
                            if (texto[i] == 'j' || texto[i] == 'J' || texto[i] == 'K' || texto[i] == 'k' || texto[i] == 'l' || texto[i] == 'L'){
                                digito[0] = 53;
                                cout << digito[0];
                                i++;
                            }else{
                                if (texto[i] == 'm' || texto[i] == 'n' || texto[i] == 'o' || texto[i] == 'M' || texto[i] == 'N' || texto[i] == 'O'){
                                    digito[0] = 54;
                                    cout << digito[0];
                                    i++;
                                }else{
                                    if (texto[i] == 'p' || texto[i] == 'P' || texto[i] == 'q' || texto[i] == 'Q' || texto[i] == 'R' || texto[i] == 'r' || texto[i] == 's' || texto[i] == 'S'){
                                        digito[0] = 55;
                                        cout << digito[0];
                                        i++;
                                    }else{
                                        if (texto[i] == 't' || texto[i] == 'T' || texto[i] == 'u' || texto[i] == 'U' || texto[i] == 'v' || texto[i] == 'V'){
                                            digito[0] = 56;
                                            cout << digito[0];
                                            i++;
                                        }else{
                                            if (texto[i] == 'w' || texto[i] == 'W' || texto[i] == 'x' || texto[i] == 'X' || texto[i] == 'y' || texto[i] == 'Y' || texto[i] == 'z' || texto[i] == 'Z'){
                                                digito[0] = 57;
                                                cout << digito[0];
                                                i++;
                                            }else{
                                                i++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout <<endl;
    }
    return 0;
}
