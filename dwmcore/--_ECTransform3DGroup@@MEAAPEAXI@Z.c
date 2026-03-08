/*
 * XREFs of ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x1801C0A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180251998 (--1CTransform3DGroup@@MEAA@XZ.c)
 */

CTransform3DGroup *__fastcall CTransform3DGroup::`vector deleting destructor'(CTransform3DGroup *this, char a2)
{
  CTransform3DGroup::~CTransform3DGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
