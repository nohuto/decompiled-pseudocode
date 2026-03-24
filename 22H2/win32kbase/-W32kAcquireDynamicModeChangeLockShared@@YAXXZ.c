/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C014AA10
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C014AB20 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
