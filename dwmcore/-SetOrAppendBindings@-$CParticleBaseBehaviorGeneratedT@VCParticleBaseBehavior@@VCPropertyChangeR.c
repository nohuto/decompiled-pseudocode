/*
 * XREFs of ?SetOrAppendBindings@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@_N@Z @ 0x1801C4C2C
 * Callers:
 *     ?AppendBindings@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801C0C2C (-AppendBindings@-$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResour.c)
 *     ?SetBindings@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801C3290 (-SetBindings@-$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$insert@PEBUParticleBindingData@@$0A@@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@PEBUParticleBindingData@@1@Z @ 0x1801BCD10 (--$insert@PEBUParticleBindingData@@$0A@@-$vector@UParticleBindingData@@V-$allocator@UParticleBin.c)
 */

__int64 __fastcall CParticleBaseBehaviorGeneratedT<CParticleBaseBehavior,CPropertyChangeResource>::SetOrAppendBindings(
        _BYTE **a1,
        __int64 a2,
        char a3)
{
  _QWORD *v4; // rcx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1 + 11;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<ParticleBindingData>::insert<ParticleBindingData const *,0>(
    v4,
    &v6,
    a1[12],
    *(const void **)(a2 + 8),
    *(_QWORD *)(a2 + 8) + 24LL * *(_QWORD *)a2);
  (*((void (__fastcall **)(_BYTE **))*a1 + 25))(a1);
  return 0LL;
}
