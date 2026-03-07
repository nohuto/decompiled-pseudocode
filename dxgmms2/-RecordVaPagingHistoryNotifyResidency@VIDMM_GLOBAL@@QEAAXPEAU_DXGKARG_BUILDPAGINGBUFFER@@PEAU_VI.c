void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 VaPagingHistoryEntry; // rax
  __int128 v7; // xmm1
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v8,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = (__int64)operator new(56, (VIDMM_GLOBAL *)((char *)this + 41024), 0xAu, 0);
    else
      VaPagingHistoryEntry = VIDMM_GLOBAL::AllocateVaPagingHistoryEntry((__int64)this, 10, 56LL);
    if ( VaPagingHistoryEntry )
    {
      *(_OWORD *)VaPagingHistoryEntry = *(_OWORD *)&a2->Transfer.hAllocation;
      v7 = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      *(_QWORD *)(VaPagingHistoryEntry + 40) = a3;
      *(_OWORD *)(VaPagingHistoryEntry + 16) = v7;
      *(_DWORD *)(VaPagingHistoryEntry + 32) = *((_DWORD *)a3 + 17) & 0x3F;
      *(_QWORD *)(VaPagingHistoryEntry + 48) = *(_QWORD *)(*((_QWORD *)a3 + 67) + 40LL);
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v8);
  }
}
