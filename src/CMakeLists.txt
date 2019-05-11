set(Main_SRCS main.c)

add_library(core ${Main_SRCS})
add_executable(finance-calculator main.c)
target_link_libraries(finance-calculator core)
