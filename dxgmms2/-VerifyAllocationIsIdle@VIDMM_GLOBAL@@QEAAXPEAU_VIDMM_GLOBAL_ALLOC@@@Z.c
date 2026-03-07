// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::VerifyAllocationIsIdle(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, a2, 0) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 32LL, a2, 0LL, 0LL);
  }
}
