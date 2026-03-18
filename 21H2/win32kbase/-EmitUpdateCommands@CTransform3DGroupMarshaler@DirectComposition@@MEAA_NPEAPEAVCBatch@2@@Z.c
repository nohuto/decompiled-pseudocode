/*
 * XREFs of ?EmitUpdateCommands@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02256A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1C0009C88 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0010F54 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CTransform3DGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CTransform3DGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CResourceMarshalerArrayBase::Marshal(
             (_QWORD *)this + 10,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             128,
             674,
             675);
  return v4;
}
