/*
 * XREFs of ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x180210B5C
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801D9688 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ?GetDepthSortedList@CVisual@@QEBAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x18009A7AC (-GetDepthSortedList@CVisual@@QEBAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ??$SAFE_DELETE@V?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1802100FC (--$SAFE_DELETE@V-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV-$vector.c)
 *     ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180211C38 (-SetDepthSortedList@CVisual@@QEAAXPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std.c)
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
