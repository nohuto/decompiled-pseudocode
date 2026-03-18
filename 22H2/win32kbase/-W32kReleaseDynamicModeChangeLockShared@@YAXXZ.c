/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C01693D0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C0169440 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
