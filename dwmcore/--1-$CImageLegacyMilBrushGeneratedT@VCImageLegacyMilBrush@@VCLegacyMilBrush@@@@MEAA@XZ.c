/*
 * XREFs of ??1?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ @ 0x1800F5C14
 * Callers:
 *     ??_GCImageLegacyMilBrush@@UEAAPEAXI@Z @ 0x1800F5BD0 (--_GCImageLegacyMilBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::~CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[21]);
  this[21] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[23]);
  this[23] = 0LL;
  return CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>::~CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>((CResource *)this);
}
