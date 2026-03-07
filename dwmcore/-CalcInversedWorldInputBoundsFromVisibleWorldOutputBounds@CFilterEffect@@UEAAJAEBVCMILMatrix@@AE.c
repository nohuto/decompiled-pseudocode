__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 *a1,
        __int64 a2,
        float *a3,
        __int128 *a4,
        _DWORD *a5,
        float *a6)
{
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  __int128 v23; // [rsp+40h] [rbp-58h] BYREF

  *a5 = 0;
  a5[1] = 0;
  a5[2] = 0;
  a5[3] = 0;
  v10 = *a1;
  v23 = *a4;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v10 + 248))(a1, &v23, a2);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x166u, 0LL);
    goto LABEL_16;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, float *, __int128 *, _DWORD *, float *))(*a1 + 240))(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6);
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, result, 0x16Eu, 0LL);
LABEL_16:
    result = 0LL;
    *(_OWORD *)a5 = *a4;
    *(_OWORD *)a6 = *(_OWORD *)a3;
    return result;
  }
  v15 = *a3;
  v16 = *a6;
  if ( *a3 > *a6 )
  {
    *a6 = v15;
    v16 = v15;
  }
  v17 = a3[1];
  v18 = a6[1];
  if ( v17 > v18 )
  {
    a6[1] = v17;
    v18 = v17;
  }
  v19 = a3[2];
  v20 = a6[2];
  if ( v20 > v19 )
  {
    a6[2] = v19;
    v20 = v19;
  }
  v21 = a3[3];
  v22 = a6[3];
  if ( v22 > v21 )
  {
    a6[3] = v21;
    v22 = v21;
  }
  if ( v20 <= v16 || v22 <= v18 )
  {
    a6[3] = 0.0;
    a6[2] = 0.0;
    a6[1] = 0.0;
    *a6 = 0.0;
  }
  return result;
}
