/*
 * XREFs of ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A218
 * Callers:
 *     ?EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A04C (-EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CImageLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A0F0 (-EmitUpdateCommands@CImageLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025AF80 (-EmitUpdateCommands@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EmitSetOpacityAnimationCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257DBC (-EmitSetOpacityAnimationCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetOpacityCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0257EAC (-EmitSetOpacityCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRelativeTransformCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0258738 (-EmitSetRelativeTransformCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetTransformCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259758 (-EmitSetTransformCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitSetOpacityCommand(this, a2)
    && DirectComposition::CLegacyMilBrushMarshaler::EmitSetOpacityAnimationCommand(this, a2)
    && DirectComposition::CLegacyMilBrushMarshaler::EmitSetTransformCommand(this, a2) )
  {
    return DirectComposition::CLegacyMilBrushMarshaler::EmitSetRelativeTransformCommand(this, a2) != 0;
  }
  return v4;
}
