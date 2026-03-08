/*
 * XREFs of ??$insert@PEBUMilGradientStop@@$0A@@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@PEBUMilGradientStop@@1@Z @ 0x1801BCC30
 * Callers:
 *     ?SetOrAppendGradientStops@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@AEAAJAEBV?$span@$$CBUMilGradientStop@@$0?0@gsl@@_N@Z @ 0x1801C5024 (-SetOrAppendGradientStops@-$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacy.c)
 * Callees:
 *     ??$_Insert_range@PEBUMilGradientStop@@@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@PEBUMilGradientStop@@1Uforward_iterator_tag@1@@Z @ 0x1801BC138 (--$_Insert_range@PEBUMilGradientStop@@@-$vector@UMilGradientStop@@V-$allocator@UMilGradientStop@.c)
 */

_QWORD *__fastcall std::vector<MilGradientStop>::insert<MilGradientStop const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        const void *a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&a3[-*a1] >> 3);
  std::vector<MilGradientStop>::_Insert_range<MilGradientStop const *>((__int64)a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + 24 * v6;
  return result;
}
