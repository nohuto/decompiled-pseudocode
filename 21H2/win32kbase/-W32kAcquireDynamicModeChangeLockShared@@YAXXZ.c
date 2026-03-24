/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C014A6C0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C014A7D0 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
