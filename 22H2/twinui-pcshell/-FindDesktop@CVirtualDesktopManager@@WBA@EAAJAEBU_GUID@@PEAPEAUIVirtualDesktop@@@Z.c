/*
 * XREFs of ?FindDesktop@CVirtualDesktopManager@@WBA@EAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180170ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CVirtualDesktopManager::FindDesktop(__int64 a1, const struct _GUID *a2, struct IVirtualDesktop **a3)
{
  return CVirtualDesktopManager::FindDesktop((CVirtualDesktopManager *)(a1 - 16), a2, a3);
}
