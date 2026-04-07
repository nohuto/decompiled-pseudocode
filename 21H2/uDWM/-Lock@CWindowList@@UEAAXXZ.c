/*
 * XREFs of ?Lock@CWindowList@@UEAAXXZ @ 0x1800988B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::Lock(CWindowList *this)
{
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
}
