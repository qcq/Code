#include "library.h"
namespace QCQ
{
   double Random(double start, double end)
    {
        return start+(end-start)*rand()/(RAND_MAX + 1.0);
    }
}
