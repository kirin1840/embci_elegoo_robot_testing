#include "car.h"
#include "unity.h"

#ifdef UNIT_TEST

Car car;

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

void test_function_car_forward(void) {
    TEST_ASSERT_EQUAL(0,car.forward());
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_function_car_forward);
    UNITY_END();

    return 0;
}

#endif