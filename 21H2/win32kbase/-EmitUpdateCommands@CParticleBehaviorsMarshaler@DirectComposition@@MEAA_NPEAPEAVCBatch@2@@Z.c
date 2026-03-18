/*
 * XREFs of ?EmitUpdateCommands@CParticleBehaviorsMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224950
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetAngularVelocityCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022047C (-EmitSetAngularVelocityCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetDirectionCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022107C (-EmitSetDirectionCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetForceCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022167C (-EmitSetForceCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetLifetimeCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0221B9C (-EmitSetLifetimeCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOpacityCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0222E54 (-EmitSetOpacityCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOrientationCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0222ED8 (-EmitSetOrientationCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetPositionCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02232B8 (-EmitSetPositionCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223700 (-EmitSetScaleCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSizeCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02238D4 (-EmitSetSizeCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSpeedCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223A44 (-EmitSetSpeedCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTintCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02240FC (-EmitSetTintCommand@CParticleBehaviorsMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CParticleBehaviorsMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleBehaviorsMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CParticleBehaviorsMarshaler::EmitSetPositionCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetDirectionCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetSpeedCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetAngularVelocityCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetOrientationCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetTintCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetOpacityCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetForceCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetScaleCommand(this, a2)
    && DirectComposition::CParticleBehaviorsMarshaler::EmitSetSizeCommand(this, a2) )
  {
    return DirectComposition::CParticleBehaviorsMarshaler::EmitSetLifetimeCommand(this, a2) != 0;
  }
  return v4;
}
