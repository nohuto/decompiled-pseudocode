/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1406322B8
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x140633230 (MmEmptyAllWorkingSets.c)
 *     MmPerformMemoryListCommand @ 0x140A849F4 (MmPerformMemoryListCommand.c)
 *     MiMirrorBrownPhase @ 0x140AA94BC (MiMirrorBrownPhase.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1402B8A34 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16920);
  if ( byte_140C69564 )
  {
    ++*(_DWORD *)(result + 28);
    return MiQueueWorkingSetRequest(a1, 4);
  }
  return result;
}
