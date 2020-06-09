///в этом файле перечислаются все поля класса и функции для работы с классом, а так же коснтрукторы и деструктор
#include <string>

using namespace std;
class Book
{
private:
    string name;
    string author;
    int countPage;
public:
    Book();
    Book(const string *name, const string *author, const int &countPage);
    Book(const Book &book);
    void print();
    void setName(const string *name);
    void setAuthor(const string *author);
    void setCountPage(const int &countPage);
    string getName();
    string getAuthor();
    int getCountPage();
};
