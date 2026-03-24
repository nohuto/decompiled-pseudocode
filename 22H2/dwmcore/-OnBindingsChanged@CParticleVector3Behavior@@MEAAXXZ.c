/*
 * XREFs of ?OnBindingsChanged@CParticleVector3Behavior@@MEAAXXZ @ 0x1801DC330
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801DB4BC (-AppendFrames@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 *     ??$?0V?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@X@?$span@$$CBUParticleBindingData@@$0?0@gsl@@QEAA@AEBV?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@@Z @ 0x1801DC2B8 (--$-0V-$vector@UParticleBindingData@@V-$allocator@UParticleBindingData@@@std@@@std@@X@-$span@$$C.c)
 */

void __fastcall CParticleVector3Behavior::OnBindingsChanged(CParticleVector3Behavior *this)
{
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
  gsl::span<ParticleBindingData const,-1>::span<ParticleBindingData const,-1>(v2, (gsl::details **)this + 10);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::AppendFrames((__int64)this + 104, v2);
}
