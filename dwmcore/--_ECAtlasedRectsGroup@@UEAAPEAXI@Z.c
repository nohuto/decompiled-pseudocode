/*
 * XREFs of ??_ECAtlasedRectsGroup@@UEAAPEAXI@Z @ 0x1800230E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@MEAA@XZ @ 0x180023124 (--1-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CAtlasedRectsGroup *__fastcall CAtlasedRectsGroup::`vector deleting destructor'(CAtlasedRectsGroup *this, char a2)
{
  CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::~CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xA8uLL);
    else
      operator delete(this);
  }
  return this;
}
