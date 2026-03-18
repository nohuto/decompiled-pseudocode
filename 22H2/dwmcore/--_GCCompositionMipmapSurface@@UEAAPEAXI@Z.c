/*
 * XREFs of ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x180223F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x180223E50 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 */

CCompositionMipmapSurface *__fastcall CCompositionMipmapSurface::`scalar deleting destructor'(
        CCompositionMipmapSurface *this,
        char a2)
{
  CCompositionMipmapSurface::~CCompositionMipmapSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
