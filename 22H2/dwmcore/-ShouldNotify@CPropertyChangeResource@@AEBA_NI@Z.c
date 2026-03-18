/*
 * XREFs of ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800985F8
 * Callers:
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x18001FA8C (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180097F30 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800F63B0 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x18021B154 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x18021B220 (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x18021B2F8 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098C90 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

unsigned __int8 __fastcall CPropertyChangeResource::ShouldNotify(CPropertyChangeResource *this)
{
  bool ShouldNotify; // al
  __int64 v2; // rcx
  unsigned int v3; // r9d
  char v4; // r8
  int v5; // eax

  ShouldNotify = CNotificationResource::ShouldNotify(this);
  v4 = 0;
  if ( ShouldNotify )
  {
    v5 = *(_DWORD *)(v2 + 72);
    return _bittest(&v5, v3);
  }
  return v4;
}
