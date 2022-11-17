cmake_minimum_required(VERSION 3.23)
project(Refactor)

set(CMAKE_CXX_STANDARD 20)

add_executable(Refactor main.cpp affichageQuadrillage.cpp affichageQuadrillage.h choisirColonne.cpp choisirColonne.h verificationAlignements.cpp verificationAlignements.h .github/Input.cpp .github/Input.h)
