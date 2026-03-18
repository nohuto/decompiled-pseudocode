/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1409BA44C
 * Callers:
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1407D80A4 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0xC0000001);
}
