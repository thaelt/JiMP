#include "aghInclude.h"


int main()
{
   generator* a = new gen1(0, 10, 20);
   generator* b = new gen2(0, 10, 20);
   generator* c = new gen3(0, 10, 20);
   cout << a->randomize() << endl << b->randomize() << endl << c->randomize() << endl;
   cout << a->getMax();
	return 0;
}

