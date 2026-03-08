/*
 * XREFs of ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F34CC
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E5604 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1C0001830 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x1C00F1D64 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 v3; // rbx
  __int64 VaPagingHistoryEntry; // rax
  __int128 v8; // xmm1
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = (__int64)operator new(88, (VIDMM_GLOBAL *)((char *)this + 41024), 7u, 0);
    else
      VaPagingHistoryEntry = VIDMM_GLOBAL::AllocateVaPagingHistoryEntry((__int64)this, 7, 88LL);
    if ( VaPagingHistoryEntry )
    {
      *(_OWORD *)VaPagingHistoryEntry = *(_OWORD *)&a2->Transfer.hAllocation;
      *(_OWORD *)(VaPagingHistoryEntry + 16) = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      *(_OWORD *)(VaPagingHistoryEntry + 32) = *(_OWORD *)&a2->Reserved.Reserved[8];
      v8 = *(_OWORD *)&a2->Reserved.Reserved[12];
      *(_QWORD *)(VaPagingHistoryEntry + 72) = a3;
      *(_OWORD *)(VaPagingHistoryEntry + 48) = v8;
      if ( a3 )
        v3 = *(_QWORD *)(*((_QWORD *)a3 + 67) + 40LL);
      *(_QWORD *)(VaPagingHistoryEntry + 80) = v3;
      *(_DWORD *)(VaPagingHistoryEntry + 64) = *((_DWORD *)a3 + 17) & 0x3F;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9);
  }
}
