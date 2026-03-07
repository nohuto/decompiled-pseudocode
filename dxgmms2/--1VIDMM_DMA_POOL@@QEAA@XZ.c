void __fastcall VIDMM_DMA_POOL::~VIDMM_DMA_POOL(VIDMM_DMA_POOL **this)
{
  VIDMM_DMA_POOL *v2; // rdx
  VIDMM_DMA_POOL *v3; // rcx
  VIDMM_DMA_POOL *v4; // rdi
  struct _VIDMM_DMA_BUFFER *v5; // rdx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( ((_DWORD)this[4] & 2) != 0 )
  {
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(1u);
    v2 = this[14];
    if ( *((VIDMM_DMA_POOL ***)v2 + 1) != this + 14 || (v3 = this[15], *(VIDMM_DMA_POOL ***)v3 != this + 14) )
      __fastfail(3u);
    *(_QWORD *)v3 = v2;
    *((_QWORD *)v2 + 1) = v3;
    _InterlockedDecrement(&VIDMM_DMA_POOL::_NbActiveDmaPools);
    VIDMM_DMA_POOL::UpdateFairResourceUsage(v3);
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
  }
  v4 = this[12];
  while ( v4 != (VIDMM_DMA_POOL *)(this + 12) )
  {
    v5 = v4;
    v4 = *(VIDMM_DMA_POOL **)v4;
    VIDMM_DMA_POOL::RemoveDmaBufferFromPool((VIDMM_DMA_POOL *)this, v5);
  }
}
