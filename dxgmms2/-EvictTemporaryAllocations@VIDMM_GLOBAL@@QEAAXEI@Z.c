void __fastcall VIDMM_GLOBAL::EvictTemporaryAllocations(VIDMM_GLOBAL **this, unsigned __int8 a2, unsigned int a3)
{
  VIDMM_GLOBAL *v6; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v7; // rsi
  VIDMM_GLOBAL *v8; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( a2 )
    VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, a3, 0, 0LL, 0LL, 0, 0);
  v6 = this[473];
  while ( v6 != (VIDMM_GLOBAL *)(this + 473) )
  {
    v7 = (VIDMM_GLOBAL *)((char *)v6 - 208);
    v6 = *(VIDMM_GLOBAL **)v6;
    if ( (*((_DWORD *)v7 + 17) & 0x3F) == a3 )
    {
      if ( VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)this, v7, 0) )
      {
        if ( !a2 )
          break;
        VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, v7);
      }
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v7;
      VIDMM_GLOBAL::EvictTemporaryAllocation(v8, v7);
    }
  }
  this[888] = this[579];
}
