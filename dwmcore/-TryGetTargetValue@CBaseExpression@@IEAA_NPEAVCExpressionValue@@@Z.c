char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  __int64 v2; // rax
  char v3; // bl
  CBaseExpression *v4; // r9
  int v5; // eax
  unsigned int v6; // ecx

  v2 = *((_QWORD *)this + 23);
  v3 = 0;
  v4 = this;
  if ( v2 && (this = *(CBaseExpression **)(v2 + 16)) != 0LL )
  {
    v5 = (*(__int64 (__fastcall **)(CBaseExpression *, _QWORD, struct CExpressionValue *))(*(_QWORD *)this + 136LL))(
           this,
           *((unsigned int *)v4 + 48),
           a2);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802EB310, 2u, v5, 0x554u, 0LL);
    else
      return 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802EB310, 2u, -2147024890, 0x553u, 0LL);
  }
  return v3;
}
