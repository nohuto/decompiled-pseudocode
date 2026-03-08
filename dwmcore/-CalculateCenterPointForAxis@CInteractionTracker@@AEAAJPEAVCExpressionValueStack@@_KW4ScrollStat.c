/*
 * XREFs of ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18022DDB4
 * Callers:
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x180232960 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18012E95E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180224F4C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18022F3A8 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x180232B20 (-WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x180270ED8 (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1802711D0 (-GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditiona.c)
 */

__int64 __fastcall CInteractionTracker::CalculateCenterPointForAxis(
        float *a1,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        unsigned int a4,
        unsigned int a5,
        void *a6)
{
  float *v6; // rdi
  unsigned int v8; // ebx
  CConditionalExpression *SourceCenterpointModifierForActiveManipulation; // r10
  wchar_t *v11; // r11
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebp
  float MostRecentCenterPoint; // xmm0_4
  __int64 v17; // rcx
  _DWORD v19[10]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  bool v21; // [rsp+78h] [rbp+20h] BYREF

  v6 = (float *)a6;
  v8 = a5;
  SourceCenterpointModifierForActiveManipulation = 0LL;
  v11 = a3;
  if ( a4 == 1 )
  {
    SourceCenterpointModifierForActiveManipulation = (CConditionalExpression *)InteractionSourceManager::GetSourceCenterpointModifierForActiveManipulation(
                                                                                 a1 + 50,
                                                                                 a5);
  }
  else if ( a4 == 2 )
  {
    SourceCenterpointModifierForActiveManipulation = *(CConditionalExpression **)&a1[2 * a5 + 92];
  }
  v21 = 0;
  if ( !SourceCenterpointModifierForActiveManipulation )
    goto LABEL_9;
  v13 = CConditionalExpression::ProcessConditionalExpression(
          SourceCenterpointModifierForActiveManipulation,
          a2,
          v11,
          v8 != 2,
          &v21,
          v6);
  v15 = v13;
  if ( v13 >= 0 )
  {
    if ( v21 )
      return 0;
LABEL_9:
    if ( a4 == 2 )
    {
      if ( (unsigned __int8)CInteractionTracker::WasInertiaStartedByImpulse(a1) )
      {
        if ( v8 )
        {
          if ( v8 != 1 )
            ModuleFailFastForHRESULT(2147500037LL, retaddr);
          MostRecentCenterPoint = a1[134];
        }
        else
        {
          MostRecentCenterPoint = a1[133];
        }
        goto LABEL_24;
      }
    }
    else if ( a4 == 1 && InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 50)) )
    {
      InteractionSourceManager::GetActiveManipulationCenterpoint(v17, v19);
      if ( v8 )
      {
        if ( v8 != 1 )
          ModuleFailFastForHRESULT(2147500037LL, retaddr);
        MostRecentCenterPoint = *(float *)&v19[1];
      }
      else
      {
        MostRecentCenterPoint = *(float *)v19;
      }
      goto LABEL_24;
    }
    MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(a1, a4, v8);
LABEL_24:
    *v6 = MostRecentCenterPoint;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1759u, 0LL);
  return v15;
}
