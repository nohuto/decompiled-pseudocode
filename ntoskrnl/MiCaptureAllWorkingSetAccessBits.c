/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x1402B8A14
 * Callers:
 *     MmPerformMemoryListCommand @ 0x140A849F4 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1402B8A34 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  return MiQueueWorkingSetRequest(a1, a2 != 0 ? 16 : 8);
}
