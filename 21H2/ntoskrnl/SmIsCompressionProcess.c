/*
 * XREFs of SmIsCompressionProcess @ 0x14030263C
 * Callers:
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1409B1468 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x1409B1740 (PspFreezeProcessWorker.c)
 *     ExProcessCounterSetCallback @ 0x1409F5F90 (ExProcessCounterSetCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_140D32198;
}
