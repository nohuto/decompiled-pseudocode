/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C0196160
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C01961D0 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
