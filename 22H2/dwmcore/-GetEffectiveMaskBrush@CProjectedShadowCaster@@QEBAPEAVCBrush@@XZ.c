/*
 * XREFs of ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x180005BE4
 * Callers:
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x180005B60 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001E3F0 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801335E0 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x180219B74 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180219DA0 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

struct CBrush *__fastcall CProjectedShadowCaster::GetEffectiveMaskBrush(CProjectedShadowCaster *this)
{
  struct CBrush *result; // rax

  result = (struct CBrush *)*((_QWORD *)this + 16);
  if ( !result )
    return *(struct CBrush **)(*((_QWORD *)this + 2) + 328LL);
  return result;
}
