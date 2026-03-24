/*
 * XREFs of PsGetCurrentThreadId @ 0x1402AA4D0
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1408AB894 (PnpWatchdogEtwWrite.c)
 *     PoShutdownBugCheck @ 0x1408E75C0 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x1409442D4 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
