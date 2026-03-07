void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
        VIDMM_GLOBAL *this,
        char a2,
        struct VIDMM_PROCESS *a3,
        struct _VIDSCH_CONTEXT *a4,
        unsigned int a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int64 a7)
{
  int v10; // edi
  __int64 VaPagingHistoryEntry; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v10 = a2 != 0 ? 2 : 0;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = (__int64)operator new(48, (VIDMM_GLOBAL *)((char *)this + 41024), v10 + 17, 0);
    else
      VaPagingHistoryEntry = VIDMM_GLOBAL::AllocateVaPagingHistoryEntry((__int64)this, v10 + 17, 48LL);
    if ( VaPagingHistoryEntry )
    {
      *(_QWORD *)VaPagingHistoryEntry = *(_QWORD *)a3;
      *(_QWORD *)(VaPagingHistoryEntry + 8) = *((_QWORD *)a3 + 4);
      *(_DWORD *)(VaPagingHistoryEntry + 24) = a5;
      *(_QWORD *)(VaPagingHistoryEntry + 32) = a6;
      *(_QWORD *)(VaPagingHistoryEntry + 40) = a7;
      *(_QWORD *)(VaPagingHistoryEntry + 16) = a4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12);
  }
}
