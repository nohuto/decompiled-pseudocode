/*
 * XREFs of ?IsOfType@?$CParticleVector2BehaviorGeneratedT@VCParticleVector2Behavior@@VCParticleBaseBehavior@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C1E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C1D80 (-IsOfType@-$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@.c)
 */

char __fastcall CParticleVector2BehaviorGeneratedT<CParticleVector2Behavior,CParticleBaseBehavior>::IsOfType(
        __int64 a1,
        int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 123 )
    return 1;
  v2 = CParticleBaseBehaviorGeneratedT<CParticleBaseBehavior,CPropertyChangeResource>::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
