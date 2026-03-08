/*
 * XREFs of ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x180232960
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180263A80 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180263B90 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18022DDB4 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteractionTracker::UpdateCenterPointForState(
        float *a1,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        unsigned int a4)
{
  float *v8; // rsi
  _QWORD *v9; // r15
  _QWORD *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( a4 == 1 )
  {
    v8 = a1 + 39;
    v10 = a1 + 39;
    v9 = a1 + 41;
  }
  else
  {
    if ( a4 != 2 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v8 = a1 + 41;
    v9 = a1 + 41;
    v10 = a1 + 39;
  }
  v11 = CInteractionTracker::CalculateCenterPointForAxis(a1, a2, a3, a4, 0, v8);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1710u, 0LL);
  }
  else
  {
    v14 = CInteractionTracker::CalculateCenterPointForAxis(a1, a2, a3, a4, 1u, v8 + 1);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1712u, 0LL);
    }
    else if ( a4 == 1 )
    {
      *v9 = *v10;
    }
  }
  return v13;
}
