__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, float a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r8

  v3 = CExpressionValueStack::EnsureAvailablePushSpace(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v4,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v3,
      0x1CBu,
      0LL);
  }
  else
  {
    v6 = *((unsigned int *)this + 4);
    *((_DWORD *)this + 4) = v6 + 1;
    v7 = *((_QWORD *)this + 3) + 80 * v6;
    *(float *)v7 = a2;
    *(_DWORD *)(v7 + 72) = 18;
    *(_BYTE *)(v7 + 76) = 1;
  }
  return v5;
}
