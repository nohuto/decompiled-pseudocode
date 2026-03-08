/*
 * XREFs of ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025B170
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063B90 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1C00AAE24 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 */

char __fastcall DirectComposition::CTextVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 47,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 112,
         2,
         688,
         689)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 50,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 112,
         4,
         690,
         691) )
  {
    return DirectComposition::CResourceMarshalerArrayBase::Marshal(
             (_QWORD *)this + 53,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 112,
             8,
             692,
             693);
  }
  return v4;
}
