/*
 * XREFs of ?EmitUpdateCommands@CSynchronousSuperWetInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DB800
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetPerFrameDataAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D9384 (-EmitSetPerFrameDataAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@.c)
 *     ?EmitSetPerFrameDataAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D93F4 (-EmitSetPerFrameDataAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AE.c)
 *     ?EmitSetPerFrameDataSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D9464 (-EmitSetPerFrameDataSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEA.c)
 *     ?EmitSetPerFrameDataSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D94E8 (-EmitSetPerFrameDataSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEA.c)
 *     ?EmitSetReferenceSurfaceCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D9964 (-EmitSetReferenceSurfaceCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEA.c)
 *     ?EmitSetTipPointSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DA674 (-EmitSetTipPointSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetTipPointsAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DA6E4 (-EmitSetTipPointsAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEA.c)
 *     ?EmitSetTipPointsAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DA754 (-EmitSetTipPointsAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitSetTipPointsSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DA7C4 (-EmitSetTipPointsSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition@@AEAA_N.c)
 */

char __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::EmitUpdateCommands(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetReferenceSurfaceCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointsSharedSectionCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointsAllocationOffsetCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointsAllocationSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetTipPointSizeCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataSharedSectionCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataAllocationOffsetCommand(this, a2)
    && DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataAllocationSizeCommand(this, a2) )
  {
    return DirectComposition::CSynchronousSuperWetInkMarshaler::EmitSetPerFrameDataSizeCommand(this, a2) != 0;
  }
  return v4;
}
