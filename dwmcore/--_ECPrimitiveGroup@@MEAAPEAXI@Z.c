/*
 * XREFs of ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x1800134A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800134E4 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::`vector deleting destructor'(CPrimitiveGroup *this, char a2)
{
  CPrimitiveGroup::~CPrimitiveGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x2B8uLL);
    else
      operator delete(this);
  }
  return this;
}
