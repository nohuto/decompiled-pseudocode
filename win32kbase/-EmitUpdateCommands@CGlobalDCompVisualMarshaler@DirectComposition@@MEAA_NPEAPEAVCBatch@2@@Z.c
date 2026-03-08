/*
 * XREFs of ?EmitUpdateCommands@CGlobalDCompVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A000
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetBackgroundColorCommand@CGlobalDCompVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0255198 (-EmitSetBackgroundColorCommand@CGlobalDCompVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetDCompVisualHandleCommand@CGlobalDCompVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0255D18 (-EmitSetDCompVisualHandleCommand@CGlobalDCompVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

char __fastcall DirectComposition::CGlobalDCompVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CGlobalDCompVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGlobalDCompVisualMarshaler::EmitSetDCompVisualHandleCommand(this, a2) )
    return DirectComposition::CGlobalDCompVisualMarshaler::EmitSetBackgroundColorCommand(this, a2) != 0;
  return v4;
}
