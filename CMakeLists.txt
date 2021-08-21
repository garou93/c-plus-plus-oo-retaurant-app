# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

# Notre projet est étiqueté hello
project(Rastourant)

# Crée des variables avec les fichiers à compiler
set(SRCS
    Manu.cpp
    Restaurant.cpp
    )
    
set(HEADERS
    Restaurant.h
    Restaurant1.h
    Restaurant2.h
    Restaurant3.h
    Restaurant4.h
    )

# On indique que l'on veut un exécutable "" compilé à partir des fichiers décrits par les variables SRCS et HEADERS
add_executable(Rastourant ${SRCS} ${HEADERS})
set(CMAKE_BUILD_TYPE Debug)

target_compile_features(Rastourant PUBLIC cxx_std_11)