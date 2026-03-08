/*
 * XREFs of ??$?0PEAUMilRectF@@$0A@@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@PEAUMilRectF@@0AEBV?$allocator@UMilRectF@@@1@@Z @ 0x18020CCF4
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18020D3F0 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Buy_nonzero@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAX_K@Z @ 0x1801D3F20 (-_Buy_nonzero@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<MilRectF>::vector<MilRectF>(__int64 *a1, const void *a2, __int64 a3)
{
  size_t v3; // rbp
  __int64 v4; // rsi
  __int64 v7; // rbx

  v3 = a3 - (_QWORD)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = (a3 - (__int64)a2) >> 4;
  a1[2] = 0LL;
  if ( v4 )
  {
    std::vector<MilRectF>::_Buy_nonzero(a1, (a3 - (__int64)a2) >> 4);
    v7 = *a1;
    memmove_0((void *)*a1, a2, v3);
    a1[1] = v7 + 16 * v4;
  }
  return a1;
}
