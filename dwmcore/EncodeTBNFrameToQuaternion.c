struct D2DQuaternion *__fastcall EncodeTBNFrameToQuaternion(struct D2DQuaternion *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm14_4
  float v5; // xmm15_4
  float v6; // xmm7_4
  float v7; // xmm13_4
  float v8; // xmm11_4
  float v10; // xmm12_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm2_4
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

  v4 = *a2;
  v5 = *a4;
  v6 = a2[2];
  v7 = a4[2];
  v8 = a4[1];
  v10 = a2[1];
  v11 = a3[1];
  v12 = *a3;
  v13 = a3[2];
  if ( (float)((float)((float)((float)((float)(*a2 * v7) - (float)(*a4 * v6)) * v11)
                     + (float)((float)((float)(v8 * v6) - (float)(v7 * v10)) * *a3))
             + (float)((float)((float)(*a4 * v10) - (float)(*a2 * v8)) * v13)) < 0.0 )
    v14 = FLOAT_N1_0;
  else
    v14 = *(float *)&FLOAT_1_0;
  v24[3] = 0;
  v24[7] = 0;
  v26 = 1065353216;
  *(float *)&v24[4] = v12 * v14;
  *(float *)&v24[5] = v11 * v14;
  *(float *)&v24[6] = v13 * v14;
  *(float *)v24 = v4;
  *(float *)&v24[1] = v10;
  *(float *)&v24[2] = v6;
  *(float *)&v24[8] = v5;
  *(float *)&v24[9] = v8;
  *(float *)&v24[10] = v7;
  v25 = 0LL;
  D3DXQuaternionRotationMatrix(a1, (const struct D2DMatrix *)v24);
  D3DXQuaternionNormalize(a1, a1);
  v15 = *((float *)a1 + 3);
  if ( v15 < 0.0 )
  {
    LODWORD(v22) = *(_DWORD *)a1 ^ _xmm;
    DWORD1(v22) = *((_DWORD *)a1 + 1) ^ _xmm;
    DWORD2(v22) = *((_DWORD *)a1 + 2) ^ _xmm;
    HIDWORD(v22) = LODWORD(v15) ^ _xmm;
    *(_OWORD *)a1 = v22;
  }
  v16 = FLOAT_0_000001;
  if ( *((float *)a1 + 3) < 0.000001 )
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
    v16 = *((float *)a1 + 3);
  }
  if ( v14 < 0.0 )
  {
    LODWORD(v23) = *(_DWORD *)a1 ^ _xmm;
    DWORD1(v23) = *((_DWORD *)a1 + 1) ^ _xmm;
    DWORD2(v23) = *((_DWORD *)a1 + 2) ^ _xmm;
    HIDWORD(v23) = LODWORD(v16) ^ _xmm;
    *(_OWORD *)a1 = v23;
  }
  return a1;
}
