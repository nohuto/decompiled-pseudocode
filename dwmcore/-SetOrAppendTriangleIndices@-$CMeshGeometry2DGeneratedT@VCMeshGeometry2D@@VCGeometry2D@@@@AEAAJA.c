/*
 * XREFs of ?SetOrAppendTriangleIndices@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBH$0?0@gsl@@_N@Z @ 0x1801C51A4
 * Callers:
 *     ?AppendTriangleIndices@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x1801C0D28 (-AppendTriangleIndices@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV-$.c)
 *     ?SetTriangleIndices@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x1801C70D8 (-SetTriangleIndices@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV-$spa.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Insert_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@1@PEBH1Uforward_iterator_tag@1@@Z @ 0x1801BBF70 (--$_Insert_range@PEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetOrAppendTriangleIndices(
        _BYTE **a1,
        __int64 a2,
        char a3)
{
  _QWORD *v4; // rcx

  v4 = a1 + 17;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<int>::_Insert_range<int const *>(
    v4,
    a1[18],
    *(const void **)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 4LL * *(_QWORD *)a2);
  (*((void (__fastcall **)(_BYTE **, _QWORD, _QWORD))*a1 + 9))(a1, 0LL, 0LL);
  return 0LL;
}
