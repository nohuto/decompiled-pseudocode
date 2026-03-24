/*
 * XREFs of PsGetCurrentThreadId @ 0x140302DF0
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1408AB8E4 (PnpWatchdogEtwWrite.c)
 *     PoShutdownBugCheck @ 0x1408E7610 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x140944324 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
