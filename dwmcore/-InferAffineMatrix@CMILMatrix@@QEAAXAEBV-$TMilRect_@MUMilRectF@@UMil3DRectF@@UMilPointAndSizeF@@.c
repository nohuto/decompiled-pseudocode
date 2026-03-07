void __fastcall CMILMatrix::InferAffineMatrix(CMILMatrix *a1)
{
  float *v1; // r8
  float *v2; // rdx
  double v3; // xmm3_8
  float v4; // xmm0_4
  __int64 v5; // rcx
  float v6; // xmm0_4
  double v7; // xmm3_8
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4

  CMILMatrix::SetToIdentity(a1);
  v3 = (v1[2] - *v1) / (v2[2] - *v2);
  v4 = v3;
  *(float *)v5 = v4;
  v6 = *v1 - *v2 * v3;
  *(float *)(v5 + 48) = v6;
  v7 = (v1[3] - v1[1]) / (v2[3] - v2[1]);
  v8 = v7;
  *(float *)(v5 + 20) = v8;
  v9 = v2[1];
  v10 = v1[1];
  *(_BYTE *)(v5 + 64) &= 0xCCu;
  *(float *)(v5 + 52) = v10 - v9 * v7;
}
