/*
 * XREFs of ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180009BC0
 * Callers:
 *     ??0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180008AEC (--0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x180008B48 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180009EAC (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x18000A0D4 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CVisualDepthGeometry::Init(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        const struct CMILMatrix *a3)
{
  int v3; // xmm2_4
  int v5; // xmm1_4
  _QWORD *v6; // rdi
  __int64 v7; // r8
  _QWORD *v8; // rdx
  FLOAT *p_y; // rcx
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  int v13; // r9d
  __int64 v14; // r11
  float *v15; // r8
  _OWORD *v16; // r10
  float v17; // xmm2_4
  int v18; // edx
  float v19; // xmm1_4
  const __m128i *v20; // rax
  float *v21; // rcx
  __int64 v22; // rdx
  __m128 v23; // xmm2
  __m128 v24; // xmm3
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  float v28; // xmm0_4
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  float v31; // xmm0_4
  float v32[6]; // [rsp+20h] [rbp-69h] BYREF
  float v33; // [rsp+38h] [rbp-51h]
  __int128 v34; // [rsp+40h] [rbp-49h] BYREF
  int v35; // [rsp+50h] [rbp-39h]
  int v36; // [rsp+54h] [rbp-35h]
  int v37; // [rsp+58h] [rbp-31h]
  int v38; // [rsp+5Ch] [rbp-2Dh]
  int v39; // [rsp+60h] [rbp-29h]
  int v40; // [rsp+64h] [rbp-25h]
  int v41; // [rsp+68h] [rbp-21h]
  int v42; // [rsp+6Ch] [rbp-1Dh]
  int v43; // [rsp+70h] [rbp-19h]
  int v44; // [rsp+74h] [rbp-15h]
  int v45; // [rsp+78h] [rbp-11h]
  int v46; // [rsp+7Ch] [rbp-Dh]
  D2D_VECTOR_4F v47; // [rsp+80h] [rbp-9h] BYREF
  struct D2D_VECTOR_4F v48; // [rsp+90h] [rbp+7h] BYREF
  struct D2D_VECTOR_4F v49; // [rsp+A0h] [rbp+17h] BYREF

  v3 = *(_DWORD *)a2;
  if ( COERCE_FLOAT(*(_DWORD *)a2 & _xmm) < 0.0000011920929 )
    v3 = (int)FLOAT_1_0;
  v5 = *((_DWORD *)a2 + 1);
  if ( COERCE_FLOAT(v5 & _xmm) < 0.0000011920929 )
    v5 = (int)FLOAT_1_0;
  v36 = 0;
  v37 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v35 = v3;
  v39 = v3;
  v40 = v5;
  v44 = v5;
  v34 = _xmm;
  v38 = 1065353216;
  v42 = 1065353216;
  v46 = 1065353216;
  CMILMatrix::Transform(a3, (const struct MilPoint4F *)&v34, (struct MilPoint4F *)&v47, 4u);
  v6 = (_QWORD *)((char *)this + 36);
  v7 = 4LL;
  v8 = (_QWORD *)((char *)this + 36);
  p_y = &v47.y;
  do
  {
    v10 = (__m128)(unsigned int)FLOAT_1_0;
    v10.m128_f32[0] = 1.0 / p_y[2];
    v11 = v10;
    v12 = v10;
    v11.m128_f32[0] = v10.m128_f32[0] * *(p_y - 1);
    v12.m128_f32[0] = v10.m128_f32[0] * *p_y;
    v10.m128_f32[0] = v10.m128_f32[0] * p_y[1];
    p_y += 4;
    *v8 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
    v8 = (_QWORD *)((char *)v8 + 12);
    v33 = v10.m128_f32[0];
    *((_DWORD *)v8 - 1) = v10.m128_i32[0];
    --v7;
  }
  while ( v7 );
  v13 = 1;
  v14 = 4LL;
  v15 = (float *)((char *)this + 40);
  v16 = (_OWORD *)((char *)this + 84);
  do
  {
    v17 = *v15;
    v18 = v13 % 4;
    v32[0] = *(v15 - 1);
    ++v13;
    v15 += 3;
    v32[1] = v17;
    v19 = *((float *)this + 3 * v18 + 10) - v17;
    v32[2] = *((float *)this + 3 * v18 + 9) - v32[0];
    v32[3] = v19;
    *v16++ = *(_OWORD *)v32;
    --v14;
  }
  while ( v14 );
  v20 = (const __m128i *)D2DVectorHelper::CalculatePlane(
                           (D2DVectorHelper *)v32,
                           &v47,
                           &v48,
                           &v49,
                           *(const struct D2D_VECTOR_4F **)v32);
  v21 = (float *)((char *)this + 56);
  v22 = 3LL;
  v23 = (__m128)_mm_loadu_si128(v20);
  v32[0] = v23.m128_f32[0];
  LODWORD(v32[1]) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
  LODWORD(v32[3]) = _mm_shuffle_ps(v23, v23, 255).m128_u32[0];
  LODWORD(v32[2]) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
  *((_OWORD *)this + 10) = *(_OWORD *)v32;
  v24 = (__m128)*(unsigned int *)v6;
  v25 = (__m128)*((unsigned int *)this + 13);
  v25.m128_f32[0] = (float)((float)(v25.m128_f32[0] + *((float *)this + 10)) + *((float *)this + 16))
                  + *((float *)this + 19);
  v24.m128_f32[0] = (float)((float)((float)(v24.m128_f32[0] + *((float *)this + 12)) + *((float *)this + 15))
                          + *((float *)this + 18))
                  * 0.25;
  v33 = (float)((float)((float)(*((float *)this + 14) + *((float *)this + 11)) + *((float *)this + 17))
              + *((float *)this + 20))
      * 0.25;
  *(float *)&v20 = v33;
  v25.m128_f32[0] = v25.m128_f32[0] * 0.25;
  *(_QWORD *)((char *)this + 148) = _mm_unpacklo_ps(v24, v25).m128_u64[0];
  *((_DWORD *)this + 39) = (_DWORD)v20;
  *((_QWORD *)this + 1) = *v6;
  *((_DWORD *)this + 4) = *((_DWORD *)this + 11);
  *(_QWORD *)((char *)this + 20) = *v6;
  *((_DWORD *)this + 7) = *((_DWORD *)this + 11);
  do
  {
    v26 = (__m128)*((unsigned int *)this + 2);
    v27 = (__m128)*((unsigned int *)this + 3);
    v26.m128_f32[0] = fminf(v26.m128_f32[0], *(v21 - 2));
    v27.m128_f32[0] = fminf(v27.m128_f32[0], *(v21 - 1));
    v28 = fminf(*((float *)this + 4), *v21);
    *((_QWORD *)this + 1) = _mm_unpacklo_ps(v26, v27).m128_u64[0];
    v33 = v28;
    *((float *)this + 4) = v28;
    v29 = (__m128)*((unsigned int *)this + 5);
    v30 = (__m128)*((unsigned int *)this + 6);
    v29.m128_f32[0] = fmaxf(v29.m128_f32[0], *(v21 - 2));
    v30.m128_f32[0] = fmaxf(v30.m128_f32[0], *(v21 - 1));
    v31 = fmaxf(*((float *)this + 7), *v21);
    v21 += 3;
    v32[2] = v31;
    *(_QWORD *)((char *)this + 20) = _mm_unpacklo_ps(v29, v30).m128_u64[0];
    *((float *)this + 7) = v31;
    --v22;
  }
  while ( v22 );
  *((_DWORD *)this + 8) = -1;
}
