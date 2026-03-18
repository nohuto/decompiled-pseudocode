/*
 * XREFs of ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F9D8
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022FE00 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitApplyPositionImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022EDB4 (-EmitApplyPositionImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitApplyScaleImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022EFB0 (-EmitApplyScaleImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRequestedDeltaPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F914 (-EmitSetRequestedDeltaPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022FA70 (-EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022FB40 (-EmitSetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitSetRequestedScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022FC44 (-EmitSetRequestedScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022FCE8 (-EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedInOrder(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScale(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScaleAnimation(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPosition(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedDeltaPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPositionAnimation(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitApplyScaleImpulse(this, a2) )
  {
    return DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionImpulse(this, a2) != 0;
  }
  return v4;
}
