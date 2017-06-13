cmake_minimum_required(VERSION 3.0)

project(PIMPLE_POP
  VERSION 0.1.0
)

find_package(gf REQUIRED)

add_executable(pimple-pop
  src/pimple-pop.cc
  src/local/Head.cc
   # and the rest of your sources
)

target_compile_options(pimple-pop
  PRIVATE
    -O2 -Wall -Wextra -std=c++11
)

target_link_libraries(pimple-pop
  gf::gf0
)
