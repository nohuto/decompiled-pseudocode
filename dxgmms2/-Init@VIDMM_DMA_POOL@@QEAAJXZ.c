__int64 __fastcall VIDMM_DMA_POOL::Init(VIDMM_DMA_POOL *this)
{
  __int64 v2; // rsi
  unsigned int v3; // r9d
  int v4; // esi
  int v5; // ebp
  VIDMM_DMA_POOL **v6; // rdx
  VIDMM_DMA_POOL *v7; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v9 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v9 + 24) = this;
      *(_QWORD *)(v9 + 32) = 2LL;
    }
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v10[3] = this;
    v10[4] = *((_QWORD *)this + 2);
    v10[5] = 2LL;
  }
  v2 = *((unsigned int *)this + 9);
  if ( VIDMM_GLOBAL::VerifySegmentSet(*(VIDMM_GLOBAL **)this, *((_DWORD *)this + 2), *((_DWORD *)this + 9), 1u, &v12) )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = VIDMM_DMA_POOL::AddDmaBufferToPool(
             this,
             *((_QWORD *)this + 5),
             *((_DWORD *)this + 16),
             *((_DWORD *)this + 19));
      if ( v5 < 0 )
        break;
      if ( (unsigned int)++v4 >= 2 )
      {
        VIDMM_DMA_POOL::LockAllPoolForAddRemove(1u);
        v6 = (VIDMM_DMA_POOL **)qword_1C0076778;
        v7 = (VIDMM_DMA_POOL *)((char *)this + 112);
        if ( *(struct _LIST_ENTRY **)qword_1C0076778 != &VIDMM_DMA_POOL::_DmaPoolsListHead )
          __fastfail(3u);
        *(_QWORD *)v7 = &VIDMM_DMA_POOL::_DmaPoolsListHead;
        *((_QWORD *)this + 15) = v6;
        *v6 = v7;
        qword_1C0076778 = (__int64)this + 112;
        _InterlockedIncrement(&VIDMM_DMA_POOL::_NbActiveDmaPools);
        VIDMM_DMA_POOL::UpdateFairResourceUsage(v7);
        ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
        *((_DWORD *)this + 8) |= 0xAu;
        return (unsigned int)v5;
      }
    }
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(v3, v2);
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 3221225485LL;
  }
}
