/*
 * XREFs of ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F33E4
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00E2EAC (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1C0001830 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x1C00F1D64 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        int a3,
        struct _VIDMM_GLOBAL_ALLOC *a4)
{
  __int64 v4; // rbx
  __int64 VaPagingHistoryEntry; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v10,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = (__int64)operator new(64, (VIDMM_GLOBAL *)((char *)this + 41024), 6u, 0);
    else
      VaPagingHistoryEntry = VIDMM_GLOBAL::AllocateVaPagingHistoryEntry((__int64)this, 6, 64LL);
    if ( VaPagingHistoryEntry )
    {
      *(_OWORD *)VaPagingHistoryEntry = *(_OWORD *)&a2->Transfer.hAllocation;
      *(_OWORD *)(VaPagingHistoryEntry + 16) = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      *(_QWORD *)(VaPagingHistoryEntry + 32) = a2->Transfer.Source.SegmentAddress.QuadPart;
      *(_DWORD *)(VaPagingHistoryEntry + 40) = a3;
      *(_QWORD *)(VaPagingHistoryEntry + 48) = a4;
      if ( a4 )
        v4 = *(_QWORD *)(*((_QWORD *)a4 + 67) + 40LL);
      *(_QWORD *)(VaPagingHistoryEntry + 56) = v4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v10);
  }
}
