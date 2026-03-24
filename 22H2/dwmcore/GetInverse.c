/*
 * XREFs of GetInverse @ 0x18026ADE4
 * Callers:
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x18026BA04 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInverse(float *a1, __int64 a2)
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
  if ( a1 == (float *)a2 )
    return 2147942487LL;
  v2 = (float)(*a1 * a1[3]) - (float)(a1[1] * a1[2]);
  if ( v2 == 0.0 )
    return 2147942487LL;
  result = 0LL;
  v4 = a1[5];
  v5 = a1[4];
  v6 = a1[1] / v2;
  *(float *)a2 = a1[3] / v2;
  v7 = a1[2] / v2;
  *(_DWORD *)(a2 + 4) = LODWORD(v6) ^ _xmm;
  v8 = v4 * a1[2];
  v9 = v4 * *a1;
  *(_DWORD *)(a2 + 8) = LODWORD(v7) ^ _xmm;
  *(float *)(a2 + 12) = *a1 / v2;
  v10 = v5 * a1[3];
  *(float *)(a2 + 20) = (float)((float)(v5 * a1[1]) - v9) / v2;
  *(float *)(a2 + 16) = (float)(v8 - v10) / v2;
  return result;
}
