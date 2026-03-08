/*
 * XREFs of EtwpAdjustFreeBuffers @ 0x1406930A0
 * Callers:
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x14069310C (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x140205030 (EtwpAllocateFreeBuffers.c)
 *     EtwpQueryUsedProcessorCount @ 0x140206540 (EtwpQueryUsedProcessorCount.c)
 */

__int64 __fastcall EtwpAdjustFreeBuffers(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebp
  unsigned int UsedProcessorCount; // esi

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 228);
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    if ( v3 < UsedProcessorCount
      && UsedProcessorCount - v3 != (unsigned int)EtwpAllocateFreeBuffers(a1, UsedProcessorCount - v3) )
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
