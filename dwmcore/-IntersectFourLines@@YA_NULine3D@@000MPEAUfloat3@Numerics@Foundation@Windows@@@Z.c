/*
 * XREFs of ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180215D08
 * Callers:
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x18021554C (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180215E8C (-IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

bool __fastcall IntersectFourLines(__int128 *a1, __int128 *a2, __int128 *a3, __int128 *a4, float a5, float *a6)
{
  __int64 v7; // xmm1_8
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  char v11; // al
  __int64 v12; // xmm1_8
  __int128 v13; // xmm0
  char v14; // si
  __int64 v15; // xmm1_8
  __int64 v16; // r8
  char v17; // cl
  float v18; // xmm6_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm10_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v27; // [rsp+28h] [rbp-79h] BYREF
  float v28; // [rsp+2Ch] [rbp-75h]
  float v29; // [rsp+30h] [rbp-71h]
  __int128 v30; // [rsp+38h] [rbp-69h] BYREF
  __int64 v31; // [rsp+48h] [rbp-59h]
  __int128 v32; // [rsp+58h] [rbp-49h] BYREF
  __int64 v33; // [rsp+68h] [rbp-39h]
  __int128 v34; // [rsp+78h] [rbp-29h] BYREF
  __int64 v35; // [rsp+88h] [rbp-19h]

  v7 = *((_QWORD *)a2 + 2);
  v30 = *a2;
  v9 = *a1;
  v31 = v7;
  v10 = *((_QWORD *)a1 + 2);
  v32 = v9;
  v33 = v10;
  v11 = IntersectTwoLines(&v32, &v30, a3, &v27);
  v12 = *((_QWORD *)a4 + 2);
  v32 = *a4;
  v13 = *a3;
  v33 = v12;
  v14 = v11;
  v15 = *((_QWORD *)a3 + 2);
  v34 = v13;
  v35 = v15;
  v17 = IntersectTwoLines(&v34, &v32, v16, &v30);
  v18 = v27;
  v19 = v28;
  v20 = v29;
  v21 = *(float *)&v30;
  v22 = *((float *)&v30 + 1);
  v23 = *((float *)&v30 + 2);
  v24 = (float)(v28 + *((float *)&v30 + 1)) * 0.5;
  v25 = (float)(v29 + *((float *)&v30 + 2)) * 0.5;
  *a6 = (float)(v27 + *(float *)&v30) * 0.5;
  a6[1] = v24;
  a6[2] = v25;
  return v14
      && v17
      && a5 > sqrtf_0(
                (float)((float)((float)(v19 - v22) * (float)(v19 - v22))
                      + (float)((float)(v18 - v21) * (float)(v18 - v21)))
              + (float)((float)(v20 - v23) * (float)(v20 - v23)));
}
