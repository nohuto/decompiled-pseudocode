/*
 * XREFs of ?SetOrAppendKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@_N@Z @ 0x180022EA0
 * Callers:
 *     ?AppendKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@@Z @ 0x1801C0CD8 (-AppendKeyframeAnimations@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChan.c)
 *     ?SetKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@@Z @ 0x1801C3FB8 (-SetKeyframeAnimations@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeR.c)
 * Callees:
 *     ??$_Insert_range@PEAPEAVCKeyframeAnimation@@@?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCKeyframeAnimation@@@std@@@std@@@1@PEAPEAVCKeyframeAnimation@@1Uforward_iterator_tag@1@@Z @ 0x180022F2C (--$_Insert_range@PEAPEAVCKeyframeAnimation@@@-$vector@PEAVCKeyframeAnimation@@V-$allocator@PEAVC.c)
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetOrAppendKeyframeAnimations(
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xE49u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>(this);
    std::vector<CKeyframeAnimation *>::_Insert_range<CKeyframeAnimation * *>(
      (char *)this + 88,
      *((_QWORD *)this + 12),
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    *((_BYTE *)this + 120) |= 0x13u;
  }
  return v8;
}
