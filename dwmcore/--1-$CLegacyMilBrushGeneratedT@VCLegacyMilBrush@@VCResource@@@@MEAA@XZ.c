/*
 * XREFs of ??1?$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@MEAA@XZ @ 0x1800F5C74
 * Callers:
 *     ??_ECSolidColorLegacyMilBrush@@UEAAPEAXI@Z @ 0x1800F5B80 (--_ECSolidColorLegacyMilBrush@@UEAAPEAXI@Z.c)
 *     ??1?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ @ 0x1800F5C14 (--1-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x18021AEF4 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>::~CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CResource::~CResource((CResource *)this);
}
