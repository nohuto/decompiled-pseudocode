/*
 * XREFs of ?IsOfType@?$CParticleBaseBehaviorGeneratedT@VCParticleBaseBehavior@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C4FB0
 * Callers:
 *     ?IsOfType@?$CParticleColorBehaviorGeneratedT@VCParticleColorBehavior@@VCParticleBaseBehavior@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C5010 (-IsOfType@-$CParticleColorBehaviorGeneratedT@VCParticleColorBehavior@@VCParticleBaseBehavior@@@@.c)
 *     ?IsOfType@?$CParticleScalarBehaviorGeneratedT@VCParticleScalarBehavior@@VCParticleBaseBehavior@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C5070 (-IsOfType@-$CParticleScalarBehaviorGeneratedT@VCParticleScalarBehavior@@VCParticleBaseBehavior@@.c)
 *     ?IsOfType@?$CParticleVector2BehaviorGeneratedT@VCParticleVector2Behavior@@VCParticleBaseBehavior@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C50A0 (-IsOfType@-$CParticleVector2BehaviorGeneratedT@VCParticleVector2Behavior@@VCParticleBaseBehavior.c)
 *     ?IsOfType@?$CParticleVector3BehaviorGeneratedT@VCParticleVector3Behavior@@VCParticleBaseBehavior@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C50D0 (-IsOfType@-$CParticleVector3BehaviorGeneratedT@VCParticleVector3Behavior@@VCParticleBaseBehavior.c)
 *     ?IsOfType@?$CParticleVector4BehaviorGeneratedT@VCParticleVector4Behavior@@VCParticleBaseBehavior@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C5100 (-IsOfType@-$CParticleVector4BehaviorGeneratedT@VCParticleVector4Behavior@@VCParticleBaseBehavior.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0D30 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CParticleBaseBehaviorGeneratedT<CParticleBaseBehavior,CPropertyChangeResource>::IsOfType(
        __int64 a1,
        int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 116 )
    return 1;
  v2 = CPropertyChangeResource::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
