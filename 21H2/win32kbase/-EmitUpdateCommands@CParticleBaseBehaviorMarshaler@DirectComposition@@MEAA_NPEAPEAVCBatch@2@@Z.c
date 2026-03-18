/*
 * XREFs of ?EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02248D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C021B59C (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetInputSourceCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02219D4 (-EmitSetInputSourceCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 */

char __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 8,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         32,
         532,
         533,
         0x18uLL) )
  {
    return DirectComposition::CParticleBaseBehaviorMarshaler::EmitSetInputSourceCommand(this, a2) != 0;
  }
  return v4;
}
