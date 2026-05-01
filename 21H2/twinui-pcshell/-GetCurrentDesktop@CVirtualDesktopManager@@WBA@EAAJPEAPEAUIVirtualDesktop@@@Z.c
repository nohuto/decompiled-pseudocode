/*
 * XREFs of ?GetCurrentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1801710B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::GetCurrentDesktop(__int64 a1, struct IVirtualDesktop **a2)
{
  return CVirtualDesktopManager::GetCurrentDesktop((CVirtualDesktopManager *)(a1 - 16), a2);
}
