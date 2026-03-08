/*
 * XREFs of ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801C4EC4
 * Callers:
 *     ?AppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1801C0C8C (-AppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV-$span@PEAVCScen.c)
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x18024DC28 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Insert_range@PEAPEAVCSceneComponent@@@?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCSceneComponent@@@std@@@std@@@1@PEAPEAVCSceneComponent@@1Uforward_iterator_tag@1@@Z @ 0x1801BB9D8 (--$_Insert_range@PEAPEAVCSceneComponent@@@-$vector@PEAVCSceneComponent@@V-$allocator@PEAVCSceneC.c)
 *     ?OnComponentsChanged@CSceneNode@@QEAAXXZ @ 0x18024DAF4 (-OnComponentsChanged@CSceneNode@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendComponents(
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x13A2u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 12);
    std::vector<CSceneComponent *>::_Insert_range<CSceneComponent * *>(
      (__int64)(this + 12),
      this[13],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    CSceneNode::OnComponentsChanged((CSceneNode *)this);
  }
  return v8;
}
