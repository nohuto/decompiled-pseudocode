/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x1409BD5B8
 * Callers:
 *     RtlAssert @ 0x1405AA150 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}
