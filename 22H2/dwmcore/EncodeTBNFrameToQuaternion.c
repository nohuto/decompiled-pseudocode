/*
 * XREFs of EncodeTBNFrameToQuaternion @ 0x180021958
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180021658 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180021BF8 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800C78EC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F3FDB (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall EncodeTBNFrameToQuaternion(struct D2DQuaternion *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm12_4
  float v5; // xmm14_4
  float v6; // xmm11_4
  float v7; // xmm13_4
  float v9; // xmm15_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  __int128 v22; // [rsp+28h] [rbp-E0h]
  __int128 v23; // [rsp+28h] [rbp-E0h]
  _DWORD v24[11]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+64h] [rbp-A4h]
  int v26; // [rsp+74h] [rbp-94h]

  v4 = a4[1];
  v5 = a4[2];
  v6 = a2[2];
  v7 = a2[1];
  v9 = *a2;
  v10 = a3[1];
  v11 = *a3;
  v12 = a3[2];
  if ( (float)((float)((float)(v10 * (float)((float)(*a2 * v5) - (float)(*a4 * v6)))
                     + (float)(*a3 * (float)((float)(v4 * v6) - (float)(v5 * v7))))
             + (float)(v12 * (float)((float)(*a4 * v7) - (float)(*a2 * v4)))) < 0.0 )
    v13 = FLOAT_N1_0;
  else
    v13 = *(float *)&FLOAT_1_0;
  v14 = *a4;
  v24[3] = 0;
  v24[7] = 0;
  v26 = 1065353216;
  *(float *)&v24[8] = v14;
  *(float *)&v24[4] = v11 * v13;
  *(float *)&v24[5] = v10 * v13;
  *(float *)&v24[6] = v12 * v13;
  v25 = 0LL;
  *(float *)v24 = v9;
  *(float *)&v24[1] = v7;
  *(float *)&v24[2] = v6;
  *(float *)&v24[9] = v4;
  *(float *)&v24[10] = v5;
  D3DXQuaternionRotationMatrix(a1, (const struct D2DMatrix *)v24);
  D3DXQuaternionNormalize(a1, a1);
  v15 = *((float *)a1 + 3);
  if ( v15 < 0.0 )
  {
    HIDWORD(v23) = LODWORD(v15) ^ _xmm;
    LODWORD(v23) = *(_DWORD *)a1 ^ _xmm;
    DWORD1(v23) = *((_DWORD *)a1 + 1) ^ _xmm;
    DWORD2(v23) = *((_DWORD *)a1 + 2) ^ _xmm;
    *(_OWORD *)a1 = v23;
    v15 = *((float *)a1 + 3);
  }
  v16 = FLOAT_0_000001;
  if ( v15 < 0.000001 )
  {
    v18 = sqrtf_0(1.0);
    *((_DWORD *)a1 + 3) = 897988541;
    v19 = v18 * *(float *)a1;
    v20 = v18 * *((float *)a1 + 1);
    v21 = v18 * *((float *)a1 + 2);
    *(float *)a1 = v19;
    *((float *)a1 + 1) = v20;
    *((float *)a1 + 2) = v21;
  }
  else
  {
    v16 = v15;
  }
  if ( v13 < 0.0 )
  {
    LODWORD(v22) = *(_DWORD *)a1 ^ _xmm;
    DWORD1(v22) = *((_DWORD *)a1 + 1) ^ _xmm;
    DWORD2(v22) = *((_DWORD *)a1 + 2) ^ _xmm;
    HIDWORD(v22) = LODWORD(v16) ^ _xmm;
    *(_OWORD *)a1 = v22;
  }
  return a1;
}
