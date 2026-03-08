/*
 * XREFs of ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAA?A_T$$QEA$$T@Z @ 0x1800E7040
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<EffectInput>::emplace_back<std::nullptr_t>(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 == *(_QWORD *)(a1 + 16) )
    return std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(a1, v1, a1);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_BYTE *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 48) = 0LL;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 104;
  return result;
}
