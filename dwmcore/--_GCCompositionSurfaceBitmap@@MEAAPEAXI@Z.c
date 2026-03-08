/*
 * XREFs of ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x1800B5AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800B5B04 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::`scalar deleting destructor'(
        CCompositionSurfaceBitmap *this,
        char a2)
{
  CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xF0uLL);
    else
      operator delete(this);
  }
  return this;
}
