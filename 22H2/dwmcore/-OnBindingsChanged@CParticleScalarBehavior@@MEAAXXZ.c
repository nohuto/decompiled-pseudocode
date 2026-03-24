/*
 * XREFs of ?OnBindingsChanged@CParticleScalarBehavior@@MEAAXXZ @ 0x1801E26B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendFrames@?$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801DB340 (-AppendFrames@-$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV-$span@$$CBUParticleBindingData@@$.c)
 *     ??$?0V?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@X@?$span@$$CBUParticleBindingData@@$0?0@gsl@@QEAA@AEBV?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@@Z @ 0x1801DC2B8 (--$-0V-$vector@UParticleBindingData@@V-$allocator@UParticleBindingData@@@std@@@std@@X@-$span@$$C.c)
 */

void __fastcall CParticleScalarBehavior::OnBindingsChanged(CParticleScalarBehavior *this)
{
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
  gsl::span<ParticleBindingData const,-1>::span<ParticleBindingData const,-1>(v2, (gsl::details **)this + 10);
  Particles::LinearKeyframeAnimation<float>::AppendFrames((__int64)this + 104, v2);
}
