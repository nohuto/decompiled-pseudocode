/*
 * XREFs of ??_ECCompositionGlyphRun@@MEAAPEAXI@Z @ 0x1801BFB50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAA@XZ @ 0x1801BEA6C (--1-$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAA@XZ.c)
 */

struct CResource **__fastcall CCompositionGlyphRun::`vector deleting destructor'(struct CResource **this, char a2)
{
  CTextObjectGeneratedT<CTextObject,CResource>::~CTextObjectGeneratedT<CTextObject,CResource>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
