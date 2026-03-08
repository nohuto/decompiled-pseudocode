/*
 * XREFs of ?SetOrAppendVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBUMilPoint3F@@$0?0@gsl@@_N@Z @ 0x1801C52BC
 * Callers:
 *     ?AppendVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUMilPoint3F@@$0?0@gsl@@@Z @ 0x1801C0D48 (-AppendVertexPositions@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV-$.c)
 *     ?SetVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUMilPoint3F@@$0?0@gsl@@@Z @ 0x1801C70F8 (-SetVertexPositions@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV-$spa.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$insert@PEBUMilPoint3F@@$0A@@?$vector@UMilPoint3F@@V?$allocator@UMilPoint3F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint3F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint3F@@@std@@@std@@@1@PEBUMilPoint3F@@1@Z @ 0x1801BCCA0 (--$insert@PEBUMilPoint3F@@$0A@@-$vector@UMilPoint3F@@V-$allocator@UMilPoint3F@@@std@@@std@@QEAA-.c)
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetOrAppendVertexPositions(
        _BYTE **a1,
        __int64 a2,
        char a3)
{
  _QWORD *v4; // rcx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1 + 11;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<MilPoint3F>::insert<MilPoint3F const *,0>(
    v4,
    &v6,
    a1[12],
    *(const void **)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 12LL * *(_QWORD *)a2);
  (*((void (__fastcall **)(_BYTE **, _QWORD, _QWORD))*a1 + 9))(a1, 0LL, 0LL);
  return 0LL;
}
