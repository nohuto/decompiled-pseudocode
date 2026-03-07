__int64 __fastcall GetInverse(float *a1, float *a2)
{
  float v2; // xmm4_4
  __int64 result; // rax
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4

  if ( !a2 )
    return 2147942487LL;
  if ( a1 == a2 )
    return 2147942487LL;
  v2 = (float)(*a1 * a1[3]) - (float)(a1[1] * a1[2]);
  if ( v2 == 0.0 )
    return 2147942487LL;
  result = 0LL;
  v4 = a1[5];
  v5 = a1[4];
  v6 = COERCE_FLOAT(*((_DWORD *)a1 + 1) ^ _xmm) / v2;
  *a2 = a1[3] / v2;
  v7 = COERCE_FLOAT(*((_DWORD *)a1 + 2) ^ _xmm) / v2;
  a2[1] = v6;
  v8 = v4 * a1[2];
  v9 = v4 * *a1;
  a2[2] = v7;
  a2[3] = *a1 / v2;
  v10 = v5 * a1[3];
  a2[5] = (float)((float)(v5 * a1[1]) - v9) / v2;
  a2[4] = (float)(v8 - v10) / v2;
  return result;
}
