/*
 * XREFs of ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180091088
 * Callers:
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000D7E0 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18008F3C0 (-AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@.c)
 * Callees:
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000DA20 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18000DC60 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18008E4D0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 */

void __fastcall CBatchOptimizer::AppendLayer(CBatchOptimizer *this)
{
  if ( *((_DWORD *)this + 8) == 8 && (!*((_BYTE *)this + 4240) || !CBatchOptimizer::TryMergeOneLayer(this)) )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    CBatchOptimizer::RecycleLayer(this, 0LL);
  }
  *(_OWORD *)((char *)this + 520 * *((int *)this + (*((_DWORD *)this + 8))++ + 12) + 80) = *((_OWORD *)this + 1);
}
