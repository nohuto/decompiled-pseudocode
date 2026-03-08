/*
 * XREFs of ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x1801C4DFC
 * Callers:
 *     ?AppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@@Z @ 0x1801C0C6C (-AppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV-$sp.c)
 *     ?SetChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@@Z @ 0x1801C355C (-SetChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV-$span@.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Insert_range@PEAPEAVCTransform3D@@@?$vector@PEAVCTransform3D@@V?$allocator@PEAVCTransform3D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCTransform3D@@@std@@@std@@@1@PEAPEAVCTransform3D@@1Uforward_iterator_tag@1@@Z @ 0x1801BBD88 (--$_Insert_range@PEAPEAVCTransform3D@@@-$vector@PEAVCTransform3D@@V-$allocator@PEAVCTransform3D@.c)
 */

__int64 __fastcall CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::SetOrAppendChildren(
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x206Cu, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 20);
    std::vector<CTransform3D *>::_Insert_range<CTransform3D * *>(
      (__int64)(this + 20),
      this[21],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[9])(this, 0LL, 0LL);
  }
  return v8;
}
