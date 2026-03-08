/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVaFailure@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@JI@Z @ 0x1C00F324C
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00EAEE8 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1C0001830 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x1C00F1D64 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaFailure(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        int a3,
        int a4)
{
  __int64 VaPagingHistoryEntry; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = (__int64)operator new(16, (VIDMM_GLOBAL *)((char *)this + 41024), 0x14u, 0);
    else
      VaPagingHistoryEntry = VIDMM_GLOBAL::AllocateVaPagingHistoryEntry((__int64)this, 20, 16LL);
    if ( VaPagingHistoryEntry )
    {
      *(_QWORD *)VaPagingHistoryEntry = *(_QWORD *)a2;
      *(_DWORD *)(VaPagingHistoryEntry + 8) = a3;
      *(_DWORD *)(VaPagingHistoryEntry + 12) = a4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9);
  }
}
