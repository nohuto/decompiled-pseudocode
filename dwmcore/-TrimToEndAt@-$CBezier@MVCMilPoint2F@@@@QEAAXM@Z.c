/*
 * XREFs of ?TrimToEndAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1802AC5CC
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x1802AC128 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x1802AC524 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CBezier<float,CMilPoint2F>::TrimToEndAt(float *a1, float a2)
{
  _UNKNOWN **result; // rax
  float v3; // xmm0_4
  float v4; // xmm5_4
  float v6; // xmm8_4
  float v7; // xmm2_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm3_4
  float v21; // xmm7_4
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a1[4];
  v4 = a2 * a1[7];
  v6 = 1.0 - a2;
  v7 = v3 * a2;
  v8 = (float)(a2 * a1[6]) + (float)(v3 * (float)(1.0 - a2));
  v9 = (float)(1.0 - a2) * a1[5];
  a1[6] = v8;
  v10 = v4 + v9;
  v11 = v8 * a2;
  a1[7] = v10;
  v12 = v10 * a2;
  v13 = (float)(a2 * a1[5]) + (float)((float)(1.0 - a2) * a1[3]);
  v14 = a1[2] * a2;
  v15 = (float)(a1[2] * v6) + v7;
  a1[5] = v13;
  v16 = (float)(v6 * a1[1]) + (float)(a2 * a1[3]);
  v17 = (float)(v6 * *a1) + v14;
  v18 = v15;
  v19 = (float)(v13 * v6) + v12;
  a1[3] = v16;
  a1[2] = v17;
  a1[7] = v19;
  v20 = (float)(v16 * v6) + (float)(a2 * a1[5]);
  v21 = (float)(v15 * a2) + (float)(v17 * v6);
  a1[5] = v20;
  a1[4] = v21;
  a1[7] = (float)(v20 * v6) + (float)(v19 * a2);
  a1[6] = (float)(v21 * v6) + (float)((float)((float)(v18 * v6) + v11) * a2);
  return result;
}
