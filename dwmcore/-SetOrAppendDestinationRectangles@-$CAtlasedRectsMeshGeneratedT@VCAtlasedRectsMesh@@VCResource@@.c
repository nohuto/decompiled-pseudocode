/*
 * XREFs of ?SetOrAppendDestinationRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@AEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@_N@Z @ 0x1800E5E20
 * Callers:
 *     ?AppendDestinationRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@@Z @ 0x1801C0C9C (-AppendDestinationRectangles@-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEA.c)
 *     ?SetDestinationRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@@Z @ 0x1801C3774 (-SetDestinationRectangles@-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJA.c)
 * Callees:
 *     ??$insert@PEBUMilRectF@@$0A@@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMilRectF@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilRectF@@@std@@@std@@@1@PEBUMilRectF@@1@Z @ 0x1800E5F00 (--$insert@PEBUMilRectF@@$0A@@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA-AV-$_V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::SetOrAppendDestinationRectangles(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  char v7; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1 + 12;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<MilRectF>::insert<MilRectF const *,0>((_DWORD)v4, (unsigned int)&v7, a1[13], a2[1], a2[1] + 16LL * *a2);
  v5 = *a1;
  *((_BYTE *)a1 + 136) = 1;
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v5 + 72))(a1, 0LL, 0LL);
  return 0LL;
}
