/*
 * XREFs of ?SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180256CA0
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801D6458 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x180269718 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 */

char __fastcall CDepthSortedVisualCollection::SortVisuals(__int64 a1, __int64 a2)
{
  int i; // eax
  __int64 v5; // rdi

  for ( i = *(_DWORD *)(a1 + 24); ; i = *(_DWORD *)(*(_QWORD *)a1 + 8 * v5 + 32) )
  {
    if ( i == -1 )
      return 1;
    v5 = 5LL * i;
    if ( !(unsigned __int8)CDepthSortingLayer::SortVisuals(*(_QWORD *)a1 + 40LL * i, a2, a1 + 32) )
      break;
  }
  return 0;
}
