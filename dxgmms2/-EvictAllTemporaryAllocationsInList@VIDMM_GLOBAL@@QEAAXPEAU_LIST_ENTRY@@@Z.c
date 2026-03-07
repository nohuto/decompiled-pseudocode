// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::EvictAllTemporaryAllocationsInList(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v5; // rsi
  VIDMM_GLOBAL *v6; // rcx

  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v5 = (struct _VIDMM_GLOBAL_ALLOC *)&Flink[-13];
    Flink = Flink->Flink;
    if ( VIDMM_GLOBAL::IsPagingOperationPending(this, v5, 0) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 32LL, v5, 1LL, 0LL);
    }
    VIDMM_GLOBAL::EvictTemporaryAllocation(v6, v5);
  }
}
