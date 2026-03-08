/*
 * XREFs of ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x18020D7DC
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801D6458 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ?GetDepthSortedList@CVisual@@QEBAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x18009A5FC (-GetDepthSortedList@CVisual@@QEBAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ??$SAFE_DELETE@V?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18020CD7C (--$SAFE_DELETE@V-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV-$vector.c)
 *     ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18020E8B8 (-SetDepthSortedList@CVisual@@QEAAXPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std.c)
 */

void __fastcall CVisual::DeleteDepthSortedList(CVisual *this)
{
  __int64 v1; // r10
  __int64 DepthSortedList; // [rsp+38h] [rbp+10h] BYREF

  DepthSortedList = CVisual::GetDepthSortedList((__int64)this);
  if ( DepthSortedList )
  {
    CVisual::SetDepthSortedList(v1, 0LL);
    SAFE_DELETE<std::vector<CVisual *>>(&DepthSortedList);
  }
}
