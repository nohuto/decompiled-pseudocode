/*
 * XREFs of ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026500C
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802649AC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180264BEC (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180264DE0 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180265028 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z @ 0x1802652D0 (-PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180265368 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180265540 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x180265694 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180265738 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180266A50 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180266B50 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180266D10 (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z @ 0x180266DC0 (-InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x180266DF0 (-IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180266E50 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180266F20 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180267180 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180267290 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1802673AC (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1802674B0 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x180267540 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     <none>
 */

struct CInteractionTracker *__fastcall CScrollAnimation::GetInteractionTracker(CScrollAnimation *this)
{
  struct CInteractionTracker *result; // rax

  result = (struct CInteractionTracker *)*((_QWORD *)this + 44);
  if ( result )
    return (struct CInteractionTracker *)*((_QWORD *)result + 2);
  return result;
}
