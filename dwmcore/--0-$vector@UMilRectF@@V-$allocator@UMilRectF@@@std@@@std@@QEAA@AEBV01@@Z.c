/*
 * XREFs of ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801CFC10
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801D08B0 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Buy_nonzero@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAX_K@Z @ 0x1801D3F20 (-_Buy_nonzero@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<MilRectF>::vector<MilRectF>(__int64 *a1, __int64 a2)
{
  size_t v4; // rbx
  __int64 v5; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4 )
  {
    std::vector<MilRectF>::_Buy_nonzero();
    v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v5 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v4);
    a1[1] = v5 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return a1;
}
