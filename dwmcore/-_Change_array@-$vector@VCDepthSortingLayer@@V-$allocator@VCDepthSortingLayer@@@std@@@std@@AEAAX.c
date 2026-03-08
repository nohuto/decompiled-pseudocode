/*
 * XREFs of ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x180256D0C
 * Callers:
 *     ??$_Emplace_reallocate@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAPEAVCDepthSortingLayer@@QEAV2@$$QEAV2@@Z @ 0x1802564C4 (--$_Emplace_reallocate@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthS.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@QEAV1@AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x1801B0774 (--$_Destroy_range@V-$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@QEAV1.c)
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CDepthSortingLayer>>((__int64)v6, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
