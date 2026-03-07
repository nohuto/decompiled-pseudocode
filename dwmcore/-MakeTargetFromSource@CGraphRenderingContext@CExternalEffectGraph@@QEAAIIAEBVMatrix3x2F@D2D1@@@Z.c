__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
        CExternalEffectGraph::CGraphRenderingContext *this,
        unsigned int a2,
        const struct D2D_RECT_F *a3)
{
  char *v3; // rbx
  __int64 v6; // rsi
  __int64 v7; // r14
  EffectInput *v9; // rax
  float *v10; // rbx
  struct D2D_RECT_F *v11; // r9
  __m128 v12; // xmm5
  float v13; // xmm4_4
  struct D2D_MATRIX_3X2_F *v14; // r9
  FLOAT top; // eax
  int v16; // xmm0_4
  __int64 result; // rax
  int v18; // xmm1_4
  int v19; // xmm3_4
  int v20; // xmm0_4
  int v21; // xmm1_4
  _DWORD v22[6]; // [rsp+20h] [rbp-89h] BYREF
  struct D2D_RECT_F v23; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v24[104]; // [rsp+50h] [rbp-59h] BYREF
  struct D2D_RECT_F v25; // [rsp+B8h] [rbp+Fh] BYREF
  float v26; // [rsp+C8h] [rbp+1Fh]
  float v27; // [rsp+CCh] [rbp+23h]

  v3 = (char *)this + 48;
  v6 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3);
  v7 = *((_QWORD *)this + 6) + 104LL * a2;
  v9 = EffectInput::EffectInput((EffectInput *)v24, (const struct EffectInput *)v7);
  detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::emplace_back<EffectInput>(
    v3,
    v9);
  v10 = (float *)(*((_QWORD *)this + 7) - 20LL);
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
    (D2DMatrixHelper *)v10,
    a3,
    (const struct D2D_MATRIX_3X2_F *)v10,
    v11);
  v12 = (__m128)_mm_loadu_si128((const __m128i *)PixelInflate(&v25, (const struct D2D_RECT_F *)v10));
  v13 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  *v10 = COERCE_FLOAT(v12.m128_i32[0] ^ _xmm) + *v10;
  v10[1] = COERCE_FLOAT(LODWORD(v13) ^ _xmm) + v10[1];
  v10[2] = COERCE_FLOAT(v12.m128_i32[0] ^ _xmm) + v10[2];
  v10[3] = COERCE_FLOAT(LODWORD(v13) ^ _xmm) + v10[3];
  *((float *)this + 10) = _mm_shuffle_ps(v12, v12, 170).m128_f32[0] - v12.m128_f32[0];
  *((float *)this + 11) = _mm_shuffle_ps(v12, v12, 255).m128_f32[0] - v13;
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)v10, (const struct D2D_RECT_F *)(v7 + 84), &v23, v14);
  CDrawListBitmap::GetSize((CDrawListBitmap *)v7);
  top = v25.top;
  v25.top = 0.0;
  v25.right = 0.0;
  v25.left = 1.0 / (float)SLODWORD(v25.left);
  v25.bottom = 1.0 / (float)SLODWORD(top);
  v26 = 0.0 - (float)(v25.left * 0.0);
  v27 = 0.0 - (float)(v25.bottom * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v22,
    (const struct D2D1::Matrix3x2F *)&v23,
    (const struct D2D1::Matrix3x2F *)&v25);
  v16 = v22[1];
  result = (unsigned int)v6;
  v18 = v22[3];
  *(_DWORD *)(v7 + 56) = 0;
  v19 = v22[0];
  *(_DWORD *)(v7 + 68) = 0;
  *(_DWORD *)(v7 + 52) = v16;
  *(_DWORD *)(v7 + 60) = v22[2];
  v20 = v22[4];
  *(_DWORD *)(v7 + 64) = v18;
  v21 = v22[5];
  *(_DWORD *)(v7 + 72) = v20;
  *(_DWORD *)(v7 + 48) = v19;
  *(_DWORD *)(v7 + 76) = v21;
  *(_DWORD *)(v7 + 80) = 1065353216;
  *((_DWORD *)this + 8) = a2;
  return result;
}
