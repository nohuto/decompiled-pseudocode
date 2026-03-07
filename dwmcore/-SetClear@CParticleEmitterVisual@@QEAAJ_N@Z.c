__int64 __fastcall CParticleEmitterVisual::SetClear(CParticleEmitterVisual *this, char a2)
{
  __int64 v2; // r9

  if ( a2 )
  {
    CParticleEmitterVisual::ParticleCollection::Clear((CParticleEmitterVisual *)((char *)this + 872));
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v2 + 72LL))(v2, 0LL, v2);
  }
  return 0LL;
}
