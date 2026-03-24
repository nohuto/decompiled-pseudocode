/*
 * XREFs of ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x18016ED5C
 * Callers:
 *     ?SetMaxParticleInstances@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z @ 0x180170FE0 (-SetMaxParticleInstances@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801DDEA0 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180169554 (--$_Resize@U_Value_init_tag@std@@@-$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V-$allocator@UInst.c)
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x18016FEB0 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 */

void __fastcall CParticleEmitterVisual::InitializeParticleLists(CParticleEmitterVisual *this)
{
  CParticleEmitterVisual::ParticleCollection::Reserve(
    (CParticleEmitterVisual *)((char *)this + 784),
    *((_DWORD *)this + 164));
  std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Resize<std::_Value_init_tag>(
    (_QWORD *)this + 156,
    *((unsigned int *)this + 164));
}
