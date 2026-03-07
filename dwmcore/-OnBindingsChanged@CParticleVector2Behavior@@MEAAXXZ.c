void __fastcall CParticleVector2Behavior::OnBindingsChanged(CParticleVector2Behavior *this)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
  gsl::span<ParticleBindingData const,-1>::span<ParticleBindingData const,-1>((gsl::details *)v2, (__int64 *)this + 11);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::AppendFrames((__int64 *)this + 14, v2);
}
