/*
 * XREFs of ?SetOrAppendChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@AEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@_N@Z @ 0x180023190
 * Callers:
 *     ?AppendChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@@Z @ 0x1801C0C3C (-AppendChildren@-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV-$span.c)
 *     ?SetChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@@Z @ 0x1801C353C (-SetChildren@-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV-$span@PE.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x180023234 (--$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocator@P.c)
 *     ??$_Insert_range@PEAPEAVCAtlasedRectsMesh@@@?$vector@PEAVCAtlasedRectsMesh@@V?$allocator@PEAVCAtlasedRectsMesh@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCAtlasedRectsMesh@@@std@@@std@@@1@PEAPEAVCAtlasedRectsMesh@@1Uforward_iterator_tag@1@@Z @ 0x180023290 (--$_Insert_range@PEAPEAVCAtlasedRectsMesh@@@-$vector@PEAVCAtlasedRectsMesh@@V-$allocator@PEAVCAt.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::SetOrAppendChildren(
        CResource *this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi

  v6 = CResource::RegisterNNotifiersInternal(this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x144u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CTransform>(this);
    std::vector<CAtlasedRectsMesh *>::_Insert_range<CAtlasedRectsMesh * *>(
      (char *)this + 80,
      *((_QWORD *)this + 11),
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    (*(void (__fastcall **)(CResource *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
  return v8;
}
