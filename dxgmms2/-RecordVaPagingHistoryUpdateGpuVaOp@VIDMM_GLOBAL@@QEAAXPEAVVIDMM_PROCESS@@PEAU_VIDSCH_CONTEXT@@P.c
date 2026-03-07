void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _VIDSCH_CONTEXT *a3,
        struct VIDMM_ALLOC *a4,
        struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *a5)
{
  __int64 VaPagingHistoryEntry; // rax
  __int128 v10; // xmm1
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = (__int64)operator new(96, (VIDMM_GLOBAL *)((char *)this + 41024), 0x12u, 0);
    else
      VaPagingHistoryEntry = VIDMM_GLOBAL::AllocateVaPagingHistoryEntry((__int64)this, 18, 96LL);
    if ( VaPagingHistoryEntry )
    {
      *(_QWORD *)VaPagingHistoryEntry = *(_QWORD *)a2;
      *(_QWORD *)(VaPagingHistoryEntry + 8) = *((_QWORD *)a2 + 4);
      *(_QWORD *)(VaPagingHistoryEntry + 16) = a3;
      *(_OWORD *)(VaPagingHistoryEntry + 32) = *(_OWORD *)&a5->OperationType;
      *(_OWORD *)(VaPagingHistoryEntry + 48) = *(_OWORD *)&a5->Copy.SizeInBytes;
      *(_OWORD *)(VaPagingHistoryEntry + 64) = *(_OWORD *)(&a5->Copy + 1);
      v10 = *(_OWORD *)((char *)&a5->Copy + 40);
      *(_QWORD *)(VaPagingHistoryEntry + 24) = a4;
      *(_OWORD *)(VaPagingHistoryEntry + 80) = v10;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11);
  }
}
