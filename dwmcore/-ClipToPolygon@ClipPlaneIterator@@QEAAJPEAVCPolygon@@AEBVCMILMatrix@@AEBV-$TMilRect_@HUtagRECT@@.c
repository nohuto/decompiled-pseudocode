__int64 __fastcall ClipPlaneIterator::ClipToPolygon(ClipPlaneIterator *this, __int64 a2, CMILMatrix *a3, _DWORD *a4)
{
  unsigned int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // rcx
  struct D2D_POINT_2F *v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  const enum D2D1_POLYGON_EDGE_FLAG *v13; // rdi
  CMILMatrix *v14; // rcx
  __int64 v15; // r8
  struct D2D_POINT_2F *v16; // r9
  __int64 v17; // rax
  __int128 v18; // xmm4
  __int64 v19; // rax
  __m128 v20; // xmm3
  struct D2D_MATRIX_4X4_F *D2D1Matrix4x4; // rax
  float v22; // xmm4_4
  float v23; // xmm2_4
  float *v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  __int128 v27; // xmm0
  _DWORD *v28; // r10
  int v29; // eax
  __m128i v30; // xmm0
  int v31; // eax
  __int64 v32; // rcx
  struct D2D_MATRIX_3X2_F v35; // [rsp+38h] [rbp-41h] BYREF
  struct D2D_MATRIX_4X4_F v36; // [rsp+50h] [rbp-29h] BYREF

  ClipPlaneIterator::ResetToStart(this);
  v7 = *(_DWORD *)(a2 + 40);
  v8 = v7;
  v10 = (struct D2D_POINT_2F *)operator new(saturated_mul(v7, 8uLL));
  if ( v10 )
  {
    v13 = (const enum D2D1_POLYGON_EDGE_FLAG *)operator new(saturated_mul(v7, 4uLL));
    if ( v13 )
    {
      if ( v7 )
      {
        v14 = a3;
        v15 = 0LL;
        v16 = v10;
        do
        {
          v17 = *(_QWORD *)(a2 + 16);
          v18 = *(_OWORD *)(v15 + v17);
          v35.dx = *(FLOAT *)(v15 + v17 + 16);
          LODWORD(v16->x) = v18;
          v19 = *(_QWORD *)(a2 + 16);
          v20 = *(__m128 *)(v15 + v19);
          v35.dx = *(FLOAT *)(v15 + v19 + 16);
          v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
          LODWORD(v16->y) = v20.m128_i32[0];
          D2D1Matrix4x4 = CMILMatrix::GetD2D1Matrix4x4(v14, &v36);
          v23 = (float)((float)(v20.m128_f32[0] * D2D1Matrix4x4->_24) + (float)(v22 * D2D1Matrix4x4->_14))
              + D2D1Matrix4x4->_44;
          *v24 = (float)((float)((float)(v20.m128_f32[0] * D2D1Matrix4x4->_21) + (float)(v22 * D2D1Matrix4x4->_11))
                       + D2D1Matrix4x4->_41)
               / v23;
          v24[1] = (float)((float)((float)(v20.m128_f32[0] * D2D1Matrix4x4->_22) + (float)(v22 * D2D1Matrix4x4->_12))
                         + D2D1Matrix4x4->_42)
                 / v23;
          v16 = (struct D2D_POINT_2F *)(v24 + 2);
          v25 = *(_QWORD *)(a2 + 16);
          v27 = *(_OWORD *)(v26 + v25);
          LODWORD(v25) = *(_DWORD *)(v26 + v25 + 16);
          v15 = v26 + 20;
          *v28 = v25;
          *(_OWORD *)&v35.m11 = v27;
          --v8;
        }
        while ( v8 );
      }
      v29 = a4[2] - *a4;
      v35.m21 = 0.0;
      v30 = _mm_cvtsi32_si128(a4[3] - a4[1]);
      *(_QWORD *)&v35.m11 = COERCE_UNSIGNED_INT(2.0 / (float)v29);
      v35.m22 = -2.0 / _mm_cvtepi32_ps(v30).m128_f32[0];
      *(_QWORD *)&v35.m[2][0] = __PAIR64__((unsigned int)FLOAT_1_0, LODWORD(FLOAT_N1_0));
      v31 = ClipPlaneIterator::SetClipPoints(this, v10, v7, v13, &v35);
      v11 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x28Bu, 0LL);
      else
        *((_QWORD *)this + 15) = a2;
    }
    else
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x27Au, 0LL);
    }
    operator delete(v10);
    if ( v13 )
      operator delete(v13);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x277u, 0LL);
  }
  return v11;
}
