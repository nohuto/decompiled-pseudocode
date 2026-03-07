bool __fastcall Windows::Foundation::Numerics::invert(
        Windows::Foundation::Numerics *this,
        __m128 *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm5_4
  float v7; // xmm15_4
  float v8; // xmm14_4
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm6_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm14_4
  float v25; // xmm15_4
  float v26; // xmm7_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  bool result; // al
  __m128 v34; // xmm0
  float v35; // [rsp+0h] [rbp-D8h]
  float v36; // [rsp+4h] [rbp-D4h]
  float v37; // [rsp+8h] [rbp-D0h]
  float v38; // [rsp+Ch] [rbp-CCh]
  float v39; // [rsp+10h] [rbp-C8h]
  float v40; // [rsp+14h] [rbp-C4h]
  float v41; // [rsp+18h] [rbp-C0h]
  float v42; // [rsp+20h] [rbp-B8h]
  float v43; // [rsp+24h] [rbp-B4h]
  float v44; // [rsp+28h] [rbp-B0h]
  float v45; // [rsp+E0h] [rbp+8h]
  float v46; // [rsp+F0h] [rbp+18h]
  float v47; // [rsp+F8h] [rbp+20h]

  v3 = *((float *)this + 10);
  v4 = *((float *)this + 11);
  v5 = *((float *)this + 9);
  v6 = *((float *)this + 8);
  v35 = *(float *)this;
  v45 = *((float *)this + 1);
  v46 = *((float *)this + 2);
  v47 = *((float *)this + 3);
  v37 = *((float *)this + 7);
  v7 = *((float *)this + 14);
  v8 = *((float *)this + 15);
  v38 = *((float *)this + 12);
  v9 = (float)(v8 * v3) - (float)(v7 * v4);
  v44 = v6;
  v40 = *((float *)this + 13);
  v10 = (float)(v8 * v5) - (float)(v40 * v4);
  v42 = v3;
  v43 = v5;
  v11 = (float)(v7 * v5) - (float)(v40 * v3);
  v41 = *((float *)this + 4);
  v39 = *((float *)this + 5);
  v12 = (float)(v8 * v6) - (float)(v38 * v4);
  v36 = *((float *)this + 6);
  v13 = (float)(v7 * v6) - (float)(v38 * v3);
  v14 = (float)(v40 * v6) - (float)(v38 * v5);
  v15 = (float)((float)(v9 * v39) - (float)(v10 * v36)) + (float)(v11 * v37);
  LODWORD(v16) = COERCE_UNSIGNED_INT((float)((float)(v9 * v41) - (float)(v12 * v36)) + (float)(v13 * v37)) ^ _xmm;
  v17 = (float)((float)(v10 * v41) - (float)(v12 * v39)) + (float)(v14 * v37);
  LODWORD(v18) = COERCE_UNSIGNED_INT((float)((float)(v11 * v41) - (float)(v13 * v39)) + (float)(v14 * v36)) ^ _xmm;
  v19 = (float)((float)((float)(v16 * v45) + (float)(v15 * *(float *)this)) + (float)(v17 * v46)) + (float)(v18 * v47);
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm) < 0.0000001192092895507812 )
  {
    result = 0;
    v34 = _mm_shuffle_ps(DirectX::g_XMQNaN, DirectX::g_XMQNaN, 0);
    *a2 = v34;
    a2[1] = v34;
    a2[2] = v34;
    a2[3] = v34;
  }
  else
  {
    v20 = 1.0 / v19;
    a2->m128_f32[0] = (float)(1.0 / v19) * v15;
    a2[1].m128_f32[0] = (float)(1.0 / v19) * v16;
    a2[2].m128_f32[0] = (float)(1.0 / v19) * v17;
    a2[3].m128_f32[0] = (float)(1.0 / v19) * v18;
    a2->m128_f32[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 * v45) - (float)(v10 * v46)) + (float)(v11 * v47)) ^ _xmm)
                    * (float)(1.0 / v19);
    a2[1].m128_f32[1] = (float)((float)((float)(v9 * v35) - (float)(v12 * v46)) + (float)(v13 * v47))
                      * (float)(1.0 / v19);
    a2[2].m128_f32[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 * v35) - (float)(v12 * v45)) + (float)(v14 * v47)) ^ _xmm)
                      * (float)(1.0 / v19);
    v21 = (float)(v8 * v36) - (float)(v7 * v37);
    a2[3].m128_f32[1] = (float)((float)((float)(v11 * v35) - (float)(v13 * v45)) + (float)(v14 * v46))
                      * (float)(1.0 / v19);
    v22 = (float)(v8 * v39) - (float)(v40 * v37);
    v23 = (float)(v7 * v39) - (float)(v40 * v36);
    v24 = (float)(v8 * v41) - (float)(v38 * v37);
    v25 = (float)(v7 * v41) - (float)(v38 * v36);
    v26 = (float)(v40 * v41) - (float)(v38 * v39);
    a2->m128_f32[2] = (float)((float)((float)(v21 * v45) - (float)(v22 * v46)) + (float)(v23 * v47)) * v20;
    a2[1].m128_f32[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v21 * v35) - (float)(v24 * v46)) + (float)(v25 * v47)) ^ _xmm)
                      * v20;
    a2[2].m128_f32[2] = (float)((float)((float)(v22 * v35) - (float)(v24 * v45)) + (float)(v26 * v47)) * v20;
    a2[3].m128_f32[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v23 * v35) - (float)(v25 * v45)) + (float)(v26 * v46)) ^ _xmm)
                      * v20;
    v27 = (float)(v4 * v36) - (float)(v42 * v37);
    v28 = (float)(v4 * v39) - (float)(v43 * v37);
    v29 = (float)(v42 * v39) - (float)(v43 * v36);
    v30 = (float)(v4 * v41) - (float)(v44 * v37);
    v31 = (float)(v42 * v41) - (float)(v44 * v36);
    v32 = (float)(v43 * v41) - (float)(v44 * v39);
    result = 1;
    a2->m128_f32[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v27 * v45) - (float)(v28 * v46)) + (float)(v29 * v47)) ^ _xmm)
                    * v20;
    a2[2].m128_f32[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v28 * v35) - (float)(v30 * v45)) + (float)(v32 * v47)) ^ _xmm)
                      * v20;
    a2[1].m128_f32[3] = (float)((float)((float)(v27 * v35) - (float)(v30 * v46)) + (float)(v31 * v47)) * v20;
    a2[3].m128_f32[3] = (float)((float)((float)(v29 * v35) - (float)(v31 * v45)) + (float)(v32 * v46)) * v20;
  }
  return result;
}
