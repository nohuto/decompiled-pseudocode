/*
 * XREFs of ??1?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAA@XZ @ 0x1801C1C9C
 * Callers:
 *     ??_ECCompositionGlyphRun@@MEAAPEAXI@Z @ 0x1801C2D80 (--_ECCompositionGlyphRun@@MEAAPEAXI@Z.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x18022700C (--1CCompositionTextLine@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CTextObjectGeneratedT<CTextObject,CResource>::~CTextObjectGeneratedT<CTextObject,CResource>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CResource::~CResource((CResource *)this);
}
