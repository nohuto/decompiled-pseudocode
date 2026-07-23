/*
 * XREFs of SmIsCompressionProcess @ 0x14022AEBC
 * Callers:
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090AF58 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x14090B220 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_140D24158;
}
