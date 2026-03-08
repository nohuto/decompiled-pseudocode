/*
 * XREFs of ??$_Uninitialized_move@PEAVCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@YAPEAVCShapeRenderTask@@QEAV1@0PEAV1@AEAV?$allocator@VCShapeRenderTask@@@0@@Z @ 0x1801316F2
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180083C00 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x180084918 (--$_Emplace_reallocate@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@st.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<CShapeRenderTask *>(__int64 a1, __int64 a2, __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
    a3 += 56LL;
    a1 += 56LL;
  }
  return a3;
}
