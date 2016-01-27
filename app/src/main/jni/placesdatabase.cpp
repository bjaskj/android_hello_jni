//
// Created by Bjarte Skjørestad on 27/01/16.
//
#include "placesdatabase.h"

std::string PlacesDatabase::getPlaceById(int id) {
    char buffer [64];
    sprintf(buffer, "Place ID: %i", id);
    return std::string(buffer);
}