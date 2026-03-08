/*
 * XREFs of ?SetOrAppendAttractors@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCParticleAttractor@@$0?0@gsl@@_N@Z @ 0x1801C4B64
 * Callers:
 *     ?AppendAttractors@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCParticleAttractor@@$0?0@gsl@@@Z @ 0x1801C0C1C (-AppendAttractors@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJA.c)
 *     ?SetAttractors@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCParticleAttractor@@$0?0@gsl@@@Z @ 0x1801C30F0 (-SetAttractors@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJAEBV.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Insert_range@PEAPEAVCParticleAttractor@@@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCParticleAttractor@@@std@@@std@@@1@PEAPEAVCParticleAttractor@@1Uforward_iterator_tag@1@@Z @ 0x1801BB7F0 (--$_Insert_range@PEAPEAVCParticleAttractor@@@-$vector@PEAVCParticleAttractor@@V-$allocator@PEAVC.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetOrAppendAttractors(
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x25F8u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>((CResource *)this, this + 106);
    std::vector<CParticleAttractor *>::_Insert_range<CParticleAttractor * *>(
      (__int64)(this + 106),
      this[107],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[9])(this, 0LL, 0LL);
  }
  return v8;
}
