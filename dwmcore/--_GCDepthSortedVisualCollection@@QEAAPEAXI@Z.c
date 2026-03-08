/*
 * XREFs of ??_GCDepthSortedVisualCollection@@QEAAPEAXI@Z @ 0x1801B13EC
 * Callers:
 *     ??$_Destroy_range@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVisualCollection@@QEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x1801B073C (--$_Destroy_range@V-$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVis.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801D6458 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@QEAV1@AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x1801B0774 (--$_Destroy_range@V-$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@QEAV1.c)
 */

CDepthSortedVisualCollection *__fastcall CDepthSortedVisualCollection::`scalar deleting destructor'(
        CDepthSortedVisualCollection *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 16 * ((__int64)(*((_QWORD *)this + 6) - (_QWORD)v2) >> 4));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    std::_Destroy_range<std::allocator<CDepthSortingLayer>>(*(_QWORD *)this, *((_QWORD *)this + 1));
    std::_Deallocate<16,0>(*(void **)this, 8 * ((__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 3));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  return this;
}
