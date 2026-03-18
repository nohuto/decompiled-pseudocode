/*
 * XREFs of ?EmitUpdateCommands@CImageLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B790
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetAlignmentXCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216260 (-EmitSetAlignmentXCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetAlignmentYCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02162D4 (-EmitSetAlignmentYCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetCacheInvalidationThresholdMaximumCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216B24 (-EmitSetCacheInvalidationThresholdMaximumCommand@CImageLegacyMilBrushMarshaler@DirectComposition.c)
 *     ?EmitSetCacheInvalidationThresholdMinimumCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216B98 (-EmitSetCacheInvalidationThresholdMinimumCommand@CImageLegacyMilBrushMarshaler@DirectComposition.c)
 *     ?EmitSetCachingHintCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216C0C (-EmitSetCachingHintCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetImageSourceCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217D18 (-EmitSetImageSourceCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetStretchCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021A478 (-EmitSetStretchCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTileModeCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021AA3C (-EmitSetTileModeCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetViewboxAnimationCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021AF78 (-EmitSetViewboxAnimationCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetViewboxCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021AFFC (-EmitSetViewboxCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetViewboxUnitsCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B074 (-EmitSetViewboxUnitsCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetViewportAnimationCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B0E4 (-EmitSetViewportAnimationCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetViewportCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B168 (-EmitSetViewportCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetViewportUnitsCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B1E0 (-EmitSetViewportUnitsCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B8C0 (-EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CImageLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CImageLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewportUnitsCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewboxUnitsCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewportCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewportAnimationCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewboxCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetViewboxAnimationCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetStretchCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetTileModeCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetAlignmentXCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetAlignmentYCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetCachingHintCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetCacheInvalidationThresholdMinimumCommand(this, a2)
    && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetCacheInvalidationThresholdMaximumCommand(this, a2) )
  {
    return DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetImageSourceCommand(this, a2) != 0;
  }
  return v4;
}
