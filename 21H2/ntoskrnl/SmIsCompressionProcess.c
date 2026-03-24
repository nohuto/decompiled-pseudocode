/*
 * XREFs of SmIsCompressionProcess @ 0x1402ACB60
 * Callers:
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x14090A9F4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090ADF8 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x14090B0C0 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_140D24158;
}
