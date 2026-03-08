/*
 * XREFs of ??$insert@PEBUMilRectF@@$0A@@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMilRectF@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilRectF@@@std@@@std@@@1@PEBUMilRectF@@1@Z @ 0x1800E5F00
 * Callers:
 *     ?SetOrAppendDestinationRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@AEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@_N@Z @ 0x1800E5E20 (-SetOrAppendDestinationRectangles@-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@.c)
 *     ?SetOrAppendSourceRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@AEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@_N@Z @ 0x1800E5E90 (-SetOrAppendSourceRectangles@-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@AEA.c)
 * Callees:
 *     ??$_Insert_range@PEBUMilRectF@@@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilRectF@@@std@@@std@@@1@PEBUMilRectF@@1Uforward_iterator_tag@1@@Z @ 0x1800E5F58 (--$_Insert_range@PEBUMilRectF@@@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAXV-$.c)
 */

_QWORD *__fastcall std::vector<MilRectF>::insert<MilRectF const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = a3 - *a1;
  std::vector<MilRectF>::_Insert_range<MilRectF const *>(a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
