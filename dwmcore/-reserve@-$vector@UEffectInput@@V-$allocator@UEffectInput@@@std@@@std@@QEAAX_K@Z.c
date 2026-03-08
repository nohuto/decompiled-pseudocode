/*
 * XREFs of ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x1800E121C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x1800E1264 (-_Reallocate_exactly@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<EffectInput>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[2] - *a1) >> 3);
  if ( a2 > result )
  {
    if ( a2 > 0x276276276276276LL )
      std::_Xlength_error("vector too long");
    return std::vector<EffectInput>::_Reallocate_exactly();
  }
  return result;
}
