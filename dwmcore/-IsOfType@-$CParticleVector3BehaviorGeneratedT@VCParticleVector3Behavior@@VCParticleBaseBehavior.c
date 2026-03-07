char __fastcall CParticleVector3BehaviorGeneratedT<CParticleVector3Behavior,CParticleBaseBehavior>::IsOfType(
        __int64 a1,
        int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 124 )
    return 1;
  v2 = CParticleBaseBehaviorGeneratedT<CParticleBaseBehavior,CPropertyChangeResource>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
