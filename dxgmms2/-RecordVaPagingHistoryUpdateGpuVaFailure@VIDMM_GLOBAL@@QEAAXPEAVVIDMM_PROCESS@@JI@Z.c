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
