#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House {
private:
    int id;
    int number_house;
    int square;
    int floor;
    int count_room;
    std::string street;
public:
    House();
};

#endif // HOUSE_H
