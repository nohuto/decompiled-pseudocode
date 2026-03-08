/*
 * XREFs of ??_ECAtlasedRectsMesh@@UEAAPEAXI@Z @ 0x1800F8190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@UEAA@XZ @ 0x1800F81D4 (--1-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CAtlasedRectsMesh *__fastcall CAtlasedRectsMesh::`vector deleting destructor'(CAtlasedRectsMesh *this, char a2)
{
  CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::~CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x90uLL);
    else
      operator delete(this);
  }
  return this;
}
