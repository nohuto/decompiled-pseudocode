/*
 * XREFs of ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180271720
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x180231D6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmackdown@@@details@wil@@QEAA_NXZ @ 0x1801165B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmackdown@@@de.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180130A1A (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x180209554 (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180271E58 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInertia(InteractionSourceManager *this)
{
  struct CInteraction *ActiveInteraction; // rdi
  struct CManipulation *ActiveManipulation; // rbx
  float v4; // xmm3_4

  ActiveInteraction = InteractionSourceManager::GetActiveInteraction(this);
  if ( ActiveInteraction )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::GetImpl'::`2'::impl)
      || ActiveManipulation )
    {
      LODWORD(v4) = HIDWORD(*((_QWORD *)ActiveManipulation + 49));
      if ( COERCE_FLOAT(*(_OWORD *)((char *)ActiveManipulation + 392)) != 0.0 || v4 != 0.0 )
        CInteraction::ReportInertiaStart(
          (__int64)ActiveInteraction,
          HIDWORD(*((_QWORD *)ActiveManipulation + 53)),
          COERCE_FLOAT(*(_OWORD *)((char *)ActiveManipulation + 392)),
          v4);
    }
  }
}
