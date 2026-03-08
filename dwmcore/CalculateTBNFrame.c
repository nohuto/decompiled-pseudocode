/*
 * XREFs of CalculateTBNFrame @ 0x180006FFC
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x180006AEC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateTBNFrame(_QWORD *a1, _QWORD *a2, float *a3, float *a4, __int64 a5)
{
  float *v5; // rax
  float v6; // xmm6_4
  float v7; // xmm10_4
  float *v8; // rax
  float v9; // xmm6_4
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  float *v13; // rax
  float v14; // xmm11_4
  float v15; // xmm12_4
  float v16; // xmm4_4
  float v17; // xmm9_4
  float *v18; // rax
  float v19; // xmm4_4
  float v20; // xmm9_4
  float v21; // xmm5_4
  float v22; // xmm7_4
  float v23; // xmm2_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm4_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  __int64 result; // rax
  __int64 v31; // [rsp+0h] [rbp-88h]
  float v32; // [rsp+8h] [rbp-80h]

  v5 = (float *)a1[1];
  v6 = *v5;
  v7 = v5[1];
  v8 = (float *)a1[2];
  v9 = v6 - *(float *)*a1;
  v10 = v7 - *(float *)(*a1 + 4LL);
  v11 = *v8;
  v12 = v8[1];
  v13 = (float *)a2[1];
  v14 = v11 - *(float *)*a1;
  v15 = v12 - *(float *)(*a1 + 4LL);
  v16 = *v13;
  v17 = v13[1];
  v18 = (float *)a2[2];
  v19 = v16 - *(float *)*a2;
  v20 = v17 - *(float *)(*a2 + 4LL);
  v21 = *v18 - *(float *)*a2;
  v22 = v18[1] - *(float *)(*a2 + 4LL);
  v23 = (float)(v22 * v19) - (float)(v21 * v20);
  if ( COERCE_FLOAT(LODWORD(v23) & _xmm) >= 0.0000011920929 )
  {
    *(float *)&v31 = (float)((float)(v19 * v14) - (float)(v21 * v9)) * (float)(1.0 / v23);
    v26 = (float)((float)(v22 * v9) - (float)(v20 * v14)) * (float)(1.0 / v23);
    *((float *)&v31 + 1) = (float)((float)(v19 * v15) - (float)(v21 * v10)) * (float)(1.0 / v23);
    v24 = (float)((float)(v22 * v10) - (float)(v20 * v15)) * (float)(1.0 / v23);
    v32 = (float)((float)(v19 * 0.0) - (float)(v21 * 0.0)) * (float)(1.0 / v23);
    v25 = (float)((float)(v22 * 0.0) - (float)(v20 * 0.0)) * (float)(1.0 / v23);
  }
  else
  {
    v31 = 0x3F80000000000000LL;
    v24 = 0.0;
    v32 = 0.0;
    v25 = 0.0;
    v26 = *(float *)&FLOAT_1_0;
  }
  v27 = (float)((float)(a3[1] * v24) + (float)(*a3 * v26)) + (float)(a3[2] * v25);
  v28 = v24 - (float)(a3[1] * v27);
  v29 = v25 - (float)(a3[2] * v27);
  *a4 = v26 - (float)(*a3 * v27);
  a4[1] = v28;
  a4[2] = v29;
  result = LODWORD(v32);
  *(_QWORD *)a5 = v31;
  *(float *)(a5 + 8) = v32;
  return result;
}
