/*
 * XREFs of ?SetOrAppendChildren@?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@AEAAJAEBV?$span@PEAVCGeometry2D@@$0?0@gsl@@_N@Z @ 0x1801C4C94
 * Callers:
 *     ?AppendChildren@?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@QEAAJAEBV?$span@PEAVCGeometry2D@@$0?0@gsl@@@Z @ 0x1801C0C4C (-AppendChildren@-$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@QEAAJAEBV-$span@.c)
 *     ?SetChildren@?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@QEAAJAEBV?$span@PEAVCGeometry2D@@$0?0@gsl@@@Z @ 0x1801C354C (-SetChildren@-$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@QEAAJAEBV-$span@PEA.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Insert_range@PEAPEAVCGeometry2D@@@?$vector@PEAVCGeometry2D@@V?$allocator@PEAVCGeometry2D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCGeometry2D@@@std@@@std@@@1@PEAPEAVCGeometry2D@@1Uforward_iterator_tag@1@@Z @ 0x1801BB608 (--$_Insert_range@PEAPEAVCGeometry2D@@@-$vector@PEAVCGeometry2D@@V-$allocator@PEAVCGeometry2D@@@s.c)
 */

__int64 __fastcall CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>::SetOrAppendChildren(
        struct CResource ***this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi

  v6 = CResource::RegisterNNotifiersInternal((CResource *)this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x248u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 10);
    std::vector<CGeometry2D *>::_Insert_range<CGeometry2D * *>(
      (__int64)(this + 10),
      this[11],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[9])(this, 0LL, 0LL);
  }
  return v8;
}
