/*
 * XREFs of ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x1801D65E0
 * Callers:
 *     ??$_Emplace_reallocate@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAPEAVCDepthSortedVisualCollection@@QEAV2@$$QEAV2@@Z @ 0x1801D61A4 (--$_Emplace_reallocate@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVisualCollection@@QEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x1801B073C (--$_Destroy_range@V-$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVis.c)
 */

__int64 __fastcall std::vector<CDepthSortedVisualCollection>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CDepthSortedVisualCollection *v6; // rcx
  __int64 result; // rax

  v6 = *(CDepthSortedVisualCollection **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CDepthSortedVisualCollection>>(v6, *(CDepthSortedVisualCollection **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
