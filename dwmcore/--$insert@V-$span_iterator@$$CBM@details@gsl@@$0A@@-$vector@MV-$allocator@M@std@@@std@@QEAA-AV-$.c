/*
 * XREFs of ??$insert@V?$span_iterator@$$CBM@details@gsl@@$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@$$CBM@details@gsl@@1@Z @ 0x18024E9C0
 * Callers:
 *     ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x18024EB18 (-ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECT.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Insert_range@PEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1Uforward_iterator_tag@1@@Z @ 0x18024E804 (--$_Insert_range@PEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 */

_QWORD *__fastcall std::vector<float>::insert<gsl::details::span_iterator<float const>,0>(
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
    JUMPOUT(0x18024EA7BLL);
  }
  std::vector<float>::_Insert_range<float const *>(a1, a3, *(const void **)(a4 + 16), *(_QWORD *)(a5 + 16));
  *a2 = *a1 + 4 * ((__int64)&a3[-v5] >> 2);
  return a2;
}
