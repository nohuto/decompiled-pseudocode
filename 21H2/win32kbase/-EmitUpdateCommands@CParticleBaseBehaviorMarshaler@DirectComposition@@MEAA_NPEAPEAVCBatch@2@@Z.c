/*
 * XREFs of ?EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DAE20
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetBindingsCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D68E8 (-EmitSetBindingsCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetInputSourceCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D7F84 (-EmitSetInputSourceCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 */

char __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CParticleBaseBehaviorMarshaler::EmitSetBindingsCommand(this, a2) )
    return DirectComposition::CParticleBaseBehaviorMarshaler::EmitSetInputSourceCommand(this, a2) != 0;
  return v4;
}
