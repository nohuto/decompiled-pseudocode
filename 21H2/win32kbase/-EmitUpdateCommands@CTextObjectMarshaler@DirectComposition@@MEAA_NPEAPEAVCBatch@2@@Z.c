/*
 * XREFs of ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022554C
 * Callers:
 *     ?EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224640 (-EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02246A0 (-EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitSetBaselineOriginCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02207C4 (-EmitSetBaselineOriginCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetBrushCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02208BC (-EmitSetBrushCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSnappingOffsetCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223958 (-EmitSetSnappingOffsetCommand@CTextObjectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
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
