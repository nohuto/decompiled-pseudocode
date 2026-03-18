/*
 * XREFs of ?EmitUpdateCommands@CParticleAttractorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224870
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOffsetCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0222B34 (-EmitSetOffsetCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRadiusCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022349C (-EmitSetRadiusCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetStrengthCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223AC4 (-EmitSetStrengthCommand@CParticleAttractorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
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
