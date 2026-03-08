/*
 * XREFs of ??_ECManipulation@@UEAAPEAXI@Z @ 0x18020A590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x18020A498 (--1CManipulation@@UEAA@XZ.c)
 */

CManipulation *__fastcall CManipulation::`vector deleting destructor'(CManipulation *this, char a2)
{
  CManipulation::~CManipulation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
