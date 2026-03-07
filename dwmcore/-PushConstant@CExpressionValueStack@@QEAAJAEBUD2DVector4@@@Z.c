__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2DVector4 *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int128 v9; // xmm0

  v4 = CExpressionValueStack::EnsureAvailablePushSpace(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v5,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v4,
      0x1FEu,
      0LL);
  }
  else
  {
    v7 = *((unsigned int *)this + 4);
    *((_DWORD *)this + 4) = v7 + 1;
    v8 = *((_QWORD *)this + 3) + 80 * v7;
    *(_DWORD *)(v8 + 72) = 69;
    v9 = *(_OWORD *)a2;
    *(_BYTE *)(v8 + 76) = 1;
    *(_OWORD *)v8 = v9;
  }
  return v6;
}
