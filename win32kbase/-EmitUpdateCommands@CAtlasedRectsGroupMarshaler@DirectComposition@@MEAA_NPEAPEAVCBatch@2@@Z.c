/*
 * XREFs of ?EmitUpdateCommands@CAtlasedRectsGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1C00AAE24 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 *     ?EmitSetImageSourceCommand@CAtlasedRectsGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02565F8 (-EmitSetImageSourceCommand@CAtlasedRectsGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CAtlasedRectsGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CAtlasedRectsGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CAtlasedRectsGroupMarshaler::EmitSetImageSourceCommand(this, a2) )
    return DirectComposition::CResourceMarshalerArrayBase::Marshal(
             (_QWORD *)this + 8,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             64,
             488,
             489);
  return v4;
}
