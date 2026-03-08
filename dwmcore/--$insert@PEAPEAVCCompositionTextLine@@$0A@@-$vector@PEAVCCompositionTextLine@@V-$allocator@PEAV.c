/*
 * XREFs of ??$insert@PEAPEAVCCompositionTextLine@@$0A@@?$vector@PEAVCCompositionTextLine@@V?$allocator@PEAVCCompositionTextLine@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@PEAPEAVCCompositionTextLine@@1@Z @ 0x1801BCBD4
 * Callers:
 *     ?SetOrAppendStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x1801C5090 (-SetOrAppendStrikethroughs@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEA.c)
 *     ?SetOrAppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x1801C5208 (-SetOrAppendUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCo.c)
 * Callees:
 *     ??$_Insert_range@PEAPEAVCCompositionTextLine@@@?$vector@PEAVCCompositionTextLine@@V?$allocator@PEAVCCompositionTextLine@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@PEAPEAVCCompositionTextLine@@1Uforward_iterator_tag@1@@Z @ 0x1801BB420 (--$_Insert_range@PEAPEAVCCompositionTextLine@@@-$vector@PEAVCCompositionTextLine@@V-$allocator@P.c)
 */

_QWORD *__fastcall std::vector<CCompositionTextLine *>::insert<CCompositionTextLine * *,0>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        const void *a4,
        __int64 a5)
{
  __int64 v6; // rbx

  v6 = (__int64)&a3[-*a1] >> 3;
  std::vector<CCompositionTextLine *>::_Insert_range<CCompositionTextLine * *>((__int64)a1, a3, a4, a5);
  *a2 = *a1 + 8 * v6;
  return a2;
}
