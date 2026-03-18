/*
 * XREFs of ?EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetGenerateShortestAngleBetweenDirectionsCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217BB4 (-EmitSetGenerateShortestAngleBetweenDirectionsCommand@CParticleGeneratorMarshaler@DirectComposit.c)
 *     ?EmitSetGenerateUniformSizesCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217C24 (-EmitSetGenerateUniformSizesCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitSetMaxAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218310 (-EmitSetMaxAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetMaxDirectionCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02183FC (-EmitSetMaxDirectionCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetMaxLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218478 (-EmitSetMaxLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetMaxOpacityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02184EC (-EmitSetMaxOpacityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetMaxOrientationCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218560 (-EmitSetMaxOrientationCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetMaxSizeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02186D0 (-EmitSetMaxSizeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxSpeedCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218754 (-EmitSetMaxSpeedCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxTintCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02187C4 (-EmitSetMaxTintCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218938 (-EmitSetMinAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetMinDirectionCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218A24 (-EmitSetMinDirectionCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetMinLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218AA0 (-EmitSetMinLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetMinOpacityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218B14 (-EmitSetMinOpacityCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetMinOrientationCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218B88 (-EmitSetMinOrientationCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetMinSizeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218C7C (-EmitSetMinSizeCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinSpeedCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218D00 (-EmitSetMinSpeedCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinTintCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218D70 (-EmitSetMinTintCommand@CParticleGeneratorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CParticleGeneratorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CParticleGeneratorMarshaler::EmitSetMinDirectionCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxDirectionCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetGenerateShortestAngleBetweenDirectionsCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinSpeedCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxSpeedCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinAngularVelocityCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxAngularVelocityCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinOrientationCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxOrientationCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinTintCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxTintCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinOpacityCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxOpacityCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinSizeCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxSizeCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetGenerateUniformSizesCommand(this, a2)
    && DirectComposition::CParticleGeneratorMarshaler::EmitSetMinLifetimeCommand(this, a2) )
  {
    return DirectComposition::CParticleGeneratorMarshaler::EmitSetMaxLifetimeCommand(this, a2) != 0;
  }
  return v4;
}
