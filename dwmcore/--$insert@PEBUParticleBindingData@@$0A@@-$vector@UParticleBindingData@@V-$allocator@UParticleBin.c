/*
 * XREFs of ??$insert@PEBUParticleBindingData@@$0A@@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@PEBUParticleBindingData@@1@Z @ 0x1801BCD10
 * Callers:
 *     ?SetOrAppendBindings@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@_N@Z @ 0x1801C4C2C (-SetOrAppendBindings@-$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeR.c)
 * Callees:
 *     ??$_Insert_range@PEBUParticleBindingData@@@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@PEBUParticleBindingData@@1Uforward_iterator_tag@1@@Z @ 0x1801BC7DC (--$_Insert_range@PEBUParticleBindingData@@@-$vector@UParticleBindingData@@V-$allocator@UParticle.c)
 */

_QWORD *__fastcall std::vector<ParticleBindingData>::insert<ParticleBindingData const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        const void *a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&a3[-*a1] >> 3);
  std::vector<ParticleBindingData>::_Insert_range<ParticleBindingData const *>((__int64)a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + 24 * v6;
  return result;
}
