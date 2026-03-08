/*
 * XREFs of ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x180244038
 * Callers:
 *     ?GetRandomDirection@CParticleGenerator@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180243D04 (-GetRandomDirection@CParticleGenerator@@QEBA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenn.c)
 *     ?GetRandomOrientation@CParticleGenerator@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180243D60 (-GetRandomOrientation@CParticleGenerator@@QEBA-AUfloat4@Numerics@Foundation@Windows@@AEAV-$merse.c)
 * Callees:
 *     acosf_0 @ 0x1801176BC (acosf_0.c)
 *     cosf_0 @ 0x1801176F8 (cosf_0.c)
 *     sinf_0 @ 0x180117794 (sinf_0.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18023F9D0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x180243C5C (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ??8Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z @ 0x180243CD0 (--8Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x1802444C8 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

__int64 __fastcall GetRandomUnitDir(__int64 a1, __int64 a2, float *a3, float *a4, char a5)
{
  __m128 v9; // xmm3
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  __m128 v13; // xmm5
  __m128 v14; // xmm1
  double v15; // xmm0_8
  __m128 v16; // xmm3
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm3
  float v21; // xmm2_4
  float v22; // xmm5_4
  __m128 v23; // xmm4
  __m128 v24; // xmm2
  float v25; // xmm1_4
  float v26; // xmm3_4
  __m128 v27; // xmm0
  __m128 v28; // xmm4
  __m128 v29; // xmm4
  __m128 v30; // xmm3
  __m128 v31; // xmm1
  __m128 v32; // xmm4
  float v33; // xmm0_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  float v36; // xmm11_4
  float v37; // xmm12_4
  float v38; // xmm13_4
  float v39; // xmm10_4
  float v40; // xmm7_4
  float v41; // xmm9_4
  float v42; // xmm8_4
  float v43; // xmm7_4
  __m128 v44; // xmm7
  __m128 v45; // xmm2
  __m128 v46; // xmm1
  __m128 v47; // xmm7
  float v48; // xmm6_4
  float v49; // xmm0_4
  __int64 v51; // [rsp+28h] [rbp-51h] BYREF
  float v52; // [rsp+30h] [rbp-49h]
  __int64 v53; // [rsp+38h] [rbp-41h] BYREF
  float v54[34]; // [rsp+40h] [rbp-39h]

  v9 = (__m128)*((unsigned int *)a3 + 2);
  v10 = *(float *)&FLOAT_1_0;
  v11 = (float)((float)(*a3 * *a4) + (float)(a3[1] * a4[1])) + (float)(a3[2] * a4[2]);
  if ( v11 <= 1.0 )
  {
    if ( v11 >= -1.0 )
      v10 = (float)((float)(*a3 * *a4) + (float)(a3[1] * a4[1])) + (float)(a3[2] * a4[2]);
    else
      v10 = FLOAT_N1_0;
  }
  if ( v10 > 0.94999999 )
  {
    if ( a5 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a3;
      *(float *)(a1 + 8) = a3[2];
      return a1;
    }
    v51 = 0x3F80000000000000LL;
    v52 = 0.0;
    if ( Windows::Foundation::Numerics::operator==(a3, (float *)&v51) )
      v53 = 1065353216LL;
    else
      v53 = 0x3F80000000000000LL;
    v14 = v13;
    v51 = v53;
    v52 = 0.0;
    v14.m128_f32[0] = (float)(v13.m128_f32[0] * 0.0) - (float)(v9.m128_f32[0] * *((float *)&v53 + 1));
    v9.m128_f32[0] = (float)(v9.m128_f32[0] * *(float *)&v53) - (float)(v12 * 0.0);
    v15 = *(double *)_mm_unpacklo_ps(v14, v9).m128_u64;
    v16 = 0LL;
    *(double *)v16.m128_u64 = v15;
    v17 = _mm_movelh_ps(
            v16,
            (__m128)COERCE_UNSIGNED_INT((float)(v12 * *((float *)&v53 + 1)) - (float)(v13.m128_f32[0] * *(float *)&v53)));
    v18 = _mm_mul_ps(v17, v17);
    v19 = _mm_shuffle_ps(v18, v18, 102);
    v18.m128_f32[0] = (float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
    v20 = _mm_div_ps(v17, _mm_sqrt_ps(_mm_shuffle_ps(v18, v18, 0)));
    v53 = v20.m128_u64[0];
    LODWORD(v54[0]) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    v21 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2)
                + 0.0)
        * 6.2831855;
LABEL_12:
    Windows::Foundation::Numerics::make_quaternion_from_axis_angle((float *)&v51, (float *)&v53, v21);
    Windows::Foundation::Numerics::transform(a1, a3, &v51);
    return a1;
  }
  if ( v10 < -0.94999999 )
  {
    std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2);
    v53 = 0x3F80000000000000LL;
    v54[0] = 0.0;
    if ( Windows::Foundation::Numerics::operator==(a3, (float *)&v53) )
      v53 = 1065353216LL;
    else
      v53 = 0x3F80000000000000LL;
    v54[0] = 0.0;
    v23 = (__m128)*((unsigned int *)a3 + 2);
    v24 = (__m128)*((unsigned int *)a3 + 1);
    v25 = *a3;
    v51 = v53;
    v52 = 0.0;
    v26 = v24.m128_f32[0] * *(float *)&v53;
    v24.m128_f32[0] = (float)(v24.m128_f32[0] * 0.0) - (float)(v23.m128_f32[0] * *((float *)&v53 + 1));
    v23.m128_f32[0] = (float)(v23.m128_f32[0] * *(float *)&v53) - (float)(v25 * 0.0);
    v27 = v24;
    v21 = v22;
    v27.m128_u64[0] = _mm_unpacklo_ps(v27, v23).m128_u64[0];
    v28 = 0LL;
    v28.m128_u64[0] = v27.m128_u64[0];
    v54[0] = (float)(v25 * *((float *)&v53 + 1)) - v26;
    v29 = _mm_movelh_ps(v28, (__m128)LODWORD(v54[0]));
    v30 = _mm_mul_ps(v29, v29);
    v31 = _mm_shuffle_ps(v30, v30, 102);
    v30.m128_f32[0] = (float)(v30.m128_f32[0] + v31.m128_f32[0]) + _mm_shuffle_ps(v31, v31, 85).m128_f32[0];
    v32 = _mm_div_ps(v29, _mm_sqrt_ps(_mm_shuffle_ps(v30, v30, 0)));
    v53 = v32.m128_u64[0];
    LODWORD(v54[0]) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
    goto LABEL_12;
  }
  v33 = acosf_0(v10);
  v34 = v33;
  if ( !a5 )
    v34 = 12.566371 - v33;
  v35 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2);
  v36 = *a3;
  v37 = a3[1];
  v38 = a3[2];
  v39 = (float)(v35 + 0.0) * v34;
  v40 = a4[2];
  v42 = a4[1] - (float)(v37 * v10);
  *(float *)&v51 = *a4 - (float)(*a3 * v10);
  v41 = *(float *)&v51;
  *((float *)&v51 + 1) = v42;
  v43 = v40 - (float)(v38 * v10);
  v52 = v43;
  if ( *(float *)&v51 != 0.0 || v42 != 0.0 || v43 != 0.0 )
  {
    v44 = _mm_movelh_ps((__m128)(unsigned __int64)v51, (__m128)LODWORD(v52));
    v45 = _mm_mul_ps(v44, v44);
    v46 = _mm_shuffle_ps(v45, v45, 102);
    v45.m128_f32[0] = (float)(v45.m128_f32[0] + v46.m128_f32[0]) + _mm_shuffle_ps(v46, v46, 85).m128_f32[0];
    v47 = _mm_div_ps(v44, _mm_sqrt_ps(_mm_shuffle_ps(v45, v45, 0)));
    v53 = v47.m128_u64[0];
    v41 = v47.m128_f32[0];
    v42 = v47.m128_f32[1];
    LODWORD(v43) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
  }
  v48 = sinf_0(v39);
  v49 = cosf_0(v39);
  *(float *)a1 = (float)(v41 * v48) + (float)(v36 * v49);
  *(float *)(a1 + 4) = (float)(v42 * v48) + (float)(v37 * v49);
  *(float *)(a1 + 8) = (float)(v43 * v48) + (float)(v38 * v49);
  return a1;
}
