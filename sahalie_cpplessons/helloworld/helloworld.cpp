// helloworld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


struct Sahalie
{
    Sahalie() = default;
    ~Sahalie() = default;
    Sahalie(const Sahalie& Other) = delete;
    Sahalie(Sahalie&&) = delete;

    const char* Name = "Sahalie";
    int Age = 8;
    float Weight = 30.f;
    float Height = 45.f;
    uint8_t Grade = 4;
    uint8_t YearBorn = 2013;
    double GPA = 2.0;
  const  char* FavoriteTeachersName = "Ms.Merna";
    uint16_t HowDaysLeftOfSchool = 183 * (12 - Grade);

    void print()
    {
        std::cout << "My Name: " << Name << std::endl; // std::endl == "\n"
        std::cout << "My age: " << Age << std::endl; // std::endl== "/n"
        std::cout << "My Weight: " << Weight << std::endl;
        std::cout << "My Height: " << Height << std::endl;
        std::cout << "I'm in Grade:4" << Grade << std::endl;
        std::cout << "I was born in:2013" << YearBorn << std::endl;
        std::cout << "My GPA is:" << GPA << std::endl;
        std::cout << "My Favorite Teachers Name is:" << FavoriteTeachersName << std::endl;
        std::cout << "I have " << HowDaysLeftOfSchool << " days of school left" << std::endl;
    }
};
int main()
{

    std::cout << "have a nice day!\n";
    std::cout << "have a nice day";
    Sahalie Myinfo;
    Myinfo.print();
}



 


//   3. Use the Output window to see build output and other messagesgain, go to File > Open > Project and select the .sln file