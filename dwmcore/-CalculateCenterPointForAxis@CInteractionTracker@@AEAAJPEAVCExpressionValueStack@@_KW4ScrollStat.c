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
