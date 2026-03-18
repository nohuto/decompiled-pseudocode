/*
 * XREFs of ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180275568
 * Callers:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180132B0E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802649AC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180265738 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180266E50 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1802674B0 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18026F618 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x180274608 (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x180274674 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x18027480C (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180274900 (-GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditiona.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x180274B30 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180274C0C (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180274D94 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180274E50 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18027541C (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18027559C (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CManipulation *__fastcall InteractionSourceManager::TryGetActiveManipulation(InteractionSourceManager *this)
{
  struct CManipulation *result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 14) )
    return *(struct CManipulation **)(*(_QWORD *)(*((_QWORD *)this + 11)
                                                + 8 * ((*((_QWORD *)this + 12) - 1LL) & (*((_QWORD *)this + 13) >> 1)))
                                    + 8 * (*((_QWORD *)this + 13) & 1LL));
  return result;
}
