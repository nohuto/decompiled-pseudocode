/*
 * XREFs of ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C00A89B8
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00A46E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00C31B8 (VidSchSetPagingNodePageDirectory.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1C00C4DE4 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x1C0109238 (VidSchiSetPagingHwContextPageDirectory.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1C0001830 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x1C00F1D64 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _DXGKARG_SETROOTPAGETABLE *a3,
        void *a4)
{
  __int64 v4; // rbx
  _QWORD *VaPagingHistoryEntry; // rax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = operator new(56, (VIDMM_GLOBAL *)((char *)this + 41024), 9u, 0);
    else
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 9LL, 56LL);
    if ( VaPagingHistoryEntry )
    {
      *(_OWORD *)VaPagingHistoryEntry = *(_OWORD *)&a3->hContext;
      v10 = *(_OWORD *)&a3->Address.SegmentOffset;
      VaPagingHistoryEntry[6] = a4;
      *((_OWORD *)VaPagingHistoryEntry + 1) = v10;
      if ( a2 )
        v11 = *(_QWORD *)a2;
      else
        v11 = 0LL;
      VaPagingHistoryEntry[4] = v11;
      if ( a2 )
        v4 = *((_QWORD *)a2 + 4);
      VaPagingHistoryEntry[5] = v4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12);
  }
}
