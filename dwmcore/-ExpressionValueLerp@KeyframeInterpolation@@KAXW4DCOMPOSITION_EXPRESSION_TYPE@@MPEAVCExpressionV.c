void __fastcall KeyframeInterpolation::ExpressionValueLerp(int a1, float a2, __int64 a3, __int64 a4, __int64 a5)
{
  CInterpolatePathsOperation *v7; // rcx
  int v8; // ecx
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  int v12; // ecx
  float v13; // xmm0_4
  int v14; // ecx
  int v15; // ecx
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  int v19; // ecx
  int v20; // ecx
  __m128 v21; // xmm5
  __m128 v22; // xmm6
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  __int64 v29; // rdi
  float v30; // xmm5_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  unsigned int v38; // xmm1_4
  __m128 v39; // xmm2
  float v40; // xmm1_4
  __m128 v41; // xmm3
  float v42; // xmm1_4
  unsigned int v43; // xmm0_4
  float v44; // xmm0_4
  const struct CPathData *v45; // r8
  const struct CPathData *v46; // rdx
  int v47; // eax
  struct CPathData *v48; // rdx
  __m128 v49; // [rsp+30h] [rbp-30h]
  struct CPathData *v50; // [rsp+40h] [rbp-20h] BYREF
  float v51; // [rsp+48h] [rbp-18h]
  float v52; // [rsp+4Ch] [rbp-14h]
  void *retaddr; // [rsp+78h] [rbp+18h]

  if ( a1 != *(_DWORD *)(a3 + 72) || a1 != *(_DWORD *)(a4 + 72) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v7 = (CInterpolatePathsOperation *)(unsigned int)(a1 - 11);
  if ( (_DWORD)v7 )
  {
    v8 = (_DWORD)v7 - 7;
    if ( v8 )
    {
      v12 = v8 - 17;
      if ( v12 )
      {
        v14 = v12 - 7;
        if ( v14 )
        {
          v15 = v14 - 10;
          if ( v15 )
          {
            v19 = v15 - 17;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                if ( v20 != 1 )
                  ModuleFailFastForHRESULT(2147942487LL, retaddr);
                v29 = 0LL;
                v30 = *(float *)a3;
                v31 = *(float *)a4 - *(float *)a3;
                *((float *)&v50 + 1) = *(float *)(a4 + 4) - *(float *)(a3 + 4);
                v32 = *(float *)(a4 + 12) - *(float *)(a3 + 12);
                *(float *)&v50 = v31;
                v33 = *(float *)(a4 + 8) - *(float *)(a3 + 8);
                v52 = v32;
                v51 = v33;
                do
                {
                  v49.m128_f32[v29] = a2 * *(float *)((char *)&v50 + v29 * 4);
                  ++v29;
                }
                while ( v29 < 4 );
                v34 = v49.m128_f32[0] + v30;
                v35 = v49.m128_f32[1] + *(float *)(a3 + 4);
                v36 = v49.m128_f32[2] + *(float *)(a3 + 8);
                v37 = v49.m128_f32[3] + *(float *)(a3 + 12);
                *(_DWORD *)(a5 + 72) = 71;
                *(float *)a5 = v34;
                *(float *)(a5 + 4) = v35;
                *(float *)(a5 + 8) = v36;
                *(float *)(a5 + 12) = v37;
              }
              else
              {
                v21 = (__m128)_mm_loadu_si128((const __m128i *)a3);
                v22 = (__m128)_mm_loadu_si128((const __m128i *)a4);
                *(_DWORD *)(a5 + 72) = 70;
                v23 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
                v24 = fmaxf(0.0, fminf(a2, 1.0));
                v25 = (float)((float)(_mm_shuffle_ps(v22, v22, 85).m128_f32[0] - v23) * v24) + v23;
                v26 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
                *(float *)a5 = (float)((float)(v22.m128_f32[0] - v21.m128_f32[0]) * v24) + v21.m128_f32[0];
                *(float *)(a5 + 4) = v25;
                v27 = (float)((float)(_mm_shuffle_ps(v22, v22, 170).m128_f32[0] - v26) * v24) + v26;
                v28 = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
                *(float *)(a5 + 8) = v27;
                *(float *)(a5 + 12) = (float)((float)(_mm_shuffle_ps(v22, v22, 255).m128_f32[0] - v28) * v24) + v28;
              }
            }
            else
            {
              *(float *)&v38 = *(float *)(a4 + 4) - *(float *)(a3 + 4);
              v49.m128_f32[0] = *(float *)a4 - *(float *)a3;
              *(unsigned __int64 *)((char *)v49.m128_u64 + 4) = __PAIR64__(*(float *)(a4 + 8) - *(float *)(a3 + 8), v38);
              v49.m128_f32[3] = *(float *)(a4 + 12) - *(float *)(a3 + 12);
              v39 = v49;
              v40 = _mm_shuffle_ps(v49, v49, 85).m128_f32[0];
              v49.m128_f32[0] = v49.m128_f32[0] * a2;
              v49.m128_f32[1] = v40 * a2;
              v49.m128_f32[2] = _mm_shuffle_ps(v39, v39, 170).m128_f32[0] * a2;
              v49.m128_f32[3] = _mm_shuffle_ps(v39, v39, 255).m128_f32[0] * a2;
              v41 = v49;
              v42 = _mm_shuffle_ps(v49, v49, 85).m128_f32[0] + *(float *)(a3 + 4);
              v49.m128_f32[0] = v49.m128_f32[0] + *(float *)a3;
              *(float *)&v43 = _mm_shuffle_ps(v41, v41, 170).m128_f32[0] + *(float *)(a3 + 8);
              v41.m128_f32[0] = _mm_shuffle_ps(v41, v41, 255).m128_f32[0] + *(float *)(a3 + 12);
              v49.m128_f32[1] = v42;
              *(_DWORD *)(a5 + 72) = 69;
              v49.m128_u64[1] = __PAIR64__(v41.m128_u32[0], v43);
              *(__m128 *)a5 = v49;
            }
          }
          else
          {
            v16 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
            v17 = (float)((float)(*(float *)(a4 + 4) - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
            v18 = (float)((float)(*(float *)(a4 + 8) - *(float *)(a3 + 8)) * a2) + *(float *)(a3 + 8);
            *(_DWORD *)(a5 + 72) = 52;
            *(float *)a5 = v16;
            *(float *)(a5 + 4) = v17;
            *(float *)(a5 + 8) = v18;
          }
        }
        else
        {
          v44 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
          *(_DWORD *)(a5 + 72) = 42;
          *(float *)a5 = v44;
        }
        goto LABEL_7;
      }
      v13 = (float)((float)(*(float *)(a4 + 4) - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
      v11 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
      *(_DWORD *)(a5 + 72) = 35;
      *(float *)(a5 + 4) = v13;
    }
    else
    {
      v9 = *(float *)a3;
      v10 = *(float *)a4;
      *(_DWORD *)(a5 + 72) = 18;
      v11 = (float)((float)(v10 - v9) * a2) + v9;
    }
    *(float *)a5 = v11;
LABEL_7:
    *(_BYTE *)(a5 + 76) = 1;
    return;
  }
  v45 = *(const struct CPathData **)(a4 + 64);
  v46 = *(const struct CPathData **)(a3 + 64);
  v50 = 0LL;
  v47 = CInterpolatePathsOperation::Interpolate(v7, v46, v45, a2, &v50);
  if ( v47 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v47, retaddr);
  v48 = v50;
  *(_DWORD *)(a5 + 72) = 11;
  *(_BYTE *)(a5 + 76) = 1;
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)(a5 + 64), (__int64)v48);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v50);
}
