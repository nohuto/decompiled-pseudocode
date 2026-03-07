__int64 *__fastcall CInputDest::CInputDest(__int64 *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __m128i *v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rax
  __int64 *result; // rax
  __m128i v16; // [rsp+30h] [rbp-D0h]
  __m128i v17; // [rsp+40h] [rbp-C0h]
  __m128i v18; // [rsp+50h] [rbp-B0h]
  __m128i v19; // [rsp+60h] [rbp-A0h]
  __m128i v20; // [rsp+70h] [rbp-90h]
  __m128i v21; // [rsp+80h] [rbp-80h]
  __int64 *v22[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v23[7]; // [rsp+A0h] [rbp-60h] BYREF

  memset(a1, 0, 0x70uLL);
  *((_BYTE *)a1 + 112) = 0;
  memset(v23, 0, sizeof(v23));
  if ( a3 == 2 )
  {
    if ( a4 == 2 )
    {
      v11 = ValidateHwndEx(a2, 1LL, 0LL, v10);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 246);
      v11 = HMValidateHandleNoSecure(a2, 1);
    }
    v12 = (__m128i *)INPUTDEST_FROM_PWND(v23, v11);
LABEL_8:
    v13 = v12[5];
    v16 = *v12;
    v17 = v12[1];
    v18 = v12[2];
    v19 = v12[3];
    v20 = v12[4];
    v21 = v12[6];
    goto LABEL_17;
  }
  if ( a3 == 1 )
  {
    if ( a4 == 2 )
    {
      v14 = ValidateHbwnd(a2, v8, v9, v10);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 260);
      v14 = HMValidateHandleNoSecure(a2, 23);
    }
    v12 = (__m128i *)INPUTDEST_FROM_BASEWND(v23, v14);
    goto LABEL_8;
  }
  v13 = (__m128i)v23[5];
  v21 = (__m128i)v23[6];
  v20 = (__m128i)v23[4];
  v19 = (__m128i)v23[3];
  v18 = (__m128i)v23[2];
  v17 = (__m128i)v23[1];
  v16 = (__m128i)v23[0];
LABEL_17:
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v13, 12)) )
  {
    if ( !v13.m128i_i64[0] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 272);
    v22[1] = (__int64 *)v13.m128i_i64[0];
    v22[0] = a1 + 10;
    HMAssignmentLock(v22, 0);
  }
  result = a1;
  *(__m128i *)a1 = v16;
  *((__m128i *)a1 + 1) = v17;
  *((__m128i *)a1 + 2) = v18;
  *((__m128i *)a1 + 3) = v19;
  *((__m128i *)a1 + 4) = v20;
  *((__m128i *)a1 + 5) = v13;
  *((__m128i *)a1 + 6) = v21;
  return result;
}
