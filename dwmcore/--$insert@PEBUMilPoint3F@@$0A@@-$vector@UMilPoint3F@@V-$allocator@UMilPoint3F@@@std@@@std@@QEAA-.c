/*
 * XREFs of ??$insert@PEBUMilPoint3F@@$0A@@?$vector@UMilPoint3F@@V?$allocator@UMilPoint3F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint3F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint3F@@@std@@@std@@@1@PEBUMilPoint3F@@1@Z @ 0x1801BCCA0
 * Callers:
 *     ?SetOrAppendVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBUMilPoint3F@@$0?0@gsl@@_N@Z @ 0x1801C52BC (-SetOrAppendVertexPositions@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJA.c)
 * Callees:
 *     ??$_Insert_range@PEBUMilPoint3F@@@?$vector@UMilPoint3F@@V?$allocator@UMilPoint3F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint3F@@@std@@@std@@@1@PEBUMilPoint3F@@1Uforward_iterator_tag@1@@Z @ 0x1801BC584 (--$_Insert_range@PEBUMilPoint3F@@@-$vector@UMilPoint3F@@V-$allocator@UMilPoint3F@@@std@@@std@@AE.c)
 */

_QWORD *__fastcall std::vector<MilPoint3F>::insert<MilPoint3F const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        const void *a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&a3[-*a1] >> 2);
  std::vector<MilPoint3F>::_Insert_range<MilPoint3F const *>((__int64)a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + 12 * v6;
  return result;
}
