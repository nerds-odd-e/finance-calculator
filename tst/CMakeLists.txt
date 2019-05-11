set(Test_SRCS AllTests.cpp testFinanceCalculator.cpp)

include_directories($ENV{CPPUTEST_HOME_INCLUDE})

add_library(cpputest STATIC IMPORTED)
set_property(TARGET cpputest PROPERTY
        IMPORTED_LOCATION $ENV{CPPUTEST_HOME_LIB}/libCppUTest.a)

add_executable(finance-calculator-test ${Test_SRCS})
target_link_libraries(finance-calculator-test cpputest core)


