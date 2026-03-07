__int64 __fastcall ShadowHelpers::GetProjectionMatrix(__int64 a1, float *a2, _OWORD *a3, char a4)
{
  float v4; // xmm11_4
  float v5; // xmm12_4
  float v6; // xmm13_4
  float v7; // xmm10_4
  __int64 result; // rax
  float v9; // xmm8_4
  float v10[30]; // [rsp+0h] [rbp-78h]

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  *(_OWORD *)v10 = *a3;
  if ( a4 )
    v7 = *(float *)&FLOAT_1_0;
  else
    v7 = 0.0;
  *(_DWORD *)(a1 + 64) = 0;
  result = a1;
  *(float *)(a1 + 8) = v6 * v10[0];
  *(float *)(a1 + 16) = v4 * v10[1];
  *(float *)(a1 + 28) = v7 * v10[1];
  *(float *)(a1 + 36) = v5 * v10[2];
  LODWORD(v9) = COERCE_UNSIGNED_INT(
                  (float)((float)((float)(v4 * v10[0]) + (float)(v5 * v10[1])) + (float)(v6 * v10[2]))
                + (float)(v7 * v10[3])) ^ _xmm;
  *(float *)a1 = (float)(v4 * v10[0]) + v9;
  *(float *)(a1 + 52) = v5 * v10[3];
  *(float *)(a1 + 4) = v5 * v10[0];
  *(float *)(a1 + 44) = v7 * v10[2];
  *(float *)(a1 + 12) = v7 * v10[0];
  *(float *)(a1 + 56) = v6 * v10[3];
  *(float *)(a1 + 24) = v6 * v10[1];
  *(float *)(a1 + 48) = v4 * v10[3];
  *(float *)(a1 + 60) = (float)(v7 * v10[3]) + v9;
  *(float *)(a1 + 32) = v4 * v10[2];
  *(float *)(a1 + 20) = (float)(v5 * v10[1]) + v9;
  *(float *)(a1 + 40) = (float)(v6 * v10[2]) + v9;
  return result;
}
