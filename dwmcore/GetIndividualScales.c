/*
 * XREFs of GetIndividualScales @ 0x1802B70D4
 * Callers:
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x1802B7D7C (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

__int64 __fastcall GetIndividualScales(float *a1, float *a2, float *a3)
{
  float v4; // xmm6_4
  float v6; // xmm7_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm0_4

  v4 = *a1;
  v6 = a1[2];
  v8 = sqrtf_0((float)(v4 * v4) + (float)(v6 * v6));
  *a2 = v8;
  if ( v8 == 0.0 )
    return 2147942487LL;
  v9 = a1[3];
  v10 = a1[1];
  v11 = v6 / v8;
  v12 = v4 / v8;
  v13 = sqrtf_0(
          (float)((float)(v9 - (float)(v11 * (float)((float)(v11 * v9) + (float)(v12 * v10))))
                * (float)(v9 - (float)(v11 * (float)((float)(v11 * v9) + (float)(v12 * v10)))))
        + (float)((float)(v10 - (float)(v12 * (float)((float)(v11 * v9) + (float)(v12 * v10))))
                * (float)(v10 - (float)(v12 * (float)((float)(v11 * v9) + (float)(v12 * v10))))));
  *a3 = v13;
  if ( v13 == 0.0 )
    return 2147942487LL;
  else
    return 0LL;
}
