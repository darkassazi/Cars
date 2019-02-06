#pragma once
#include "PetrolEngine.hpp"
#include "Car.hpp"

class PetrolCar : virtual public Car
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();
    void fill();

protected:
    void refuel();

private:
    PetrolEngine* engine_;
};

