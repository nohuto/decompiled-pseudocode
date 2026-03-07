__int64 __fastcall CExpressionValueStack::EnsureAvailablePushSpace(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h] BYREF
  int v9; // [rsp+78h] [rbp-10h]
  char v10; // [rsp+7Ch] [rbp-Ch]

  if ( (unsigned int)~*((_DWORD *)this + 4) < 5 )
  {
    v2 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x52u,
      0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 12) == *((_DWORD *)this + 4) )
    {
      memset_0(v7, 0, sizeof(v7));
      v8 = 0LL;
      v9 = 18;
      v10 = 0;
      v5 = DynArray<CExpressionValue,1>::AddAndSet((char *)this + 24, v4, v7);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          v6,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v5,
          0x5Bu,
          0LL);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v8);
        return v2;
      }
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v8);
    }
    return 0;
  }
  return v2;
}
