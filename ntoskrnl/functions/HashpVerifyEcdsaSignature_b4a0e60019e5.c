__int64 __fastcall HashpVerifyEcdsaSignature(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // edi
  __int64 v8; // rbp
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 *v13; // rcx
  struct _SYMCRYPT_ECURVE **v14; // rbx
  struct _SYMCRYPT_ECURVE *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi

  v7 = 0;
  v8 = a3;
  v11 = a1 - 11777;
  if ( v11 )
  {
    if ( v11 != 1 )
      return (unsigned int)-1073740760;
    v13 = (__int64 *)SymCryptEcurveParamsNistP384;
    v14 = &g_pEcurveP384;
    v15 = g_pEcurveP384;
  }
  else
  {
    v13 = (__int64 *)SymCryptEcurveParamsNistP256;
    v14 = &g_pEcurveP256;
    v15 = g_pEcurveP256;
  }
  if ( !v15 )
  {
    v16 = SymCryptEcurveAllocate(v13);
    if ( !v16 )
      return (unsigned int)-1073741801;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14, v16, 0LL) )
      SymCryptEcurveFree(v16);
  }
  v17 = SymCryptEckeyAllocate((__int64)*v14);
  v18 = v17;
  if ( !v17 )
    return (unsigned int)-1073741801;
  if ( (unsigned int)SymCryptEckeySetValue(0LL, 0LL, a2, v8, 2u, 2, 0, v17) )
  {
    v12 = -1073740760;
  }
  else
  {
    if ( (unsigned int)SymCryptEcDsaVerify(v18, a4, a5, a6, a7, 2, 0) )
      v7 = -1073740760;
    v12 = v7;
  }
  SymCryptEckeyFree(v18);
  return v12;
}
