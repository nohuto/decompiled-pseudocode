/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140914FC0
 * Callers:
 *     RtlAssert @ 0x140588A40 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
}
