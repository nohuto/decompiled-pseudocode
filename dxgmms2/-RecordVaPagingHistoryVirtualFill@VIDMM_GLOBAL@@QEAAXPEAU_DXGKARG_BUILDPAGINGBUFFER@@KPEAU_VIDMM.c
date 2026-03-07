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
