#include <iostream>
using std::string;

class AbstractEmployee{
     virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee{
private: //encapsulated
        string Name;
        string Company;
        int Age;
public:
    void setName(string name){ //setters
        Name = name;
    }
    string getName(){ //geter
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCoompany(){
        return Company;
    }
    void setAge(int age){
        if (age <= 18)
            Age = age;
    }
    int getAge(){
        return Age; 
    }
        
    void introduce_yourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    void AskForPromotion(){
         if (Age > 30)
         std:: cout << Name << " got promoted!" << std::endl;
         else
            std:: cout << Name << ", sorry no promotion" << std::endl;
    }
    Employee(int age, string name, string company){ //contractor
        Name = name;
        Company = company;
        Age = age;
    }
};
//access modifiers include private, public and protected
//we can define behavior using class method
class Developer: public Employee{
public:
    string FavProgrammingLanguage;
    Developer(int age, string name, string company, string Language)
        :Employee(age, name, company)
    {
        FavProgrammingLanguage = Language;  
    }

    void FixBug(){
        std::cout << getName() <<" is fixing a bug using " << FavProgrammingLanguage << std::endl;  
    }
 };
int main(){ 
    
    //Employee employee1 = Employee(28, "Jamel Arun", "Gojus Ltd" );
    //Employee employee2 = Employee(31, "Godwin Silayo", "Amazon" );
    //employee1.AskForPromotion();
    //employee2.AskForPromotion(); 

   Developer D = Developer(31, "Godwin Silayo", "Amazon", "C++");
   D.FixBug();
    D.AskForPromotion(); 
} 