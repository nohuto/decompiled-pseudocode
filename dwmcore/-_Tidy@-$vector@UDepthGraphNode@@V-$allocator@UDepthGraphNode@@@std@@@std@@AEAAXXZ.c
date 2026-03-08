/*
 * XREFs of ?_Tidy@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ @ 0x180269BAC
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x180269718 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@QEAU1@AEAV?$allocator@UDepthGraphNode@@@0@@Z @ 0x180269160 (--$_Destroy_range@V-$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@QEAU1@AEAV-$a.c)
 */

void __fastcall std::vector<DepthGraphNode>::_Tidy(__int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<DepthGraphNode>>(v2, *(_QWORD **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
