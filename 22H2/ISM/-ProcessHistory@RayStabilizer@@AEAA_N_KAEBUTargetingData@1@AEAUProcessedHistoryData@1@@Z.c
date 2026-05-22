/*
 * XREFs of ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x1800862A8
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180085930 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     fmodf_0 @ 0x18004B213 (fmodf_0.c)
 *     sqrtf_0 @ 0x18004B22B (sqrtf_0.c)
 *     ?DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1800858E4 (-DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800868BC (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x180086EE8 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

bool __fastcall RayStabilizer::ProcessHistory(
        RayStabilizer *this,
        __int64 a2,
        const struct RayStabilizer::TargetingData *a3,
        struct RayStabilizer::ProcessedHistoryData *a4)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  float v10; // xmm11_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm7_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm6_4
  float v26; // xmm1_4
  float v27; // xmm7_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  bool result; // al
  float v31; // xmm0_4
  float v32; // xmm8_4
  float v33; // xmm9_4
  float v34; // xmm10_4
  float v35; // xmm7_4
  float v36; // xmm0_4
  float v37; // xmm6_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  __int64 v42; // [rsp+28h] [rbp-99h] BYREF
  __int64 v43; // [rsp+30h] [rbp-91h]
  __int64 v44; // [rsp+38h] [rbp-89h] BYREF
  int v45; // [rsp+40h] [rbp-81h]
  __int128 v46; // [rsp+48h] [rbp-79h] BYREF
  __int64 v47; // [rsp+58h] [rbp-69h]
  __int128 v48; // [rsp+68h] [rbp-59h] BYREF
  __int64 v49; // [rsp+78h] [rbp-49h]
  float v50; // [rsp+88h] [rbp-39h] BYREF
  float v51; // [rsp+8Ch] [rbp-35h]
  float v52; // [rsp+90h] [rbp-31h]
  __int64 v53; // [rsp+94h] [rbp-2Dh]
  int v54; // [rsp+9Ch] [rbp-25h]
  float v55; // [rsp+A0h] [rbp-21h]
  float v56; // [rsp+A4h] [rbp-1Dh]

  *((_DWORD *)a4 + 6) = 0;
  *((_DWORD *)a4 + 2) = 0;
  *((_DWORD *)a4 + 14) = 0;
  *((_DWORD *)a4 + 10) = 0;
  v8 = *((_QWORD *)this + 3);
  v9 = v8 + *((_QWORD *)this + 4);
  *(_DWORD *)a4 = 0x800000;
  v10 = 0.0;
  *((_DWORD *)a4 + 4) = 0x800000;
  *((_DWORD *)a4 + 8) = 0x800000;
  *((_DWORD *)a4 + 12) = 0x800000;
  *((_DWORD *)a4 + 1) = 2139095039;
  *((_DWORD *)a4 + 5) = 2139095039;
  *((_DWORD *)a4 + 9) = 2139095039;
  *((_DWORD *)a4 + 13) = 2139095039;
  while ( v8 != v9 )
  {
    RayStabilizationResult::GetAtStep(
      *(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v8 & (*((_QWORD *)this + 2) - 1LL))),
      &v46,
      a2);
    v48 = v46;
    v49 = v47;
    if ( (unsigned __int8)RayStabilizer::TransformRay(&v48, &v50) )
    {
      v10 = v10 + 1.0;
      LODWORD(v11) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(v51 - *((float *)a3 + 1)) * (float)(v51 - *((float *)a3 + 1)))
                             + (float)((float)(v50 - *(float *)a3) * (float)(v50 - *(float *)a3)))
                     + (float)((float)(v52 - *((float *)a3 + 2)) * (float)(v52 - *((float *)a3 + 2)))) & _xmm;
      LODWORD(v12) = COERCE_UNSIGNED_INT(fmodf_0(*((float *)a3 + 6) - v55, 360.0)) & _xmm;
      v13 = fmodf_0(*((float *)a3 + 7) - v56, 360.0);
      v14 = *((_DWORD *)a3 + 5);
      v42 = *(_QWORD *)((char *)a3 + 12);
      LODWORD(v15) = LODWORD(v13) & _xmm;
      LODWORD(v43) = v14;
      v44 = v53;
      v45 = v54;
      v16 = RayStabilizer::DeltaAngle((float *)&v44, (float *)&v42);
      v17 = fminf(*(float *)a4, v11);
      v18 = fmaxf(*((float *)a4 + 1), v11);
      v19 = v11 + *((float *)a4 + 2);
      v20 = fminf(*((float *)a4 + 12), v15);
      *(float *)a4 = v17;
      v21 = fminf(*((float *)a4 + 8), v12);
      *((float *)a4 + 1) = v18;
      v22 = *((float *)a4 + 9);
      *((float *)a4 + 12) = v20;
      v23 = fmaxf(v22, v12);
      v24 = *((float *)a4 + 4);
      v25 = v12 + *((float *)a4 + 10);
      *((float *)a4 + 8) = v21;
      v26 = fmaxf(*((float *)a4 + 13), v15);
      *((float *)a4 + 2) = v19;
      v27 = v15 + *((float *)a4 + 14);
      *((float *)a4 + 9) = v23;
      *((float *)a4 + 10) = v25;
      *((float *)a4 + 4) = fminf(v24, v16);
      *((float *)a4 + 13) = v26;
      v28 = fmaxf(*((float *)a4 + 5), v16);
      *((float *)a4 + 14) = v27;
      v29 = v16 + *((float *)a4 + 6);
      *((float *)a4 + 5) = v28;
      *((float *)a4 + 6) = v29;
    }
    ++v8;
  }
  if ( v10 == 0.0 )
    return 0;
  v31 = *(float *)a4;
  v32 = *((float *)a4 + 10) / v10;
  v33 = *((float *)a4 + 14) / v10;
  v34 = *((float *)a4 + 6) / v10;
  *((float *)a4 + 10) = v32;
  *((float *)a4 + 14) = v33;
  *((float *)a4 + 6) = v34;
  v35 = sqrtf_0(v31);
  v36 = *((float *)a4 + 1);
  *(float *)a4 = v35;
  v37 = sqrtf_0(v36);
  v38 = *((float *)a4 + 2) / v10;
  *((float *)a4 + 1) = v37;
  v39 = sqrtf_0(v38);
  v40 = *((float *)a4 + 13) - *((float *)a4 + 12);
  *((float *)a4 + 2) = v39;
  result = 1;
  *((float *)a4 + 3) = (float)(v39 + v39) + (float)(v37 - v35);
  v41 = *((float *)a4 + 9) - *((float *)a4 + 8);
  *((float *)a4 + 15) = v40 + (float)(v33 + v33);
  *((float *)a4 + 11) = v41 + (float)(v32 + v32);
  *((float *)a4 + 7) = (float)(*((float *)a4 + 5) - *((float *)a4 + 4)) + (float)(v34 + v34);
  return result;
}
