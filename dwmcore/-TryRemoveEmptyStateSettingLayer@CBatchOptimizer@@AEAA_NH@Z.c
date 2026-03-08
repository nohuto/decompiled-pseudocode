/*
 * XREFs of ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18000D610
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18008E300 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x18008E6C0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000D560 (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z @ 0x18000D820 (-GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18000D874 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x18008E6C0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 */

char __fastcall CBatchOptimizer::TryRemoveEmptyStateSettingLayer(CBatchOptimizer *this, int a2)
{
  __int64 v2; // rbx
  int NearestRenderingLayerUnderEmptyLayer; // eax
  __int64 v5; // r11
  int v6; // edi
  int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // rdx
  int *v10; // r9
  int *v11; // r10
  __int64 v12; // rcx
  int v13; // eax

  v2 = a2;
  NearestRenderingLayerUnderEmptyLayer = CBatchOptimizer::GetNearestRenderingLayerUnderEmptyLayer(this, a2);
  v5 = *((int *)this + 8);
  v6 = v2 + 1;
  v7 = NearestRenderingLayerUnderEmptyLayer;
  v8 = NearestRenderingLayerUnderEmptyLayer;
  if ( NearestRenderingLayerUnderEmptyLayer == v2 )
    return 0;
  v9 = v6;
  v10 = (int *)((char *)this + 4 * NearestRenderingLayerUnderEmptyLayer + 48);
  while ( v9 == v5 )
  {
LABEL_9:
    ++v7;
    ++v8;
    ++v10;
    if ( v8 == v2 )
      return 0;
  }
  v11 = (int *)((char *)this + 4 * v9 + 48);
  while ( 1 )
  {
    v12 = 520LL * *v11;
    v13 = *(_DWORD *)((char *)this + v12 + 100);
    if ( *(_QWORD *)((char *)this + v12 + 80) == *((_QWORD *)this + 65 * *v10 + 10) )
      break;
    if ( !v13 )
    {
      ++v6;
      ++v9;
      ++v11;
      if ( v9 != v5 )
        continue;
    }
    goto LABEL_9;
  }
  if ( v13 )
    CBatchOptimizer::PurgeStateSettingEntriesFromLayer(this, v6--);
  CBatchOptimizer::DiscardEmptyLayers(this, v7 + 1, v6 - v7);
  CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(this, v7);
  return 1;
}
