/*
 * XREFs of ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267B00
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5668 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0266BAC (-EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0266DB4 (-EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitDwmRestartCompleted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0266E58 (-EmitDwmRestartCompleted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0266ECC (-EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCallbackPropertyIdSet@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0266F88 (-EmitSetCallbackPropertyIdSet@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267008 (-EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPE.c)
 *     ?EmitSetInertiaDecayRates@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267118 (-EmitSetInertiaDecayRates@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02671B0 (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026728C (-EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026744C (-EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02674CC (-EmitSetMaxScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026754C (-EmitSetMinPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02675CC (-EmitSetMinScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267710 (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitDwmStarted(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetCallbackPropertyIdSet(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaDecayRates(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMinPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMaxPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMinScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMaxScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedInOrder(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaCenterpointAnimations(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaModifierAnimations(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetManipulations(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionShift(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitConfigureInternalProperties(this, a2) )
  {
    return DirectComposition::CInteractionTrackerMarshaler::EmitDwmRestartCompleted(this, a2) != 0;
  }
  return v4;
}
