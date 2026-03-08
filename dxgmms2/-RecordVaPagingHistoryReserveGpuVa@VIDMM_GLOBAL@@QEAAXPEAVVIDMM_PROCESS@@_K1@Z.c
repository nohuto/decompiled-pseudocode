/*
 * XREFs of ?RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00A6A88
 * Callers:
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00A66D8 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1C0001830 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x1C00F1D64 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryReserveGpuVa(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *VaPagingHistoryEntry; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = operator new(32, (VIDMM_GLOBAL *)((char *)this + 41024), 0x10u, 0);
    else
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 16LL, 32LL);
    if ( VaPagingHistoryEntry )
    {
      *VaPagingHistoryEntry = *(_QWORD *)a2;
      VaPagingHistoryEntry[1] = *((_QWORD *)a2 + 4);
      VaPagingHistoryEntry[2] = a3;
      VaPagingHistoryEntry[3] = a4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9);
  }
}
