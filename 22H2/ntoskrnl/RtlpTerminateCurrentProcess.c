/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140914EB0
 * Callers:
 *     RtlAssert @ 0x140588750 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x14069F4E8 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}
