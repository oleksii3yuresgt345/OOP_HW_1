#include <iostream>
#include <fstream>
using namespace std;

class Dot
{
private:
    int x;
    int y;
    int z;
public:
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    void setZ(int z)
    {
        this->z = z;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }

    void InputXYZ()
    {
        cout << "Enter X : "; cin >> x;
        cout << "Enter Y : "; cin >> y;
        cout << "Enter Z : "; cin >> z;
    }

    void ShowXYZ()
    {
        cout << "X : " << x << endl;
        cout << "Y : " << y << endl;
        cout << "Z : " << z << endl;
    }

    void SaveFile()
    {
        ofstream out("Document_1");
        out << x << endl;
        out << y << endl;
        out << z << endl;
    }
    void ShowFromFile() // ReadFromFile
    {
        ifstream in("Document_1");
        in >> x;
        cout << x << endl;
        in >> y;
        cout << y << endl;
        in >> z;
        cout << z << endl;

    }
};

struct PIB
{
    string name;
    string surname;
    string lastname;
};

struct BDAY
{
    int day;
    int month;
    int year;
};

class Student
{
private:
    PIB pib;
    BDAY birthday;
    int number;
    string city;
    string country;
    int group;
public:
    void setPib(string name, string surname, string lastname)
    {
        this->pib.name = name;
        this->pib.surname = surname;
        this->pib.lastname = lastname;
    }
    void setBirthday(int day, int month, int year)
    {
        this->birthday.day = day;
        this->birthday.month = month;
        this->birthday.year = year;
    }
    void setNumber(int number)
    {
        this->number = number;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    void setCountry(string country)
    {
        this->country = country;
    }
    void setGroup(int group)
    {
        this->group = group;
    }

    PIB getPib()
    {
        PIB pCopy = { pib.name, pib.surname, pib.lastname };
        return pCopy;
    }
    BDAY getBirthday()
    {
        BDAY bCopy = { birthday.day, birthday.month, birthday.year };
        return bCopy;
    }
    int getNumber()
    {
        return number;
    }
    string getCity()
    {
        return city;
    }
    string getCountry()
    {
        return country;
    }
    int getGroup()
    {
        return group;
    }

    void InputStudent()
    {
        cout << "Enter Name : "; cin >> pib.name;
        cout << "Enter Surname : "; cin >> pib.surname;
        cout << "Enter Lastname : "; cin >> pib.lastname;

        cout << "Enter day of birthday : "; cin >> birthday.day;
        cout << "Enter month of birthday : "; cin >> birthday.month;
        cout << "Enter year of birthday : "; cin >> birthday.year;

        cout << "Enter phone number : "; cin >> number;

        cout << "Enter city : "; cin >> city;

        cout << "Enter country : "; cin >> country;

        cout << "Enter group : "; cin >> group;
    }

    void ShowStudent()
    {
        cout << "Student's name : " << pib.name << " " << pib.surname << " " << pib.lastname << endl;
        cout << "Student's birthday : " << birthday.day << "." << birthday.month << "." << birthday.year << endl;
        cout << "Student's phone number : " << number << endl;
        cout << "Student's city : " << city << endl;
        cout << "Student's country : " << country << endl;
        cout << "Student's group : " << group << endl;
    }

    void SaveFileStudent()
    {
        ofstream out("Document_2");
        out << pib.name << endl;
        out << pib.surname << endl;
        out << pib.lastname << endl;
        out << birthday.day << endl;
        out << birthday.month << endl;
        out << birthday.year << endl;
        out << number << endl;
        out << city << endl;
        out << country << endl;
        out << group << endl;
    }
    void ReadFromFileStudent()
    {
        ifstream in("Document_2");
        in >> pib.name;
        cout << pib.name << " ";
        in >> pib.surname;
        cout << pib.surname << " ";
        in >> pib.lastname;
        cout << pib.lastname << endl;
        in >> birthday.day;
        cout << birthday.day << ".";
        in >> birthday.month;
        cout << birthday.month << ".";
        in >> birthday.year;
        cout << birthday.year << endl;
        in >> number;
        cout << number << endl;
        in >> city;
        cout << city << endl;
        in >> country;
        cout << country << endl;
        in >> group;
        cout << group << endl;

    }
};

int main()
{
    // ----------------------------------------------

    Dot d;
    d.InputXYZ();
    d.ShowXYZ();
    d.setX(9);
    d.setY(8);
    d.setZ(7);
    cout << "X is " << d.getX() << " Y is " << d.getY() << " Z is " << d.getZ() << endl;
    d.SaveFile();
    d.ShowFromFile();
    /*Dot read;
    read.ShowFromFile();
    read.ShowXYZ();*/
    // -----------------------------------------------

    Student s;
    s.InputStudent();
    s.ShowStudent();
    s.setPib("Andriy", "Shevchenko", "Romanovuch");
    s.setBirthday(9, 3, 2000);
    s.setNumber(380983832);
    s.setCity("Paris");
    s.setCountry("France");
    s.setGroup(5);
    cout << "=============================================" << endl;
    cout << "Student's name is " << s.getPib().name << " " << s.getPib().surname << " " << s.getPib().lastname << endl;
    cout << "Student's birthday is  " << s.getBirthday().day << "." << s.getBirthday().month << "." << s.getBirthday().year << endl;
    cout << "Student's phone is  " << s.getNumber() << endl;
    cout << "Student's city is  " << s.getCity() << endl;
    cout << "Student's contry is  " << s.getCountry() << endl;
    cout << "Student's group is  " << s.getGroup() << endl;
    cout << "=============================================" << endl;
    s.SaveFileStudent();
    s.ReadFromFileStudent();

    /*Student read;
    read.ReadFromFileStudent();
    read.ShowStudent();*/
}