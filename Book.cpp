/// в этом файле описывается всё, указанное в book.h
#include <iostream> ///библиотека ввода-вывода
#include "Book.h"   ///наша бибиллиотека класса книга
#include <string>   ///бибилиотека строк
#include <cstring>  ///библиотека функций работающих со строками

using namespace std;
    Book :: Book()  ///конструктор
    {
        setCountPage(0);
    }
    Book :: Book(const string *name, const string *author, const int &countPage)
    {
        this -> name = *(name);
        this -> author = *(author);
        this -> countPage = countPage;
    }

    Book :: Book (const Book &otherBook)    ///конструктор копирования
    {
        this -> name = otherBook.name;
        this -> author = otherBook.author;
        this -> countPage = otherBook.countPage;
    }
    void Book :: print()   ///вывод всей информации о книге
    {   cout << "Name: " << name << "\nAuthor: " << author << "\nCount of pages: " << countPage << endl;    }

    void Book :: setName(const string *name)    ///установка имя книги
    {   this -> name = *(name);  }

    void Book :: setAuthor(const string *author)    ///установка автора книги
    {   this -> author = *(author);  }

    void Book :: setCountPage(const int &countPage) ///установка числа страниц в книге
    {   this -> countPage = countPage;  }

    string Book :: getName()    ///взятие имени книги из объекта класса
    {
        return name;
    }

    string Book :: getAuthor()  ///взятие автора книги из объекта класса
    {
        return author;
    }

   int Book :: getCountPage()   ///взятие числа страниц из объекта класса
    {
        return countPage;
    }
