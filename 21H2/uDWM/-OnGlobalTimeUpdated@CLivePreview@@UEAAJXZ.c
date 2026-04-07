/*
 * XREFs of ?OnGlobalTimeUpdated@CLivePreview@@UEAAJXZ @ 0x180081B90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CLivePreview::OnGlobalTimeUpdated(CLivePreview *this)
{
  CVisual::SetDirtyFlags(this, 0x2000);
  return 0LL;
}
