#include <d_unit/d_unit.h>
#include <tests/t_strlen.h>
#include <tests/t_itoa.h>

void D_UNIT_run()
{
    D_TEST_strlen_on_empty_string();
    D_TEST_strlen_on_normal_string();
    D_TEST_itoa_zero();
}