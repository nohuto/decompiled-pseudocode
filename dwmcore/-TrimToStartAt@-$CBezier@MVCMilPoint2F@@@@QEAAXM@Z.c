/*
 * XREFs of ?TrimToStartAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1802AC724
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x1802AC128 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x1802AC524 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CBezier<float,CMilPoint2F>::TrimToStartAt(float *a1, float a2)
{
  _UNKNOWN **result; // rax
  float v3; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a2 * a1[3];
  v5 = 1.0 - a2;
  v6 = a1[2] * (float)(1.0 - a2);
  v7 = (float)(1.0 - a2) * a1[1];
  *a1 = (float)((float)(1.0 - a2) * *a1) + (float)(a1[2] * a2);
  v8 = v3 + v7;
  a1[1] = v8;
  v9 = (float)(1.0 - a2) * a1[3];
  v10 = v8 * (float)(1.0 - a2);
  v11 = a1[4] * (float)(1.0 - a2);
  v12 = (float)(a1[4] * a2) + v6;
  v13 = a2 * a1[5];
  a1[2] = v12;
  v14 = v13 + v9;
  v15 = v12;
  v16 = v12 * (float)(1.0 - a2);
  v17 = v15 * a2;
  a1[3] = v14;
  v18 = a2 * a1[6];
  v19 = a2 * a1[7];
  v20 = v11 + v18;
  v21 = v5 * a1[5];
  a1[4] = v20;
  v22 = v10 + (float)(v14 * a2);
  v23 = v16 + (float)(v20 * a2);
  a1[5] = v19 + v21;
  *a1 = v17 + (float)(v5 * *a1);
  a1[1] = v22;
  v24 = a2 * a1[5];
  v25 = v5 * a1[3];
  a1[2] = v23;
  v26 = v25 + v24;
  a1[3] = v26;
  *a1 = (float)(v23 * a2) + (float)(v5 * *a1);
  a1[1] = (float)(v22 * v5) + (float)(v26 * a2);
  return result;
}
