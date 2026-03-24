/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C014AB00
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C014AB60 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
