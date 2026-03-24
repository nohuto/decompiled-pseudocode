/*
 * XREFs of ?Release@CStateSettingDrawListEntry@@UEAAKXZ @ 0x180017DE0
 * Callers:
 *     ?Release@CRadialGradientEffect@@WBA@EAAKXZ @ 0x1800F5C80 (-Release@CRadialGradientEffect@@WBA@EAAKXZ.c)
 *     ?Release@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800F5C90 (-Release@CWARPDrawListEntry@@WCA@EAAKXZ.c)
 *     ?Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F8DD0 (-Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CStateSettingDrawListEntry::Release(CStateSettingDrawListEntry *this)
{
  return CDrawListEntry::Release(this);
}
