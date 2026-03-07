__int64 __fastcall KeyframeInterpolation::InterpolateSpherical(double a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r14
  float v10; // xmm8_4
  __m128 v11; // xmm3
  __m128 v12; // xmm5
  float v13; // xmm5_4
  float v14; // xmm0_4
  double v15; // xmm0_8
  __int128 v16; // xmm1
  float v17; // xmm2_4
  __int32 v18; // eax
  unsigned __int64 v19; // xmm0_8
  int v20; // eax
  float v21; // xmm0_4
  unsigned __int64 v22; // xmm1_8
  float v23; // xmm1_4
  double v24; // xmm9_8
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm10_4
  __m128 v28; // xmm7
  __m128 v29; // xmm7
  __m128 v30; // xmm3
  __m128 v31; // xmm3
  __int64 i; // rax
  __int64 j; // rax
  float v34; // xmm3_4
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  __m128 v37; // xmm2
  __m128 v38; // xmm0
  __m128 v39; // xmm3
  __m128 v40; // xmm4
  __m128 v41; // xmm2
  float v42; // xmm1_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  float v46; // xmm3_4
  float v47; // xmm1_4
  float v48; // xmm7_4
  float v49; // xmm3_4
  __m128 v51; // [rsp+38h] [rbp-A1h] BYREF
  __int128 v52; // [rsp+48h] [rbp-91h] BYREF
  float v53; // [rsp+58h] [rbp-81h] BYREF
  float v54; // [rsp+5Ch] [rbp-7Dh]
  float v55; // [rsp+60h] [rbp-79h]
  float v56; // [rsp+64h] [rbp-75h]
  __int64 v57; // [rsp+98h] [rbp-41h] BYREF
  int v58; // [rsp+A0h] [rbp-39h]
  char v59; // [rsp+A4h] [rbp-35h]
  void *retaddr; // [rsp+130h] [rbp+57h]

  memset_0(&v53, 0, 0x40uLL);
  v9 = 0LL;
  v57 = 0LL;
  v10 = *(float *)&FLOAT_1_0;
  v58 = 18;
  v59 = 0;
  if ( a2 != 18 )
  {
    if ( a2 == 35 )
    {
      v22 = *(_QWORD *)a4;
      *(_QWORD *)&v52 = *(_QWORD *)a3;
      v51.m128_u64[0] = v22;
      D3DXVec2Normalize((struct D2DVector2 *)&v52, (const struct D2DVector2 *)&v52);
      D3DXVec2Normalize((struct D2DVector2 *)&v51, (const struct D2DVector2 *)&v51);
      v23 = (float)(*(float *)&v52 * v51.m128_f32[0]) + (float)(*((float *)&v52 + 1) * v51.m128_f32[1]);
      v21 = FLOAT_N1_0;
      if ( v23 >= -1.0 )
        v21 = fminf(1.0, v23);
    }
    else
    {
      switch ( a2 )
      {
        case '4':
          v18 = *(_DWORD *)(a3 + 8);
          v51.m128_u64[0] = *(_QWORD *)a3;
          v19 = *(_QWORD *)a4;
          v51.m128_i32[2] = v18;
          v20 = *(_DWORD *)(a4 + 8);
          *(_QWORD *)&v52 = v19;
          DWORD2(v52) = v20;
          D3DXVec3Normalize((struct D2DVector3 *)&v51, (const struct D2DVector3 *)&v51);
          D3DXVec3Normalize((struct D2DVector3 *)&v52, (const struct D2DVector3 *)&v52);
          v17 = (float)((float)(*(float *)&v52 * v51.m128_f32[0]) + (float)(v51.m128_f32[1] * *((float *)&v52 + 1)))
              + (float)(v51.m128_f32[2] * *((float *)&v52 + 2));
          break;
        case 'E':
          v16 = *(_OWORD *)a4;
          v51 = *(__m128 *)a3;
          v52 = v16;
          D3DXVec4Normalize((struct D2DVector4 *)&v51, (const struct D2DVector4 *)&v51);
          D3DXVec4Normalize((struct D2DVector4 *)&v52, (const struct D2DVector4 *)&v52);
          v17 = (float)((float)((float)(v51.m128_f32[0] * *(float *)&v52)
                              + (float)(v51.m128_f32[1] * *((float *)&v52 + 1)))
                      + (float)(v51.m128_f32[2] * *((float *)&v52 + 2)))
              + (float)(v51.m128_f32[3] * *((float *)&v52 + 3));
          break;
        case 'G':
          v11 = (__m128)_mm_loadu_si128((const __m128i *)a4);
          v10 = FLOAT_N1_0;
          v12 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          v13 = (float)((float)((float)(v12.m128_f32[0] * v11.m128_f32[0])
                              + (float)(_mm_shuffle_ps(v12, v12, 85).m128_f32[0]
                                      * _mm_shuffle_ps(v11, v11, 85).m128_f32[0]))
                      + (float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] * _mm_shuffle_ps(v11, v11, 170).m128_f32[0]))
              + (float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] * _mm_shuffle_ps(v11, v11, 255).m128_f32[0]);
          if ( v13 >= -1.0 )
            v14 = fminf(1.0, v13);
          else
            v14 = FLOAT_N1_0;
          if ( v14 >= 0.0 )
            v10 = *(float *)&FLOAT_1_0;
          v15 = v14;
          goto LABEL_20;
        default:
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
      }
      v21 = FLOAT_N1_0;
      if ( v17 >= -1.0 )
        v21 = fminf(1.0, v17);
    }
    v15 = v21;
LABEL_20:
    v24 = acos_0(v15);
    goto LABEL_22;
  }
  v24 = 0.0;
