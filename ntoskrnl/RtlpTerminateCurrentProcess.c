/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1409BA58C
 * Callers:
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
