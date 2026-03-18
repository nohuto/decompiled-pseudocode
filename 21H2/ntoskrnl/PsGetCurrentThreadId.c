/*
 * XREFs of PsGetCurrentThreadId @ 0x140231BE0
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x140950084 (PnpWatchdogEtwWrite.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x1409F0964 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
