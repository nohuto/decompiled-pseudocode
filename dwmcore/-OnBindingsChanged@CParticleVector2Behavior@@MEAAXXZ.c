/*
 * XREFs of ?OnBindingsChanged@CParticleVector2Behavior@@MEAAXXZ @ 0x180244690
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x18023D124 (-AppendFrames@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 *     ??$?0$0?0V?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@$0A@@?$span@$$CBUParticleBindingData@@$0?0@gsl@@QEAA@AEBV?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@@Z @ 0x18023E178 (--$-0$0-0V-$vector@UParticleBindingData@@V-$allocator@UParticleBindingData@@@std@@@std@@$0A@@-$s.c)
 */

void __fastcall CParticleVector2Behavior::OnBindingsChanged(CParticleVector2Behavior *this)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
  gsl::span<ParticleBindingData const,-1>::span<ParticleBindingData const,-1>((gsl::details *)v2, (__int64 *)this + 11);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::AppendFrames((__int64 *)this + 14, v2);
}
