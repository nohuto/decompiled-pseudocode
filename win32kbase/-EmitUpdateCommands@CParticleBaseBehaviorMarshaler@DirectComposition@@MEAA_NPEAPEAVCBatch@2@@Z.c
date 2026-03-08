/*
 * XREFs of ?EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A440
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C0252828 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetInputSourceCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025685C (-EmitSetInputSourceCommand@CParticleBaseBehaviorMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 */

char __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 7,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         32,
         551,
         552,
         0x18uLL) )
  {
    return DirectComposition::CParticleBaseBehaviorMarshaler::EmitSetInputSourceCommand(this, a2) != 0;
  }
  return v4;
}
