/*
 * XREFs of ?OnBindingsChanged@CParticleScalarBehavior@@MEAAXXZ @ 0x180244650
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendFrames@?$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x18023D068 (-AppendFrames@-$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV-$span@$$CBUParticleBindingData@@$.c)
 *     ??$?0$0?0V?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@$0A@@?$span@$$CBUParticleBindingData@@$0?0@gsl@@QEAA@AEBV?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@@Z @ 0x18023E178 (--$-0$0-0V-$vector@UParticleBindingData@@V-$allocator@UParticleBindingData@@@std@@@std@@$0A@@-$s.c)
 */

void __fastcall CParticleScalarBehavior::OnBindingsChanged(CParticleScalarBehavior *this)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
  gsl::span<ParticleBindingData const,-1>::span<ParticleBindingData const,-1>((gsl::details *)v2, (__int64 *)this + 11);
  Particles::LinearKeyframeAnimation<float>::AppendFrames((char **)this + 14, v2);
}
