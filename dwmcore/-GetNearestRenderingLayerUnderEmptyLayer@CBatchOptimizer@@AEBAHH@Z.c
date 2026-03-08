/*
 * XREFs of ?GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z @ 0x18000D820
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000D610 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000D6F0 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBatchOptimizer::GetNearestRenderingLayerUnderEmptyLayer(CBatchOptimizer *this, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  int *i; // r10

  v2 = a2 - 1;
  v3 = a2 - 1;
  for ( i = (int *)((char *)this + 4 * v3 + 48); !*((_DWORD *)this + 130 * *i + 25); --v3 )
  {
    if ( !v3 )
      break;
    --i;
    --v2;
  }
  return v2;
}
