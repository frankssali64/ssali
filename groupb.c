#include<stdio.h>
//FUNCTION DEFINITION***
//FUNCTION TO CONVERT CELSIUS TO FAHRENHEIT
float convertToFahrenheit(float  to_celsius)
{return (to_celsius*9.0f/5.0f)+32;}

//FUNCTION TO CHECK  COMFORT LEVEL  BASED ON CURRENT AND DESIRED TEMPERATURE
void checkComfortLevel(float current_tempF,float desired_temp_min, float desired_temp_max){
    if(current_tempF >= desired_temp_min && current_tempF <= desired_temp_max ){
        printf("Comfortable room Temperature\n");
    }
    else if(current_tempF < desired_temp_min){
        printf("Heating taking place\n");
    }
    else {
        printf("Cooling taking place\n");
    }
}
int main(){
    float current_tempC,current_tempF;
    //FUNCTION CALLING***
    float desired_temp_min = convertToFahrenheit(20);
    float desired_temp_max = convertToFahrenheit(22);

    printf("Enter current_tempC:");
    scanf("%f", &current_tempC);
//Temp conversion
    current_tempF = convertToFahrenheit(current_tempC);

printf("%.1f ֯ F is the current_temp\n",current_tempF);
      
       checkComfortLevel(current_tempF,desired_temp_min,desired_temp_max);


    return 0;
}