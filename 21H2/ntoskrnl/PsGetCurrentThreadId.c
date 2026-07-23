/*
 * XREFs of PsGetCurrentThreadId @ 0x140228610
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1408AB9F4 (PnpWatchdogEtwWrite.c)
 *     PoShutdownBugCheck @ 0x1408E7720 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x1409444A4 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
