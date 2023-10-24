
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

struct Book { // создаём структуру, которая хранит всю информацию о книге
    string title;
    string author;
    int year;
    int copies;
};

bool compareBooks(const Book& b1, const Book& b2){ // функция для определения порядка сортировки массива книг
        return b1.title < b2.title; // сравнение двух книг по названию
    }

int main(){
    int numBooks;
    cout<<"Enter the number of books in library: "<<endl;
    cin>>numBooks;

    Book* books = new Book[numBooks]; // создание массива книг

    for(int i = 0; i < numBooks; i++){
        cout<<"Enter the title of the book"<<i + 1<<": "<<endl;
        cin>>books[i].title;
        cout<<"Enter the author of the book"<<i + 1<<": "<<endl;
        cin>>books[i].author;
        cout<<"Enter the year of publication of the book"<<i + 1<<": "<<endl;
        cin>>books[i].year;
        cout<<"Enter the number of copies of the book"<<i + 1<<": "<<endl;
        cin>>books[i].copies;
    }

    sort(books, books+numBooks, compareBooks); // выполняем сортировку

    for(int i = 0; i < numBooks; i++){
        cout<<i+1<<" "<<books[i].title<<" - Author: "<<books[i].author<<", Year of the publication: "<<books[i].year<<", The number of copies: "<<books[i].copies<<endl;      
    }

    delete[] books; // освобождение памяти, выделенной для массива books
    return 0;
}


