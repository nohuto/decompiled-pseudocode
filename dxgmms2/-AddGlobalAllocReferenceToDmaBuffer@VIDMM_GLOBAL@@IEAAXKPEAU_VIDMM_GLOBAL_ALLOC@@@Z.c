void __fastcall VIDMM_GLOBAL::AddGlobalAllocReferenceToDmaBuffer(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx

  if ( a3 )
  {
    v3 = a2;
    if ( (int)_VIDMM_DMA_BUFFER::PushGlobalAllocIntoReferenceTable(*((_VIDMM_DMA_BUFFER **)this + a2 + 143), a3) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v6);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v3, 1u, 0LL, 0LL, 0, 0);
      _VIDMM_DMA_BUFFER::PushGlobalAllocIntoReferenceTable(*((_VIDMM_DMA_BUFFER **)this + v3 + 143), a3);
    }
  }
}
