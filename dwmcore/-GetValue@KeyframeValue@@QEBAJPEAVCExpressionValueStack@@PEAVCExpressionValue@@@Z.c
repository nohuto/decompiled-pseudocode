__int64 __fastcall KeyframeValue::GetValue(
        KeyframeValue *this,
        struct CExpressionValueStack *a2,
        struct CExpressionValue *a3)
{
  int SampledStartingValue; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rcx
  CBaseExpression *v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  const struct CExpressionValue *v13; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  bool v16; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 5) == 1 )
  {
    v13 = (KeyframeValue *)((char *)this + 24);
    goto LABEL_15;
  }
  if ( *((_DWORD *)this + 5) == 2 )
  {
    v7 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 8) >= *(_DWORD *)(v7 + 424) )
    {
      v6 = -2147467259;
      v8 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x6C6u, 0LL);
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4Au, 0LL);
      return v6;
    }
    v10 = *(CBaseExpression **)(*(_QWORD *)(v7 + 400) + 8LL * *((unsigned int *)this + 8));
    v11 = CBaseExpression::CalculateValue(v10, a2, *(_QWORD *)(v7 + 168), &v16);
    v8 = v11;
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x6CDu, 0LL);
      goto LABEL_12;
    }
    v13 = (CBaseExpression *)((char *)v10 + 72);
LABEL_15:
    CExpressionValue::CopyFrom(a3, v13);
    return 0;
  }
  if ( *((_DWORD *)this + 5) != 3 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  SampledStartingValue = CKeyframeAnimation::GetSampledStartingValue(*((CKeyframeAnimation **)this + 3), a3);
  v6 = SampledStartingValue;
  if ( SampledStartingValue >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, SampledStartingValue, 0x50u, 0LL);
  return v6;
}
