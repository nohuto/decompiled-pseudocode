CParticleVector4Behavior *__fastcall CParticleVector4Behavior::CParticleVector4Behavior(
        CParticleVector4Behavior *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)this = &CParticleVector4Behavior::`vftable'{for `CParticleVector4BehaviorGeneratedT<CParticleVector4Behavior,CParticleBaseBehavior>'};
  *((_QWORD *)this + 14) = &CParticleVector4Behavior::`vftable'{for `Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>'};
  return this;
}
