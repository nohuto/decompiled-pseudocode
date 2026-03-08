/*
 * XREFs of ?SetOrAppendTextureCoordinates@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBUMilPoint2D@@$0?0@gsl@@_N@Z @ 0x1801C5144
 * Callers:
 *     ?AppendTextureCoordinates@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUMilPoint2D@@$0?0@gsl@@@Z @ 0x1801C0D18 (-AppendTextureCoordinates@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEB.c)
 *     ?SetTextureCoordinates@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUMilPoint2D@@$0?0@gsl@@@Z @ 0x1801C6D40 (-SetTextureCoordinates@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV-$.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Insert_range@PEBUMilPoint2D@@@?$vector@UMilPoint2D@@V?$allocator@UMilPoint2D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint2D@@@std@@@std@@@1@PEBUMilPoint2D@@1Uforward_iterator_tag@1@@Z @ 0x1801BC390 (--$_Insert_range@PEBUMilPoint2D@@@-$vector@UMilPoint2D@@V-$allocator@UMilPoint2D@@@std@@@std@@AE.c)
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetOrAppendTextureCoordinates(
        _BYTE **a1,
        __int64 a2,
        char a3)
{
  _QWORD *v4; // rcx

  v4 = a1 + 14;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<MilPoint2D>::_Insert_range<MilPoint2D const *>(
    (__int64)v4,
    a1[15],
    *(const void **)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 16LL * *(_QWORD *)a2);
  (*((void (__fastcall **)(_BYTE **, _QWORD, _QWORD))*a1 + 9))(a1, 0LL, 0LL);
  return 0LL;
}
