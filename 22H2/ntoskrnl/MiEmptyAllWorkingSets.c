/*
 * XREFs of MiEmptyAllWorkingSets @ 0x140634748
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x140629304 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x1406356C0 (MmEmptyAllWorkingSets.c)
 *     MmPerformMemoryListCommand @ 0x140A884BC (MmPerformMemoryListCommand.c)
 *     MiMirrorBrownPhase @ 0x140AAC6EC (MiMirrorBrownPhase.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14035E878 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16920);
  if ( byte_140C699E4 )
  {
    ++*(_DWORD *)(result + 28);
    return MiQueueWorkingSetRequest(a1, 4);
  }
  return result;
}
