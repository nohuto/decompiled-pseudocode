/*
 * XREFs of ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@_N@Z @ 0x1800A6F34
 * Callers:
 *     ?AppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x1801C0CE8 (-AppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV-$span@$$.c)
 *     ?SetRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x1801C65B0 (-SetRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV-$span@$$CBU.c)
 * Callees:
 *     ?OnRectanglesChanged@CRegionGeometry@@QEAAXXZ @ 0x1800A6F84 (-OnRectanglesChanged@CRegionGeometry@@QEAAXXZ.c)
 *     ??$_Insert_range@PEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UtagRECT@@@std@@@std@@@1@PEBUtagRECT@@1Uforward_iterator_tag@1@@Z @ 0x1800A6FE8 (--$_Insert_range@PEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXV-$_Ve.c)
 */

__int64 __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetOrAppendRectangles(
        CRegionGeometry *this,
        _QWORD *a2,
        char a3)
{
  _QWORD *v4; // rcx

  v4 = (_QWORD *)((char *)this + 144);
  if ( !a3 )
    v4[1] = *v4;
  std::vector<tagRECT>::_Insert_range<tagRECT const *>(v4, *((_QWORD *)this + 19), a2[1], a2[1] + 16LL * *a2);
  CRegionGeometry::OnRectanglesChanged(this);
  return 0LL;
}
