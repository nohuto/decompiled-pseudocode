/*
 * XREFs of ?EmitUpdateCommands@CFloodEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02175D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C0215F34 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CFloodEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217548 (-EmitData@CFloodEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CFloodEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CFloodEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CEffectInputSet::EmitUpdateCommands(
         (__int64)this + 80,
         (__int64)a2,
         *((_DWORD *)this + 8),
         a2) )
  {
    return DirectComposition::CFloodEffectMarshaler::EmitData(this, a2) != 0;
  }
  return v4;
}
