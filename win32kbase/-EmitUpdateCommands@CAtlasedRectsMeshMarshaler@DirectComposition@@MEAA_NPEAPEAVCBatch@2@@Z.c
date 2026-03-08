/*
 * XREFs of ?EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C0252828 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetIsHitTestVisibleCommand@CAtlasedRectsMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02569B4 (-EmitSetIsHitTestVisibleCommand@CAtlasedRectsMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetOpacityCommand@CAtlasedRectsMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257E3C (-EmitSetOpacityCommand@CAtlasedRectsMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::EmitUpdateCommands(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CAtlasedRectsMeshMarshaler::EmitSetIsHitTestVisibleCommand(this, a2)
    && DirectComposition::CAtlasedRectsMeshMarshaler::EmitSetOpacityCommand(this, a2)
    && DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 8,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         128,
         492,
         493,
         0x10uLL) )
  {
    return DirectComposition::CMarshaledArrayBase::Marshal(
             (_QWORD *)this + 11,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             256,
             494,
             495,
             0x10uLL);
  }
  return v4;
}
