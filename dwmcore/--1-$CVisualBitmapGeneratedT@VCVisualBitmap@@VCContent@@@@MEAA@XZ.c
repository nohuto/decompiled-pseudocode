/*
 * XREFs of ??1?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@MEAA@XZ @ 0x1801BEAFC
 * Callers:
 *     ??1CVisualBitmap@@MEAA@XZ @ 0x18021B95C (--1CVisualBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::~CResource((CResource *)this);
}
