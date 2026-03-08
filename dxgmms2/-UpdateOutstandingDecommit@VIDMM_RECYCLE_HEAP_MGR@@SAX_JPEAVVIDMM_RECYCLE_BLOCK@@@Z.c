/*
 * XREFs of ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001E98
 * Callers:
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AAD0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C009C2F0 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(unsigned __int64 a1, struct VIDMM_RECYCLE_BLOCK *a2)
{
  if ( (__int64)(a1
               + _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
                   a1)) < 0 )
  {
    if ( g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
  }
}
