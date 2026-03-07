__int64 __fastcall CProjectedShadowApproxBlurEffect::SetAnimatableProperty(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        _BYTE *a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx

  *a5 = 0;
  *a6 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x4Fu, 0LL);
      return v6;
    }
    *(_DWORD *)(a1 + 44) = *a4;
  }
  else
  {
    *(_OWORD *)(a1 + 28) = *(_OWORD *)a4;
  }
  ++*(_DWORD *)(a1 + 48);
  return 0;
}
