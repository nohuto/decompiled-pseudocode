/*
 * XREFs of ?EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetOffsetCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02190CC (-EmitSetOffsetCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetThicknessCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021A9CC (-EmitSetThicknessCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetWidthCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B2D0 (-EmitSetWidthCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021C7C0 (-EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
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
