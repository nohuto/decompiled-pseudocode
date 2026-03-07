void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *a2,
        int a3)
{
  __int64 VaPagingHistoryEntry; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v7,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = (__int64)operator new(96, (VIDMM_GLOBAL *)((char *)this + 41024), 8u, 0);
    else
      VaPagingHistoryEntry = VIDMM_GLOBAL::AllocateVaPagingHistoryEntry((__int64)this, 8, 96LL);
    if ( VaPagingHistoryEntry )
    {
      *(_OWORD *)VaPagingHistoryEntry = *(_OWORD *)a2;
      *(_OWORD *)(VaPagingHistoryEntry + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(VaPagingHistoryEntry + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(VaPagingHistoryEntry + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(VaPagingHistoryEntry + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(VaPagingHistoryEntry + 80) = *((_OWORD *)a2 + 5);
      *(_DWORD *)(VaPagingHistoryEntry + 88) = a3;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v7);
  }
}
