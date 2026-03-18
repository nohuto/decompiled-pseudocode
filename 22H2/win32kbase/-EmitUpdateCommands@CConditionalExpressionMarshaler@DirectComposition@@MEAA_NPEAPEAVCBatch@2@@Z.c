/*
 * XREFs of ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002A2A0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022482C (-EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ?EmitSetDefaultAnimation@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224988 (-EmitSetDefaultAnimation@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetSelection@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0224A1C (-EmitSetSelection@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CConditionalExpressionMarshaler::EmitAddConditionAnimationResources(this, a2)
    && DirectComposition::CConditionalExpressionMarshaler::EmitSetDefaultAnimation(this, a2) )
  {
    return DirectComposition::CConditionalExpressionMarshaler::EmitSetSelection(this, a2) != 0;
  }
  return v4;
}
