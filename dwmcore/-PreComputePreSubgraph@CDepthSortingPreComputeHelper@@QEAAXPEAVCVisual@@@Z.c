/*
 * XREFs of ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x1801D6528
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@QEAV1@AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x1801B0774 (--$_Destroy_range@V-$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@QEAV1.c)
 *     ??$emplace_back@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAA?A_T$$QEAVCDepthSortedVisualCollection@@@Z @ 0x1801D63D4 (--$emplace_back@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V-$alloc.c)
 */

void __fastcall CDepthSortingPreComputeHelper::PreComputePreSubgraph(
        CDepthSortingPreComputeHelper *this,
        struct CVisual *a2)
{
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  __int64 v3; // [rsp+30h] [rbp-38h]
  int v4; // [rsp+38h] [rbp-30h]
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)a2 + 27) == 3 )
  {
    v3 = 0LL;
    v4 = -1;
    v6 = 0LL;
    v2 = 0LL;
    v5 = 0LL;
    std::vector<CDepthSortedVisualCollection>::emplace_back<CDepthSortedVisualCollection>((__int64 *)this, (__int64)&v2);
    if ( (_QWORD)v5 )
      std::_Deallocate<16,0>((void *)v5, 16 * ((v6 - (__int64)v5) >> 4));
    if ( (_QWORD)v2 )
    {
      std::_Destroy_range<std::allocator<CDepthSortingLayer>>(v2, *((__int64 *)&v2 + 1));
      std::_Deallocate<16,0>((void *)v2, 8 * ((v3 - (__int64)v2) >> 3));
    }
  }
}
