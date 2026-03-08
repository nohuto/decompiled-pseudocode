/*
 * XREFs of MiGetVadCacheAttribute @ 0x14065E5C4
 * Callers:
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiProcessVaContiguityInformation @ 0x14065B3D4 (MiProcessVaContiguityInformation.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140664B5C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A2E748 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9E0 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECE4 (MiRotateToFrameBufferNoCopy.c)
 *     MmRotatePhysicalView @ 0x140A2EF10 (MmRotatePhysicalView.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A3F148 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadCacheAttribute(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  result = 1LL;
  v2 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
  if ( v2 >> 3 != 3 )
    return v2 >> 3 != 1;
  if ( (v2 & 7) != 0 )
    return 2LL;
  return result;
}
