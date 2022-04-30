cmake_minimum_required(VERSION 3.22)
project(Face_of_the_book)

set(CMAKE_CXX_STANDARD 14)

add_executable(Face_of_the_book main.cpp
        Domain/Utilizator.h Domain/Utilizator.cpp Domain/Prietenie.cpp Domain/Prietenie.h Domain/Eveniment.cpp Domain/Eveniment.h Domain/Mesaj.cpp Domain/Mesaj.h Domain/UtilizatorValidator.h
        Repository/Dictionar.h Repository/Lista.h Repository/Node.h
        Service/UtilizatorService.cpp Service/UtilizatorService.h Service/PrietenieService.cpp Service/PrietenieService.h Service/MesajService.cpp Service/MesajService.h Service/EvenimentService.cpp Service/EvenimentService.h
        UI/Console.h UI/Console.cpp)