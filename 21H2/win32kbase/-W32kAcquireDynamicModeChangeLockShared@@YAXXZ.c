/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C0176960
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C0176B20 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
