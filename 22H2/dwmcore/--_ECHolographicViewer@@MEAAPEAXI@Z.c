/*
 * XREFs of ??_ECHolographicViewer@@MEAAPEAXI@Z @ 0x1802ABB90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CHolographicViewer@@MEAA@XZ @ 0x1802ABB30 (--1CHolographicViewer@@MEAA@XZ.c)
 */

CHolographicViewer *__fastcall CHolographicViewer::`vector deleting destructor'(CHolographicViewer *this, char a2)
{
  CHolographicViewer::~CHolographicViewer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
