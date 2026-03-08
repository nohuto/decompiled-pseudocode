/*
 * XREFs of ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18026BED8
 * Callers:
 *     ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180262710 (-EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_.c)
 *     ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180262C50 (-EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmackdown@@@details@wil@@QEAA_NXZ @ 0x1801165B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Interaction_NullptrSmackdown@@@de.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180130A3E (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18022DD74 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18022F17C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18023207C (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18023213C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180271E58 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180272F98 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

char __fastcall CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  float CurrentValue; // xmm0_4
  int v8; // eax
  __int64 v9; // rbx
  struct CChainingHelper *ActiveChainingHelper; // rdi
  struct CManipulation *ActiveManipulation; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  char v15; // r11

  v3 = *(_QWORD *)(a1 + 584);
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, a2);
  v8 = CInteractionTracker::BoundaryFromValue(v3, CurrentValue, a2);
  if ( v8 != a3 )
  {
    v9 = *(_QWORD *)(a1 + 584);
    ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v9 + 200));
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v9 + 200));
    LOBYTE(v8) = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::GetImpl'::`2'::impl);
    if ( !(_BYTE)v8 || ActiveChainingHelper && ActiveManipulation )
    {
      CInteractionTracker::ShouldChainAllForAxis(v12, a2, (__int64)ActiveManipulation);
      LOBYTE(v14) = CInteractionTracker::ShouldChainForAxis(v13, a2, (__int64)ActiveManipulation, 1u);
      LOBYTE(v8) = CChainingHelper::RestoreSupportedInteractionsWithBoundaries(ActiveChainingHelper, a2, a3, v14, v15);
    }
  }
  return v8;
}
