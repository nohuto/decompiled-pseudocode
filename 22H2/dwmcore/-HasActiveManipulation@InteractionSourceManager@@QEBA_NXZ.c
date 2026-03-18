/*
 * XREFs of ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180132B0E
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180231494 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180233060 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x180235D98 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802649AC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180265738 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x180274608 (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x180274674 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x18027480C (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180274900 (-GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditiona.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x180274B30 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180274C0C (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x180274CA8 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180274CC8 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18027541C (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180275568 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

bool __fastcall InteractionSourceManager::HasActiveManipulation(InteractionSourceManager *this)
{
  char v1; // r9

  v1 = 0;
  if ( *((_QWORD *)this + 14) )
    return InteractionSourceManager::TryGetActiveManipulation(this) != 0LL;
  return v1;
}
