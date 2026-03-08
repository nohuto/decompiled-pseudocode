/*
 * XREFs of ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18000D874
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000D610 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000D6F0 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18008DF10 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 * Callees:
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000D930 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x18000D970 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CBatchOptimizer::DiscardEmptyLayers(CBatchOptimizer *this, int a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int i; // edi
  __int64 v7; // r15
  gsl::details *v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
  {
    v4 = a2;
    for ( i = 0; i < a3; ++i )
    {
      v7 = 520LL * *((int *)this + v4 + 12);
      gsl::details::extent_type<-1>::extent_type<-1>(v9, *(unsigned int *)((char *)this + v7 + 96));
      v9[1] = (char *)this + v7 + 120;
      if ( v9[0] == -1LL || !(CBatchOptimizer *)((char *)this + v7 + 120) && v9[0] )
      {
        gsl::details::terminate(v8);
        JUMPOUT(0x18000D929LL);
      }
      CBatchOptimizer::DiscardEntries(*((_QWORD *)this + 1), v9);
      *(_DWORD *)((char *)this + v7 + 96) = 0;
      CBatchOptimizer::RecycleLayer(this, v4);
    }
  }
}
