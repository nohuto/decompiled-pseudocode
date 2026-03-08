/*
 * XREFs of ?UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C00E83AC
 * Callers:
 *     VidMmUnblockUEFIFrameBufferRanges @ 0x1C002D570 (VidMmUnblockUEFIFrameBufferRanges.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C01003AC (-UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UnblockUEFIFrameBufferRanges(
        VIDMM_GLOBAL *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  UINT NumInvalidMemoryRanges; // eax
  __int64 PhysicalAdapterIndex; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    WdLogSingleEntry5(0LL, 275LL, 23LL, 0LL, 0LL, 0LL);
  NumInvalidMemoryRanges = a2->NumInvalidMemoryRanges;
  if ( NumInvalidMemoryRanges == 1 )
  {
    v6 = *(_DWORD *)(1616LL * a2->PhysicalAdapterIndex + *((_QWORD *)this + 5028) + 28)
       + (unsigned int)a2->DriverSegmentId;
    if ( (unsigned int)v6 < *((_DWORD *)this + 926) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v6);
      if ( v7 )
        return VIDMM_SEGMENT::UnblockMemoryRanges(v7, v6, 1LL, a2->pMemoryRanges);
    }
    WdLogSingleEntry2(1LL, a2->PhysicalAdapterIndex, a2->DriverSegmentId);
    PhysicalAdapterIndex = a2->PhysicalAdapterIndex;
  }
  else
  {
    WdLogSingleEntry1(1LL, NumInvalidMemoryRanges);
  }
  DxgkLogInternalTriageEvent(PhysicalAdapterIndex, 0x40000LL);
  return 3221225485LL;
}
