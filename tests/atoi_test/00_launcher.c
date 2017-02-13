#include "tests.h"
#include "libunit.h"

int		atoi_launcher(void)
{
	t_test	*tests;

	ft_putstr("ATOI: ");
	get_test(&tests, "Basic Test", &basic_test);
	get_test(&tests, "NULL Test", &null_test);
	get_test(&tests, "Too Small # Test", &basic_test);
	get_test(&tests, "Negative Max Int Test", &null_test);
	get_test(&tests, "Positive Max Int Test", &basic_test);
	get_test(&tests, "Too Large # Test", &null_test);
	return (launch_tests(&tests));
}