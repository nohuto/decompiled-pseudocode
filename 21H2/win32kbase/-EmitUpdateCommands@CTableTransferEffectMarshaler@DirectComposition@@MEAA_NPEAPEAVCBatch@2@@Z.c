/*
 * XREFs of ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217F10
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C0215F34 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217D0C (-EmitData@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0217DB4 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 */

char __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // si

  if ( !DirectComposition::CEffectInputSet::EmitUpdateCommands(
          (__int64)this + 80,
          (__int64)a2,
          *((_DWORD *)this + 8),
          a2) )
    return 0;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitData(this, a2) )
    return 0;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 0) )
    return 0;
  v4 = 1;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 1u)
    || !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 2u)
    || !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 3u) )
  {
    return 0;
  }
  return v4;
}
