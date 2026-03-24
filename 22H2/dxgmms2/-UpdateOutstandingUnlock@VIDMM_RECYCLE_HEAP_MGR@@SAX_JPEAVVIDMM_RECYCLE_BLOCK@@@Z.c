/*
 * XREFs of ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001E8C
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0074C90 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C007A630 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C007C200 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(unsigned __int64 a1, struct VIDMM_RECYCLE_BLOCK *a2)
{
  _QWORD *v2; // rax

  if ( (__int64)(a1 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, a1)) < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
      v2[5] = 0LL;
      v2[6] = 0LL;
      v2[7] = 0LL;
      v2[3] = 270LL;
      v2[4] = 9LL;
      WdLogEvent5_WdCriticalError(v2);
    }
  }
}
