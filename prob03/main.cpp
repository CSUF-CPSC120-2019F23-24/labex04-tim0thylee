// Sales prediction
#include <iostream>

int main ()
{
  // Set constants for last year sales and percent increase.
  // Set variable for predicted sales
  const long TOTAL_SALES = 2103419277;
  const float PERCENT_INCREASE = 1.18;
  long predicted_sales = TOTAL_SALES * PERCENT_INCREASE;

  // Output last year's sales and predicted sales.
  std::cout << "Last year's sales were $" << TOTAL_SALES << std::endl;
  std::cout << "This year's sales prediction: $" << predicted_sales << std::endl;
  return 0;
}
