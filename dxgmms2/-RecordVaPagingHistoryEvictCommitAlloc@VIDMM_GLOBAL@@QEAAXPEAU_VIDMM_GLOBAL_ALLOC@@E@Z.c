void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  __int64 v3; // rbx
  _QWORD *VaPagingHistoryEntry; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v10,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = operator new(32, (VIDMM_GLOBAL *)((char *)this + 41024), 0xDu, 0);
    else
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 13LL, 32LL);
    v8 = VaPagingHistoryEntry;
    if ( VaPagingHistoryEntry )
    {
      VaPagingHistoryEntry[1] = a2;
      if ( a2 )
        v3 = *(_QWORD *)(*((_QWORD *)a2 + 67) + 40LL);
      VaPagingHistoryEntry[2] = v3;
      v9 = *((_DWORD *)a2 + 17) & 0x3F;
      *((_BYTE *)v8 + 24) = a3;
      *(_DWORD *)v8 = v9;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v10);
  }
}
