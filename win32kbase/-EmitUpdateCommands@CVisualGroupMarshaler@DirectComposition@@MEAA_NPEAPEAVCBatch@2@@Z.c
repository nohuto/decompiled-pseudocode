/*
 * XREFs of ?EmitUpdateCommands@CVisualGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025B3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1C00AAE24 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 */

bool __fastcall DirectComposition::CVisualGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  return DirectComposition::CResourceMarshalerArrayBase::Marshal(
           (_QWORD *)this + 7,
           a2,
           *((_DWORD *)this + 8),
           (_DWORD *)this + 4,
           32,
           704,
           705);
}
