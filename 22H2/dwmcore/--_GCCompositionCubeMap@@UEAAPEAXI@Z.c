/*
 * XREFs of ??_GCCompositionCubeMap@@UEAAPEAXI@Z @ 0x180222A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x180222A2C (--1CCompositionCubeMap@@UEAA@XZ.c)
 */

CCompositionCubeMap *__fastcall CCompositionCubeMap::`scalar deleting destructor'(CCompositionCubeMap *this, char a2)
{
  CCompositionCubeMap::~CCompositionCubeMap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
