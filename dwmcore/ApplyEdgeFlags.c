void __fastcall ApplyEdgeFlags(float *a1, int a2)
{
  float v2; // xmm0_4
  float *v3; // r8
  __int64 v4; // r9
  char v5; // dl
  float v6; // xmm0_4
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 v9; // dx
  float v10; // xmm0_4
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  float v14; // xmm0_4
  __int64 v15; // r8

  v2 = ApplyEdgeFlagsWorker_50331648_16777216_33554432_(a2, *a1, -0.5);
  *v3 = v2;
  v6 = ApplyEdgeFlagsWorker_3_1_2_(v5, *(float *)(v4 + 4), -0.5);
  *(float *)(v7 + 4) = v6;
  v10 = ApplyEdgeFlagsWorker_768_256_512_(v9, *(float *)(v8 + 8), 0.5);
  *(float *)(v11 + 8) = v10;
  v14 = ApplyEdgeFlagsWorker_196608_65536_131072_(v13, *(float *)(v12 + 12), 0.5);
  *(float *)(v15 + 12) = v14;
}
