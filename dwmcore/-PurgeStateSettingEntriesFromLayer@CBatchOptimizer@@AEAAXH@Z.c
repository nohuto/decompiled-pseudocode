/*
 * XREFs of ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000D560
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000D610 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x18008E6C0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x18000D970 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CBatchOptimizer::PurgeStateSettingEntriesFromLayer(CBatchOptimizer *this, int a2)
{
  _DWORD *v3; // rbx
  int v4; // eax
  __int64 v5; // rsi
  gsl::details *v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (_DWORD *)((char *)this + 520 * *((int *)this + a2 + 12));
  v4 = v3[24] - v3[25];
  if ( v4 )
  {
    v5 = v4;
    gsl::details::extent_type<-1>::extent_type<-1>(v7, v4);
    v7[1] = v3 + 30;
    if ( v7[0] == -1LL || v3 == (_DWORD *)-120LL && v7[0] )
    {
      gsl::details::terminate(v6);
      JUMPOUT(0x18000D607LL);
    }
    CBatchOptimizer::DiscardEntries(*((_QWORD *)this + 1), v7);
    memmove_0(v3 + 30, &v3[2 * v5 + 30], 8LL * (unsigned int)v3[25]);
    v3[24] = v3[25];
  }
}
