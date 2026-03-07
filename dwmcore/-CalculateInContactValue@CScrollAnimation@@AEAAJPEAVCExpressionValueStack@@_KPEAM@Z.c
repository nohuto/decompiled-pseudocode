__int64 __fastcall CScrollAnimation::CalculateInContactValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  float v13; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 84) != 1 )
    CScrollAnimation::StartInContact(this);
  v7 = CScrollAnimation::CalculateInContactDelta(this, a2, a3, &v13);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x290u, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, __int64))(*(_QWORD *)this
                                                                                                 + 360LL))(
            this,
            a2,
            a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x292u, 0LL);
    else
      return 0;
  }
  return v9;
}
