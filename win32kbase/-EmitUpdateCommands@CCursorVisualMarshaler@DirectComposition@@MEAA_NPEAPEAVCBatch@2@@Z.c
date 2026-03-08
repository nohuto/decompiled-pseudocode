/*
 * XREFs of ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063B90 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCursorIdCommand@CCursorVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0255CA0 (-EmitSetCursorIdCommand@CCursorVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIsHardwareCursorEnabledCommand@CCursorVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025693C (-EmitSetIsHardwareCursorEnabledCommand@CCursorVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitSetCursorIdCommand(this, a2) )
  {
    return DirectComposition::CCursorVisualMarshaler::EmitSetIsHardwareCursorEnabledCommand(this, a2) != 0;
  }
  return v4;
}
