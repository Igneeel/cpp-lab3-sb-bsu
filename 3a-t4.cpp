#include<string>
using namespace std; 
int getValue(){
    while(1){
        cout << "(Enter an integer value): ";
        int y;
        cin >> y;
        if (cin.fail()) // если предыдущее извлечение оказалось неудачным,
    {
        cin.clear(); // то возвращаем cin в 'обычный' режим работы
        cin.ignore(32767,'\n'); // и удаляем значения предыдущего ввода из входного буфера
        cout << "Invalid data type!" << endl;
    }
    else // если всё хорошо, то возвращаем a
        return y;
        }
    }
int main()
{
    int k, i = 1, sum_k = 0, number;
    cout << " Enter the amount of integers to sum "; k = getValue();
    do {
        cout << "Enter integer nr. " << i; 
        number = getValue();
        sum_k += number; i++;
    } while (i <= k);
    cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
}
