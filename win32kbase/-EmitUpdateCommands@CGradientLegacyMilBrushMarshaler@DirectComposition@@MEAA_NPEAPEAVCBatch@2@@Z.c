/*
 * XREFs of ?EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A04C
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A280 (-EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C0252828 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetColorInterpolationModeCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0255BBC (-EmitSetColorInterpolationModeCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_N.c)
 *     ?EmitSetMappingModeCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0256B88 (-EmitSetMappingModeCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetSpreadMethodCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0258C7C (-EmitSetSpreadMethodCommand@CGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A218 (-EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CGradientLegacyMilBrushMarshaler::EmitSetColorInterpolationModeCommand(this, a2)
    && DirectComposition::CGradientLegacyMilBrushMarshaler::EmitSetMappingModeCommand(this, a2)
    && DirectComposition::CGradientLegacyMilBrushMarshaler::EmitSetSpreadMethodCommand(this, a2) )
  {
    return DirectComposition::CMarshaledArrayBase::Marshal(
             (_QWORD *)this + 13,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             4096,
             519,
             520,
             0x18uLL);
  }
  return v4;
}
