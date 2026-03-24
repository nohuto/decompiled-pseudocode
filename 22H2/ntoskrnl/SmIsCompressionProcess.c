/*
 * XREFs of SmIsCompressionProcess @ 0x140304AD0
 * Callers:
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090AE48 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x14090B110 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_140D24158;
}
