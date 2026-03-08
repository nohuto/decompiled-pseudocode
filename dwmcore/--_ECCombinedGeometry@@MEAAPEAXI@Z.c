/*
 * XREFs of ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x18000BE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18000BF18 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::`vector deleting destructor'(CCombinedGeometry *this, char a2)
{
  CCombinedGeometry::~CCombinedGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC0uLL);
    else
      operator delete(this);
  }
  return this;
}
