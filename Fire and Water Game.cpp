// Fire and Water Game.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum situation { FIRE, WATER, DRAW };
situation playTheGame(char playerSelection, char computerSelection) {

    if ((playerSelection == 'F' && computerSelection == 'W') || (playerSelection == 'W' && computerSelection == 'F'))
        return FIRE;
    else if ((playerSelection == 'W' && computerSelection == 'F') || (playerSelection == 'F' && computerSelection == 'W'))
        return WATER;
    else
        return DRAW;

}

int main()
{
    
    char selection;
    char computerSelection;
    situation conclusion;
    srand(time(0));
    cout << "Welcome to Fire and Water Game!" << endl;
    cout << "Press 'F' for fire and 'W' for water." << endl;
    cout << "Make your selection: ";
    cin >> selection;

    int random = rand() % 2;
    if (random == 0)
        computerSelection = 'W';
    else
        computerSelection = 'F';
    conclusion = playTheGame(selection, computerSelection);
    cout << "Your: " << (selection == 'W' ? "FIRE" : "WATER") << endl;

    cout << "Computer: " << (computerSelection == 'W' ? "FIRE" : "WATER") << endl;

    if (conclusion == FIRE)
        cout << "Fire melts water. You won!" << endl;
    else if (conclusion == WATER)
        cout << "Water puts out the fire. The computer won!" << endl;
    else
        cout << "DRAW!" << endl;
    return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
