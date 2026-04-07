/*
 * XREFs of ?OnGlobalTimeUpdated@CButton@@UEAAJXZ @ 0x180009C90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CButton::OnGlobalTimeUpdated(CButton *this)
{
  CVisual::SetDirtyFlags(this, 0x10000u);
  return 0LL;
}
