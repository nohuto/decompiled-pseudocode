/*
 * XREFs of ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x1800A03C0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x1800A08FC (--1CVisual@@MEAA@XZ.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x18019A370 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ?GetDepthSortedList@CVisual@@QEBAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x1800A03E8 (-GetDepthSortedList@CVisual@@QEBAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ??$SAFE_DELETE@V?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801AC8F8 (--$SAFE_DELETE@V-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV-$vector.c)
 *     ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801AE868 (-SetDepthSortedList@CVisual@@QEAAXPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std.c)
 */

void __fastcall CVisual::DeleteDepthSortedList(CVisual *this)
{
  __int64 v1; // r10
  __int64 DepthSortedList; // [rsp+38h] [rbp+10h] BYREF

  DepthSortedList = CVisual::GetDepthSortedList();
  if ( DepthSortedList )
  {
    CVisual::SetDepthSortedList(v1, 0LL);
    SAFE_DELETE<std::vector<CVisual *>>(&DepthSortedList);
  }
}
