/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C0195F00
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C0196180 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
