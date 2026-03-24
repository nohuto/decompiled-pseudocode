/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140914E60
 * Callers:
 *     RtlAssert @ 0x140588810 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1406BC4B8 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}
