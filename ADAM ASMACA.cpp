#include<locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<string>
using namespace std;
int main() {
    string oyuncu1, oyuncu2, kelime, gizlikelime, karpuz;
    setlocale(LC_ALL, ("turkish"));
    cout << "|------------------------------------------|" << endl;
    cout << "|PROJECT BY : FURKAN TAHA TİMUR            |" << endl;
    cout << "|                                          |" << endl;
    cout << "|     ADAM ASMACA OYNUNUNA HOŞGELDİNİZ     |" << endl;
    cout << "|                                          |" << endl;
    cout << "|------------------------------------------|" << endl << endl << endl;

    cout << "oyun oynama türünü seçiniz :" << endl;
    for (int i = 0; i < 1; i++) {
        cout << endl;
    }
    cout << "******************************" << endl;
    cout << "*                            *" << endl;
    cout << "* solo = 1 tuşuna basınız    *" << endl;
    cout << "*                            *" << endl;
    cout << "******************************" << endl << endl;
    for (int i = 0; i < 1; i++) {
        cout << endl;
    }
    cout << "******************************" << endl;
    cout << "*                            *" << endl;
    cout << "* duo = 2 tuşuna basınız     *" << endl;
    cout << "*                            *" << endl;
    cout << "******************************" << endl << endl;
    for (int i = 0; i < 1; i++) {
        cout << endl;
    }
    int değer;
    cout << "lütfen oynamak istediğiniz rakama basınız: ";
    cin >> değer;
    if (değer == 1) {
        char tahmin;
        int yalnis = 0;
        cout << "oyuncu ismi giriniz: ";
        cin >> oyuncu1;
        for (int i = 0; i < 1; i++) {
            cout << endl;
        }
        cout << "sevgili " << oyuncu1 << " ----BAŞLIYORUZ-----" << endl << endl;
        string kelime = "  karpuz\n";
        string gizlikelime = "  karpuz\n";
        cout << "!!!!!!!  Oyniyacağınız oyunda meyvelerden size bir kelime belirledik !!!!!" << endl << endl;
        cout << "lütfen bir nokta koyun yapay zeka size kelime sunacaktır : ";
        cin >> gizlikelime;
        cout << endl;
        while (gizlikelime.size() != kelime.size()) {
            gizlikelime.push_back('_');
        }
        cout << "(5 kelimelik bir meyve oluşturuldu) " << endl;
        for (int i = 0; i < 1; i++) {
            cout << endl;
        }
        do {
            cout << "BULUNAN HARFLER" << endl;
            cout << gizlikelime;
            cout << endl; cout << endl;
            cout << "tahmin gir: ";
            cin >> tahmin;
            cout << endl << endl;
            int x = kelime.length();
            for (int i = 0; i < x; i++) {
                if (tahmin == kelime[i]) {

                    gizlikelime[i] = tahmin;
                    yalnis--;
                }
            }
            yalnis++;

            if (gizlikelime == kelime) {
                cout << "!!!!!!!!!!!!!!!OYUNU KAZANDIN!!!!!!!!!!!!!!!!!!!";
                break;
            }
            if (yalnis == 1) {
                cout << " ***************\n";
                cout << "*   |         *\n";
                cout << "*             *" << endl;
                cout << "*             *\n";
                cout << "*             *\n";
                cout << "*             *\n";
                cout << "*             *\n";
                cout << "*             *\n";
                cout << "*             *\n";
                cout << "***************\n";
                cout << endl;

            }
            if (yalnis == 2) {
                cout << "****************\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 3) {
                cout << "****************\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 4) {
                cout << "****************\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 5) {
                cout << "****************\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*              *\n";
                cout << "*              *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 6) {
                cout << "****************\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*              *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 7) {
                cout << "****************\n";
                cout << "*   |----      *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 8) {
                cout << "****************\n";
                cout << "*   |----      *\n";
                cout << "*   |   ()     *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 9) {
                cout << "****************\n";
                cout << "*   |----      *\n";
                cout << "*   |   ()     *\n";
                cout << "*   |   |      *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 10) {
                cout << "****************\n";
                cout << "*   |----      *\n";
                cout << "*   |   ()     *\n";
                cout << "*   |   |      *\n";
                cout << "*   |  /|\\    *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 11) {
                cout << "****************\n";
                cout << "*   |----      *\n";
                cout << "*   |   ()     *\n";
                cout << "*   |   |      *\n";
                cout << "*   |  /|\\    *\n";
                cout << "*   |   |      *\n";
                cout << "*   |          *\n";
                cout << "*   |          *\n";
                cout << "****************\n";
                cout << endl;
            }
            if (yalnis == 12) {
                cout << "****************\n";
                cout << "*   |----      *\n";
                cout << "*   |   ()     *\n";
                cout << "*   |   |      *\n";
                cout << "*   |  /|\\    *\n";
                cout << "*   |   |      *\n";
                cout << "*   |   |      *\n";
                cout << "*   |          *\n";
                cout << "****************\n";
                cout << "\n!!!!!!!Bir tane yanlis yapma hakkın kaldi!!!!!\n";
                cout << endl;
            }
            if (yalnis == 13) {
                cout << "****************\n";
                cout << "*   |----      *\n";
                cout << "*   |   ()     *\n";
                cout << "*   |   |      *\n";
                cout << "*   |  /|\\    *\n";
                cout << "*   |   |      *\n";
                cout << "*   |   |      *\n";
                cout << "*   |  /|\\    *\n";
                cout << "****************\n";
                cout << endl << endl << endl;
                cout << "*************OYUNU KAYBETTİN****************" << endl << endl;
                cout << "oyunu kaybettin.    kelime ==  " << kelime << endl;
            }

        } while (yalnis < 13);

    }
    else if (değer == 2) {
        string kelime;
        string gizlikelime;
        char tahmin;
        int yalnis = 0;
        cout << "oyuncu ismi giriniz: ";
        cin >> oyuncu1;
        cout << "2.youncu ismi giriniz: ";
        cin >> oyuncu2;
        for (int i = 0; i < 1; i++) {
            cout << endl;
        }
        cout << "sevgili  " << oyuncu1 << " lütfen   " << oyuncu2 << "in" << " tahmin edebilmesi için bir kelime gir: ";
        cin >> kelime;
        for (int x = 0; x < 1; x++) {
            cout << endl;
        }
        cout << oyuncu2 << " başlıyoruz.. :)" << endl;
        while (gizlikelime.size() != kelime.size())
        {
            gizlikelime.push_back('x');
        }
        for (int x = 0; x < 200; x++) {
            cout << endl;

        }
       
        do {
            cout << "BULUNAN HARFLER" << endl;
            cout << gizlikelime << endl;
            cout << "-----------------------------" << endl;
            cout << "tahmin gir: ";
            cin >> tahmin;
            int x = kelime.length();
            for (int i = 0; i < x; i++) {
                if (tahmin == kelime[i]) {
                    gizlikelime[i] = tahmin;
                    yalnis--;
                }
            }
            yalnis++;
            if (gizlikelime == kelime) {
                cout << "Tebrikler " << oyuncu2 << "  !!!!!!!!!!!!OYUNU KAZANDIN!!!!!!!!";
                break;
            }
            if (yalnis == 1) {
                cout << "|_____________\n";
                cout << "|   |        |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 2) {
                cout << "|_____________\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 3) {
                cout << "|_____________\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 4) {
                cout << "|_____________\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 5) {
                cout << "|_____________\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|            |\n";
                cout << "|            |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 6) {
                cout << "|_____________\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|            |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 7) {
                cout << "|_____________\n";
                cout << "|   |----    |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 8) {
                cout << "|_____________\n";
                cout << "|   |----    |\n";
                cout << "|   |   ()   |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 9) {
                cout << "|_____________\n";
                cout << "|   |----    |\n";
                cout << "|   |   ()   |\n";
                cout << "|   |   |    |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 10) {
                cout << "|_____________\n";
                cout << "|   |----    |\n";
                cout << "|   |   ()   |\n";
                cout << "|   |   |    |\n";
                cout << "|   |  /|\\  |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 11) {
                cout << "|_____________\n";
                cout << "|   |----    |\n";
                cout << "|   |   ()   |\n";
                cout << "|   |   |    |\n";
                cout << "|   |  /|\\  |\n";
                cout << "|   |   |    |\n";
                cout << "|   |        |\n";
                cout << "|   |        |\n";
                cout << "|-------------\n";
                cout << endl;
            }
            if (yalnis == 12) {
                cout << "|_____________\n";
                cout << "|   |----    |\n";
                cout << "|   |   ()   |\n";
                cout << "|   |   |    |\n";
                cout << "|   |  /|\\  |\n";
                cout << "|   |   |    |\n";
                cout << "|   |   |    |\n";
                cout << "|   |        |\n";
                cout << "|-------------\n";
                cout << "\n!!!!!!!Bir tane yanlis yapma hakkın kaldi!!!!!\n";
                cout << endl;

            }
            if (yalnis == 13) {
                cout << "|_____________\n";
                cout << "|   |----    |\n";
                cout << "|   |   ()   |\n";
                cout << "|   |   |    |\n";
                cout << "|   |  /|\\  |\n";
                cout << "|   |   |    |\n";
                cout << "|   |   |    |\n";
                cout << "|   |  /|\\  |\n";
                cout << "|-------------\n";
                cout << endl << endl << endl;
                cout << endl << endl << endl;
                cout << "*************OYUNU KAYBETTİN****************" << endl << endl;
                cout << "oyunu kaybettin.    kelime ==  " << kelime << endl;
            }


        } while (yalnis < 13);


    }
    else {
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!LÜTFEN 1 YADA 2 RAKAMINA BASINIZ BAŞKA RAKAM VEYA HARFLERE DOKUNMAYINIZ!!!!!!!!!!!!!!!!!!!" << endl << endl << endl;
    }

    return 0;
}
