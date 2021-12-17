#include <stdio.h>

int main() {
  double bal;

  printf("Sir, what's your balance? ");
  scanf("%lf", &bal);

  if (bal <= 0) {
    printf("The only thing you can afford is this dumb program.\n");
    return 0;
  }

  double price;

  printf("Now tell me, how much does the thing you want to buy cost? ");
  scanf("%lf", &price);

  if (price < 0) {
    printf("I don't think that this is a valid price.\n");
    return 0;
  }

  if (price <= bal / 10)
    printf("Yeah, i think you can afford it.\n");
  else
    printf("Nope, you can't afford it.\n");

  return 0;
}
