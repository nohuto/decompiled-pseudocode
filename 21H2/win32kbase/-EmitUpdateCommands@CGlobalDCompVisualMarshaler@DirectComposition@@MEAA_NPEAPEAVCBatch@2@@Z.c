/*
 * XREFs of ?EmitUpdateCommands@CGlobalDCompVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224820
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetBackgroundColorCommand@CGlobalDCompVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0220650 (-EmitSetBackgroundColorCommand@CGlobalDCompVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetDCompVisualPointerCommand@CGlobalDCompVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022100C (-EmitSetDCompVisualPointerCommand@CGlobalDCompVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 */

char __fastcall DirectComposition::CGlobalDCompVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CGlobalDCompVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGlobalDCompVisualMarshaler::EmitSetDCompVisualPointerCommand(this, a2) )
    return DirectComposition::CGlobalDCompVisualMarshaler::EmitSetBackgroundColorCommand(this, a2) != 0;
  return v4;
}