LABEL_22:
  v25 = v24;
  if ( COERCE_FLOAT(LODWORD(v25) & _xmm) >= 0.0000011920929 )
  {
    v27 = sin_0(v24);
    v28 = 0LL;
    v28.m128_f32[0] = sin_0(a1 * v24);
    v29 = _mm_shuffle_ps(v28, v28, 0);
    v30 = 0LL;
    v30.m128_f32[0] = sin_0((1.0 - a1) * v24);
    v31 = _mm_shuffle_ps(v30, v30, 0);
    if ( a2 != 18 )
    {
      switch ( a2 )
      {
        case '#':
          v58 = 35;
          v47 = (float)((float)(v29.m128_f32[0] * *(float *)a4) + (float)((float)(v31.m128_f32[0] * *(float *)a3) * v10))
              * (float)(1.0 / v27);
          v48 = (float)((float)(v29.m128_f32[0] * *(float *)(a4 + 4))
                      + (float)((float)(v31.m128_f32[0] * *(float *)(a3 + 4)) * v10))
              * (float)(1.0 / v27);
          v53 = v47;
          v54 = v48;
          break;
        case '4':
          v58 = 52;
          v43 = v31.m128_f32[0] * *(float *)(a3 + 4);
          v44 = (float)((float)(v31.m128_f32[0] * *(float *)a3) * v10) + (float)(v29.m128_f32[0] * *(float *)a4);
          v45 = v29.m128_f32[0] * *(float *)(a4 + 4);
          v46 = (float)((float)(v31.m128_f32[0] * *(float *)(a3 + 8)) * v10)
              + (float)(v29.m128_f32[0] * *(float *)(a4 + 8));
          v53 = v44 * (float)(1.0 / v27);
          v55 = v46 * (float)(1.0 / v27);
          v54 = (float)((float)(v43 * v10) + v45) * (float)(1.0 / v27);
          break;
        case 'E':
          v35 = *(__m128 *)a3;
          v58 = 69;
          v36 = _mm_mul_ps(v35, v31);
          v51 = v36;
          v37 = v36;
          v51.m128_f32[0] = v36.m128_f32[0] * v10;
          v51.m128_f32[2] = _mm_shuffle_ps(v36, v36, 170).m128_f32[0] * v10;
          v38 = *(__m128 *)a4;
          v51.m128_f32[1] = _mm_shuffle_ps(v37, v37, 85).m128_f32[0] * v10;
          v39 = _mm_mul_ps(v38, v29);
          v51.m128_f32[3] = _mm_shuffle_ps(v37, v37, 255).m128_f32[0] * v10;
          v40 = v51;
          v51.m128_f32[0] = v39.m128_f32[0] + v51.m128_f32[0];
          v51.m128_f32[1] = _mm_shuffle_ps(v39, v39, 85).m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
          v51.m128_f32[2] = _mm_shuffle_ps(v39, v39, 170).m128_f32[0] + _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
          v51.m128_f32[3] = _mm_shuffle_ps(v39, v39, 255).m128_f32[0] + _mm_shuffle_ps(v40, v40, 255).m128_f32[0];
          v41 = v51;
          v42 = _mm_shuffle_ps(v51, v51, 85).m128_f32[0];
          v51.m128_f32[0] = v51.m128_f32[0] * (float)(1.0 / v27);
          v51.m128_f32[1] = v42 * (float)(1.0 / v27);
          v51.m128_f32[3] = _mm_shuffle_ps(v41, v41, 255).m128_f32[0] * (float)(1.0 / v27);
          v51.m128_f32[2] = _mm_shuffle_ps(v41, v41, 170).m128_f32[0] * (float)(1.0 / v27);
          v53 = v51.m128_f32[0];
          LODWORD(v56) = _mm_shuffle_ps(v51, v51, 255).m128_u32[0];
          LODWORD(v54) = _mm_shuffle_ps(v51, v51, 85).m128_u32[0];
          LODWORD(v55) = _mm_shuffle_ps(v51, v51, 170).m128_u32[0];
          break;
        default:
          for ( i = 0LL; i < 4; ++i )
            v51.m128_f32[i] = v31.m128_f32[0] * *(float *)(a3 + 4 * i);
          for ( j = 0LL; j < 4; ++j )
            *(float *)((char *)&v52 + j * 4) = v10 * v51.m128_f32[j];
          do
          {
            v51.m128_f32[v9] = v29.m128_f32[0] * *(float *)(a4 + 4 * v9);
            ++v9;
          }
          while ( v9 < 4 );
          v58 = 71;
          v54 = (float)(v51.m128_f32[1] + *((float *)&v52 + 1)) * (float)(1.0 / v27);
          v55 = (float)(v51.m128_f32[2] + *((float *)&v52 + 2)) * (float)(1.0 / v27);
          v56 = (float)(v51.m128_f32[3] + *((float *)&v52 + 3)) * (float)(1.0 / v27);
          v34 = (float)(v51.m128_f32[0] + *(float *)&v52) * (float)(1.0 / v27);
          goto LABEL_38;
      }
LABEL_39:
      v59 = 1;
      goto LABEL_40;
    }
    v49 = v31.m128_f32[0] * *(float *)a3;
    v58 = 18;
    v34 = (float)((float)(v49 * v10) + (float)(v29.m128_f32[0] * *(float *)a4)) / v27;
LABEL_38:
    v53 = v34;
    goto LABEL_39;
  }
  v26 = a1;
  KeyframeInterpolation::ExpressionValueLerp(a2, v26, a3, a4, (__int64)&v53);
LABEL_40:
  CExpressionValue::operator=(a5, (__int64)&v53);
  return Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v57);
}
