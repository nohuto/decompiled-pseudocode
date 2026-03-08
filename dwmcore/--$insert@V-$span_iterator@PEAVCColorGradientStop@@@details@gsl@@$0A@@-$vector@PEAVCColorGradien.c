/*
 * XREFs of ??$insert@V?$span_iterator@PEAVCColorGradientStop@@@details@gsl@@$0A@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@PEAVCColorGradientStop@@@details@gsl@@1@Z @ 0x1800B9C74
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1800B9B84 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ??$_Insert_range@PEAPEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@PEAPEAVCColorGradientStop@@1Uforward_iterator_tag@1@@Z @ 0x1800B92F4 (--$_Insert_range@PEAPEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVC.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall std::vector<CColorGradientStop *>::insert<gsl::details::span_iterator<CColorGradientStop *>,0>(
        __int64 *a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbp

  v5 = *a1;
  if ( *(_OWORD *)a4 != *(_OWORD *)a5 || *(_QWORD *)(a4 + 16) > *(_QWORD *)(a5 + 16) )
  {
    gsl::details::terminate(*(gsl::details **)a4);
    JUMPOUT(0x1800B9D2FLL);
  }
  std::vector<CColorGradientStop *>::_Insert_range<CColorGradientStop * *>(
    a1,
    a3,
    *(const void **)(a4 + 16),
    *(_QWORD *)(a5 + 16));
  *a2 = *a1 + 8 * ((__int64)&a3[-v5] >> 3);
  return a2;
}
