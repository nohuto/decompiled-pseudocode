/*
 * XREFs of ViDeadlockPluginUnload @ 0x1405D18A0
 * Callers:
 *     <none>
 * Callees:
 *     ViDeadlockDetectionApplySettings @ 0x140AD9D8C (ViDeadlockDetectionApplySettings.c)
 */

void __noreturn ViDeadlockPluginUnload()
{
  ViDeadlockDetectionApplySettings(0LL);
}
