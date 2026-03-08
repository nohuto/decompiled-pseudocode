/*
 * XREFs of ?EmitUpdateCommands@CParticleAttractorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOffsetCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257A9C (-EmitSetOffsetCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRadiusCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02585D0 (-EmitSetRadiusCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetStrengthCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0258D68 (-EmitSetStrengthCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CParticleAttractorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleAttractorMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CParticleAttractorMarshaler::EmitSetOffsetCommand(this, a2)
    && DirectComposition::CParticleAttractorMarshaler::EmitSetRadiusCommand(this, a2) )
  {
    return DirectComposition::CParticleAttractorMarshaler::EmitSetStrengthCommand(this, a2) != 0;
  }
  return v4;
}
