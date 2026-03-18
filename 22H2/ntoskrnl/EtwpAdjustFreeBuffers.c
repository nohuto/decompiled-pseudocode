/*
 * XREFs of EtwpAdjustFreeBuffers @ 0x1406BDDAC
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1406BDE18 (EtwpFlushActiveBuffers.c)
 *     EtwpLogger @ 0x140773610 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140228144 (EtwpQueryUsedProcessorCount.c)
 *     EtwpAllocateFreeBuffers @ 0x140370D88 (EtwpAllocateFreeBuffers.c)
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
