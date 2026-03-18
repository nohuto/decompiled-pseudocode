/*
 * XREFs of ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x180232AB4
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180231494 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180266A50 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180266B50 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180266F20 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

float __fastcall CInteractionTracker::GetMostRecentCenterPoint(__int64 a1, int a2, int a3)
{
  int v4; // edx
  __int64 v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v5 = 164LL;
  }
  else
  {
    v5 = 156LL;
  }
  if ( !a3 )
    return *(float *)(a1 + v5);
  if ( a3 != 1 )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  return *(float *)(a1 + v5 + 4);
}
