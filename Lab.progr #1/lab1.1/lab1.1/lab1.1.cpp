
#include <iostream>
using namespace std;

class student {
public:
    string Name, Surname;
    int Age;
};

int main()
{
    setlocale(0, "");
    student stud[3];
    cout << "Заполните информацию о студентах"<<endl;

    for (int i = 0; i < 3; i++) {
        cout<<endl << "Студент №" << i+1<<endl;
        cout << "Имя: "; cin >> stud[i].Name;
        cout << "Фамилия: "; cin >> stud[i].Surname;
        cout << "Возраст: "; cin >> stud[i].Age;
    }
    system("pause"); system("cls");

    string name, surname;
    int age, n=0;
    cout << "Введите параметры для поиска студента"<<endl;
    cout << "Имя: "; cin >> name;
    cout << "Фамилия: "; cin >> surname;
    cout << "Возраст: "; cin >> age;

    for (int i = 0; i < 3; i++)
    {
        if (stud[i].Name == name && stud[i].Surname == surname && stud[i].Age == age) {
            n++;
        }
    }

    if (n == 0) {
        cout << "Совпадений не найдено";
    }
    else {
        cout << "Кол-во совпадений: " << n;
    }

    cin.get();
    return 0;
}
