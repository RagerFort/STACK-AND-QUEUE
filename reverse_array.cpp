#include <iostream>
#include <string>
using namespace std;

class Cars{
   private:
   string company_name;
   string model_name;
   string fuel_type;
   float mileage;
   double price;


public:
   void setData(string c_name, string m_name, string f_type, float mil, double p)
   {
      company_name = c_name;
      model_name = m_name;
      fuel_type = f_type;
      mileage = mil;
      price = p;
   }
   void displayData()
   {
      cout << "Car Propertis:" << endl<<endl;
      cout << "Company Name: " << company_name << endl;
      cout << "Model Name: " << model_name << endl;
      cout << "Fuel Type: " << fuel_type << endl;
      cout << "Mileage: " << mileage << endl;
      cout << "Price: " << price << endl;
   }
};
int main()
{
   Cars car1;
   car1.setData("Toyota", "Corolla", "Petrol", 15.0, 20000);
   car1.displayData();
   return 0;
}