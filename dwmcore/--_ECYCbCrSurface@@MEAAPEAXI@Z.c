/*
 * XREFs of ??_ECYCbCrSurface@@MEAAPEAXI@Z @ 0x1801C0BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CYCbCrSurface@@MEAA@XZ @ 0x18021C09C (--1CYCbCrSurface@@MEAA@XZ.c)
 */

CYCbCrSurface *__fastcall CYCbCrSurface::`vector deleting destructor'(CYCbCrSurface *this, char a2)
{
  CYCbCrSurface::~CYCbCrSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
