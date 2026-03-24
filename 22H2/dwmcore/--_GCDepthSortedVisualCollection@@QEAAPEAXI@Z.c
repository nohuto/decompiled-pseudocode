/*
 * XREFs of ??_GCDepthSortedVisualCollection@@QEAAPEAXI@Z @ 0x18016CC18
 * Callers:
 *     ??$_Destroy_range@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVisualCollection@@0AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x180168E74 (--$_Destroy_range@V-$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVis.c)
 *     ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x18019A5B4 (-pop_back@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollection@@@s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@0AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x180168EAC (--$_Destroy_range@V-$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@0AEAV.c)
 */

CDepthSortedVisualCollection *__fastcall CDepthSortedVisualCollection::`scalar deleting destructor'(
        CDepthSortedVisualCollection *this)
{
  void *v2; // rcx
  void *v3; // rdi

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 176 * ((*((_QWORD *)this + 6) - (_QWORD)v2) / 176LL));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    std::_Destroy_range<std::allocator<CDepthSortingLayer>>(*(_QWORD *)this, *((_QWORD *)this + 1));
    std::_Deallocate<16,0>(v3, 40 * ((*((_QWORD *)this + 2) - (_QWORD)v3) / 40LL));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  return this;
}
