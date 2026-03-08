/*
 * XREFs of ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025AD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1C00AAE24 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 *     ?EmitSetTransformCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259858 (-EmitSetTransformCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSceneNodeMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 7,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         32,
         652,
         653)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 10,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         64,
         654,
         655) )
  {
    return DirectComposition::CSceneNodeMarshaler::EmitSetTransformCommand(this, a2) != 0;
  }
  return v4;
}
