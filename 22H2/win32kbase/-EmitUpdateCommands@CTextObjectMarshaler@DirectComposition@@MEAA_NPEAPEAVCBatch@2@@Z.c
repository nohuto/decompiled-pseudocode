/*
 * XREFs of ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021C7C0
 * Callers:
 *     ?EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B480 (-EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B4E0 (-EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitSetBaselineOriginCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02169AC (-EmitSetBaselineOriginCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetBrushCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216AA4 (-EmitSetBrushCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSnappingOffsetCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021A1B0 (-EmitSetSnappingOffsetCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CTextObjectMarshaler::EmitUpdateCommands(
        DirectComposition::CTextObjectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CTextObjectMarshaler::EmitSetBrushCommand(this, a2)
    && DirectComposition::CTextObjectMarshaler::EmitSetBaselineOriginCommand(this, a2) )
  {
    return DirectComposition::CTextObjectMarshaler::EmitSetSnappingOffsetCommand(this, a2) != 0;
  }
  return v4;
}
