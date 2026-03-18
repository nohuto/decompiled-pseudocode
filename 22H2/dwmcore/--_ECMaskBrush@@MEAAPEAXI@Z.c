/*
 * XREFs of ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x1800B8FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x1800B9014 (--1CMaskBrush@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CMaskBrush *__fastcall CMaskBrush::`vector deleting destructor'(CMaskBrush *this, char a2)
{
  CMaskBrush::~CMaskBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x90uLL);
    else
      operator delete(this);
  }
  return this;
}
