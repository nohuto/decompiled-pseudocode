/*
 * XREFs of ?GetDesktopTree@CHolographicInteropTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x1802A5C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::GetDesktopTree(RTL_SRWLOCK **this, struct CDesktopTree **a2)
{
  return CHolographicManager::GetDefaultDesktopTree(this[3], a2);
}
