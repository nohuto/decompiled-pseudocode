/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C0176B00
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C0176B60 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
