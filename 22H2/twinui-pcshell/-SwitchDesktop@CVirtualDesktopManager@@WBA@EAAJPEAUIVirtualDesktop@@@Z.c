/*
 * XREFs of ?SwitchDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@@Z @ 0x180170FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CVirtualDesktopManager::SwitchDesktop(__int64 a1, struct IVirtualDesktop *a2)
{
  return CVirtualDesktopManager::SwitchDesktop((CVirtualDesktopManager *)(a1 - 16), a2);
}
