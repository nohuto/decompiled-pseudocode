/*
 * XREFs of NtWriteVirtualMemory @ 0x18009DC20
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D5FD0 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4004 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800FEF80 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117138 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801176A0 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteVirtualMemory()
{
  __int64 result; // rax

  result = 58LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
