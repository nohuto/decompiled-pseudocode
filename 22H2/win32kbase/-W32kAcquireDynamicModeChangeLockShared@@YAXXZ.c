/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C0169170
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C01693F0 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
