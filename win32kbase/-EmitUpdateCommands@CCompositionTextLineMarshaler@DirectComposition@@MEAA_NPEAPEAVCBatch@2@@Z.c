/*
 * XREFs of ?EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259E40
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOffsetCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257A2C (-EmitSetOffsetCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetThicknessCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025932C (-EmitSetThicknessCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetWidthCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259C30 (-EmitSetWidthCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025B10C (-EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCompositionTextLineMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionTextLineMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CTextObjectMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CCompositionTextLineMarshaler::EmitSetOffsetCommand(this, a2)
    && DirectComposition::CCompositionTextLineMarshaler::EmitSetWidthCommand(this, a2) )
  {
    return DirectComposition::CCompositionTextLineMarshaler::EmitSetThicknessCommand(this, a2) != 0;
  }
  return v4;
}
