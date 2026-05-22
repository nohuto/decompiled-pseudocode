/*
 * XREFs of ?PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18018DFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079E78 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079F20 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18007F5FC (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

void __fastcall MPCSixDofProcessor::PopulateTargetingData(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputContext *v3; // r10
  int v5; // eax
  __int128 v6; // xmm0
  float *v7; // rax
  float *v8; // r10
  float *v9; // r8
  int v10; // xmm1_4
  float *v11; // r9
  float v12; // xmm1_4
  unsigned __int32 v13; // xmm1_4
  __int64 v14; // xmm0_8
  int v15; // eax
  __int64 v16; // xmm0_8
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  float *v20; // rax
  float *v21; // rax
  __m128 v22; // xmm3
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm3
  __int64 v26; // [rsp+20h] [rbp-29h] BYREF
  float v27; // [rsp+28h] [rbp-21h]
  float v28[2]; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int32 v29; // [rsp+38h] [rbp-11h]
  __int64 v30; // [rsp+40h] [rbp-9h] BYREF
  int v31; // [rsp+48h] [rbp-1h]
  __int128 v32; // [rsp+50h] [rbp+7h] BYREF
  _OWORD v33[4]; // [rsp+60h] [rbp+17h] BYREF

  *((_BYTE *)a3 + 48) = 1;
  v3 = a2;
  *((_DWORD *)a3 + 20) = *((_DWORD *)a3 + 179);
  *((_DWORD *)a3 + 21) = *((_DWORD *)this + 1256);
  if ( *((_BYTE *)a3 + 940) && *((_BYTE *)a3 + 941) )
  {
    v26 = 0LL;
    *((_BYTE *)this + 7585) = 1;
    v5 = *((_DWORD *)a3 + 234);
    v30 = *((_QWORD *)a3 + 116);
    v6 = *((_OWORD *)a3 + 57);
    v31 = v5;
    v27 = FLOAT_N1_0;
    v32 = v6;
    v7 = Windows::Foundation::Numerics::transform(v28, (float *)&v26, (float *)&v32);
    *(_QWORD *)&v6 = *(_QWORD *)v7;
    *(float *)&v7 = v7[2];
    v26 = v6;
    v27 = *(float *)&v7;
    Windows::Foundation::Numerics::transform((float *)&v32, (float *)&v30, v8);
    Windows::Foundation::Numerics::transform_normal(v28, (float *)&v26, v9);
    v10 = DWORD1(v32);
    *((_DWORD *)v11 + 30) = v32;
    LODWORD(v6) = DWORD2(v32);
    *((_DWORD *)v11 + 31) = v10;
    v12 = v28[0];
    *((_DWORD *)v11 + 32) = v6;
    *(float *)&v6 = v28[1];
    v11[33] = v12;
    v13 = v29;
    *((_DWORD *)v11 + 34) = v6;
    *((_DWORD *)v11 + 35) = v13;
  }
  else
  {
    *((_BYTE *)this + 7585) = 0;
    *((_BYTE *)a3 + 48) = 1;
    v14 = *((_QWORD *)a2 + 16);
    v31 = *((_DWORD *)a2 + 34);
    v27 = *((float *)a2 + 37);
    v15 = *((_DWORD *)a2 + 38);
    v30 = v14;
    v16 = *(_QWORD *)((char *)a2 + 140);
    *((_DWORD *)a3 + 30) = v15;
    *((_DWORD *)a3 + 31) = *((_DWORD *)a2 + 39);
    *((_DWORD *)a3 + 32) = *((_DWORD *)a2 + 40);
    *((_DWORD *)a3 + 33) = *((_DWORD *)a2 + 41);
    *((_DWORD *)a3 + 34) = *((_DWORD *)a2 + 42);
    *((_DWORD *)a3 + 35) = *((_DWORD *)a2 + 43);
    v26 = v16;
  }
  v17 = *(_OWORD *)((char *)v3 + 968);
  v33[0] = *(_OWORD *)((char *)v3 + 952);
  v18 = *(_OWORD *)((char *)v3 + 984);
  v33[1] = v17;
  v19 = *(_OWORD *)((char *)v3 + 1000);
  v33[2] = v18;
  v33[3] = v19;
  v20 = Windows::Foundation::Numerics::transform(v28, (float *)&v30, (float *)v33);
  *((_QWORD *)this + 638) = *(_QWORD *)v20;
  *((float *)this + 1278) = v20[2];
  v21 = Windows::Foundation::Numerics::transform_normal(v28, (float *)&v26, (float *)v33);
  *(_QWORD *)((char *)this + 5116) = *(_QWORD *)v21;
  *((float *)this + 1281) = v21[2];
  v22 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 5116), (__m128)*((unsigned int *)this + 1281));
  v23 = _mm_mul_ps(v22, v22);
  v24 = _mm_shuffle_ps(v23, v23, 102);
  v23.m128_f32[0] = (float)(v23.m128_f32[0] + v24.m128_f32[0]) + _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
  v25 = _mm_div_ps(v22, _mm_sqrt_ps(_mm_shuffle_ps(v23, v23, 0)));
  v29 = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
  LODWORD(v21) = v29;
  *(_QWORD *)((char *)this + 5116) = _mm_unpacklo_ps(v25, _mm_shuffle_ps(v25, v25, 85)).m128_u64[0];
  *((_DWORD *)this + 1281) = (_DWORD)v21;
}
