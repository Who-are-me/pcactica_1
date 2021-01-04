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
    House(int id, int number_house, int square, int floor, int count_room, std::string street);
    House(const House &object);
    ~House();
};

#endif // HOUSE_H
