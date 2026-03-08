/*
 * XREFs of ViDeadlockPluginUnload @ 0x1405CF3F0
 * Callers:
 *     <none>
 * Callees:
 *     ViDeadlockDetectionApplySettings @ 0x140AD5D8C (ViDeadlockDetectionApplySettings.c)
 */

void __noreturn ViDeadlockPluginUnload()
{
  ViDeadlockDetectionApplySettings(0LL);
}
