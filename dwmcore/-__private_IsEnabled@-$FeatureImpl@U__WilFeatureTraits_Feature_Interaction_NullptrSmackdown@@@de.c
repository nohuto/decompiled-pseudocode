/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmackdown@@@details@wil@@QEAA_NXZ @ 0x1801165B0
 * Callers:
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x180261F74 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18026BED8 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180271720 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmackdown@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180111E00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmack.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmackdown@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011561C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmackdown@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
