/*
 * XREFs of ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800C3F78
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800297A8 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x180206368 (InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180206DF4 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B1408 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18025E620 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 */

void __fastcall KeyframeInterpolation::ExpressionValueLerp(int a1, float a2, __int64 a3, __int64 a4, __int64 a5)
{
  CInterpolatePathsOperation *v7; // rcx
  int v8; // ecx
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __m128 v17; // xmm5
  __m128 v18; // xmm6
  float v19; // xmm0_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  __int64 v28; // rdi
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm3_4
  unsigned int v38; // xmm1_4
  __m128 v39; // xmm2
  float v40; // xmm1_4
  __m128 v41; // xmm3
  float v42; // xmm1_4
  unsigned int v43; // xmm0_4
  float v44; // xmm0_4
  float v45; // xmm0_4
  const struct CPathData *v46; // r8
  const struct CPathData *v47; // rdx
  int v48; // eax
  struct CPathData *v49; // rbx
  __m128 v50; // [rsp+30h] [rbp-30h]
  struct CPathData *v51; // [rsp+40h] [rbp-20h] BYREF
  float v52; // [rsp+48h] [rbp-18h]
  float v53; // [rsp+4Ch] [rbp-14h]
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
        v13 = v12 - 7;
        if ( v13 )
        {
          v14 = v13 - 10;
          if ( v14 )
          {
            v15 = v14 - 17;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 != 1 )
                  ModuleFailFastForHRESULT(2147942487LL, retaddr);
                v28 = 0LL;
                v29 = *(float *)a3;
                v30 = *(float *)(a3 + 12);
                v31 = *(float *)a4 - *(float *)a3;
                *((float *)&v51 + 1) = *(float *)(a4 + 4) - *(float *)(a3 + 4);
                v32 = *(float *)(a4 + 12);
                *(float *)&v51 = v31;
                v33 = *(float *)(a4 + 8) - *(float *)(a3 + 8);
                v53 = v32 - v30;
                v52 = v33;
                do
                {
                  v50.m128_f32[v28] = a2 * *(float *)((char *)&v51 + v28 * 4);
                  ++v28;
                }
                while ( v28 < 4 );
                v34 = v50.m128_f32[0] + v29;
                v35 = v50.m128_f32[1] + *(float *)(a3 + 4);
                v36 = v50.m128_f32[2] + *(float *)(a3 + 8);
                v37 = v30 + v50.m128_f32[3];
                *(_DWORD *)(a5 + 72) = 71;
                *(float *)a5 = v34;
                *(float *)(a5 + 4) = v35;
                *(float *)(a5 + 8) = v36;
                *(float *)(a5 + 12) = v37;
              }
              else
              {
                v17 = (__m128)_mm_loadu_si128((const __m128i *)a3);
                v18 = (__m128)_mm_loadu_si128((const __m128i *)a4);
                *(_DWORD *)(a5 + 72) = 70;
                v19 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
                v20 = fmaxf(0.0, fminf(a2, 1.0));
                v21 = (float)((float)(_mm_shuffle_ps(v18, v18, 85).m128_f32[0] - v19) * v20) + v19;
                v22 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
                *(float *)a5 = (float)((float)(v18.m128_f32[0] - v17.m128_f32[0]) * v20) + v17.m128_f32[0];
                *(float *)(a5 + 4) = v21;
                v23 = (float)((float)(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] - v22) * v20) + v22;
                v24 = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
                *(float *)(a5 + 8) = v23;
                *(float *)(a5 + 12) = (float)((float)(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] - v24) * v20) + v24;
              }
            }
            else
            {
              *(float *)&v38 = *(float *)(a4 + 4) - *(float *)(a3 + 4);
              v50.m128_f32[0] = *(float *)a4 - *(float *)a3;
              *(unsigned __int64 *)((char *)v50.m128_u64 + 4) = __PAIR64__(*(float *)(a4 + 8) - *(float *)(a3 + 8), v38);
              v50.m128_f32[3] = *(float *)(a4 + 12) - *(float *)(a3 + 12);
              v39 = v50;
              v40 = _mm_shuffle_ps(v50, v50, 85).m128_f32[0];
              v50.m128_f32[0] = v50.m128_f32[0] * a2;
              v50.m128_f32[1] = v40 * a2;
              v50.m128_f32[2] = _mm_shuffle_ps(v39, v39, 170).m128_f32[0] * a2;
              v50.m128_f32[3] = _mm_shuffle_ps(v39, v39, 255).m128_f32[0] * a2;
              v41 = v50;
              v42 = _mm_shuffle_ps(v50, v50, 85).m128_f32[0] + *(float *)(a3 + 4);
              v50.m128_f32[0] = v50.m128_f32[0] + *(float *)a3;
              *(float *)&v43 = _mm_shuffle_ps(v41, v41, 170).m128_f32[0] + *(float *)(a3 + 8);
              v41.m128_f32[0] = _mm_shuffle_ps(v41, v41, 255).m128_f32[0] + *(float *)(a3 + 12);
              v50.m128_f32[1] = v42;
              *(_DWORD *)(a5 + 72) = 69;
              v50.m128_u64[1] = __PAIR64__(v41.m128_u32[0], v43);
              *(__m128 *)a5 = v50;
            }
          }
          else
          {
            v25 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
            v26 = (float)((float)(*(float *)(a4 + 4) - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
            v27 = (float)((float)(*(float *)(a4 + 8) - *(float *)(a3 + 8)) * a2) + *(float *)(a3 + 8);
            *(_DWORD *)(a5 + 72) = 52;
            *(float *)a5 = v25;
            *(float *)(a5 + 4) = v26;
            *(float *)(a5 + 8) = v27;
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
      v45 = (float)((float)(*(float *)(a4 + 4) - *(float *)(a3 + 4)) * a2) + *(float *)(a3 + 4);
      v11 = (float)((float)(*(float *)a4 - *(float *)a3) * a2) + *(float *)a3;
      *(_DWORD *)(a5 + 72) = 35;
      *(float *)(a5 + 4) = v45;
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
  v46 = *(const struct CPathData **)(a4 + 64);
  v47 = *(const struct CPathData **)(a3 + 64);
  v51 = 0LL;
  v48 = CInterpolatePathsOperation::Interpolate(v7, v47, v46, a2, &v51);
  if ( v48 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v48, retaddr);
  *(_DWORD *)(a5 + 72) = 11;
  *(_BYTE *)(a5 + 76) = 1;
  v49 = v51;
  Microsoft::WRL::ComPtr<CPathData>::operator=(a5 + 64, v51);
  if ( v49 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v49 + 16LL))(v49);
}
