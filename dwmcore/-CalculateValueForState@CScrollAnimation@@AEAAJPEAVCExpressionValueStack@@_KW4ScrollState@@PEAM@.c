__int64 __fastcall CScrollAnimation::CalculateValueForState(
        CScrollAnimation *a1,
        struct CExpressionValueStack *a2,
        __int64 a3,
        int a4,
        float *a5)
{
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v5 = a4 - 1;
  if ( !v5 )
  {
    v9 = CScrollAnimation::CalculateInContactValue(a1, a2, a3, a5);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x13Cu, 0LL);
      return v8;
    }
    return 0;
  }
  if ( v5 != 1 )
  {
    *a5 = 0.0;
    return 0;
  }
  v6 = CScrollAnimation::CalculateInertiaValue(a1, a2, a3, a5);
  v8 = v6;
  if ( v6 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x145u, 0LL);
  return v8;
}
