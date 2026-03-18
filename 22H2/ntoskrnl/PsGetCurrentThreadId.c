/*
 * XREFs of PsGetCurrentThreadId @ 0x14033BCC0
 * Callers:
 *     EtwpCovSampContextPruneModules @ 0x1408A9420 (EtwpCovSampContextPruneModules.c)
 *     PoShutdownBugCheck @ 0x140989660 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
