/*
 * XREFs of PsGetCurrentThreadId @ 0x1402D2E80
 * Callers:
 *     EtwpCovSampContextPruneModules @ 0x1408A4560 (EtwpCovSampContextPruneModules.c)
 *     PoShutdownBugCheck @ 0x1409865B0 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
