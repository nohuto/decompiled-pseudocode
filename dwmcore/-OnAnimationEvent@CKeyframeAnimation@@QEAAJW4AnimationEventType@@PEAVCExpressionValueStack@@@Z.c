__int64 __fastcall CKeyframeAnimation::OnAnimationEvent(__int64 a1, int a2, struct CExpressionValueStack *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  CKeyframeAnimation *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 580) & 0x20) == 0 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( !v7 )
        {
          if ( *(_DWORD *)(a1 + 288) != 4 )
            CBaseExpression::NotifyAnimationStarted((CBaseExpression *)a1);
          if ( CKeyframeAnimation::IsWaiting((CKeyframeAnimation *)a1) )
            return 0;
          v9 = CKeyframeAnimation::SampleExpressionsAndStartingValue(v8, a3);
          v11 = v9;
          if ( v9 >= 0 )
            return 0;
          v13 = 1900;
LABEL_19:
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v13, 0LL);
          return v11;
        }
        if ( v7 != 28 )
        {
          v11 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x776u, 0LL);
          return v11;
        }
      }
      else
      {
        v9 = CBaseExpression::NotifyAnimationStopped((CBaseExpression *)a1);
        v11 = v9;
        if ( v9 < 0 )
        {
          v13 = 1883;
          goto LABEL_19;
        }
      }
    }
    else
    {
      v9 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)a1);
      v11 = v9;
      if ( v9 < 0 )
      {
        v13 = 1879;
        goto LABEL_19;
      }
    }
  }
  return 0;
}
