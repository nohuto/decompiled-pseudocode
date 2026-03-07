void __fastcall CDrawListEntryBuilder::Begin(
        CDrawListEntryBuilder *this,
        const struct DrawListEntryBuilderSetupParams *a2,
        struct CRenderingEffect *a3,
        __int64 a4)
{
  __m128 y_low; // xmm8
  int v7; // eax
  bool v8; // cc
  __m128 x_low; // xmm9
  __int64 v10; // rcx
  __m128 v11; // xmm5
  __m128 v12; // xmm4
  bool v13; // al
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __int128 v16; // xmm0
  __int64 v17; // rcx
  bool v18; // al
  int v19; // ecx
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // r8
  float v24[16]; // [rsp+20h] [rbp-60h]
  struct D2D_POINT_2F v25; // [rsp+90h] [rbp+10h] BYREF
  struct D2D_POINT_2F v26; // [rsp+98h] [rbp+18h] BYREF

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  y_low = 0LL;
  v7 = 2;
  v8 = *(_DWORD *)this <= 2u;
  x_low = 0LL;
  v25.x = 0.0;
  v25.y = 0.0;
  if ( !v8 )
    v7 = 4;
  v10 = *((_QWORD *)this + 2);
  *(_DWORD *)this = v7;
  if ( *(_QWORD *)(v10 + 104) )
  {
    v26.x = 0.0;
    v26.y = 0.0;
    CMILMatrix::Get2DPointUsing2DInverse((CMILMatrix *)(v10 + 8), &v26, &v25);
    x_low = (__m128)LODWORD(v25.x);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25.x - 0.0) & _xmm) <= 0.015625 )
      x_low = 0LL;
    y_low = (__m128)LODWORD(v25.y);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25.y - 0.0) & _xmm) <= 0.015625 )
      y_low = 0LL;
  }
  v11 = (__m128)*((unsigned int *)this + 1);
  if ( COERCE_FLOAT(*((_DWORD *)this + 1) & _xmm) < 0.000081380211
    || (v12 = (__m128)*((unsigned int *)this + 2), COERCE_FLOAT(*((_DWORD *)this + 2) & _xmm) < 0.000081380211) )
  {
    v11 = (__m128)(unsigned int)FLOAT_1_0;
    *((_DWORD *)this + 1) = 1065353216;
    v12 = (__m128)(unsigned int)FLOAT_1_0;
    *((_DWORD *)this + 2) = 1065353216;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11.m128_f32[0] - 1.0) & _xmm) <= 0.000081380211 )
    v11 = (__m128)(unsigned int)FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12.m128_f32[0] - 1.0) & _xmm) <= 0.000081380211 )
    v12 = (__m128)(unsigned int)FLOAT_1_0;
  v13 = v11.m128_f32[0] != 1.0 || v12.m128_f32[0] != 1.0 || x_low.m128_f32[0] != 0.0 || y_low.m128_f32[0] != 0.0;
  *((_BYTE *)this + 4473) = v13;
  if ( v13 )
  {
    v14 = v11;
    v24[2] = 0.0;
    v15 = v12;
    v14.m128_f32[0] = v11.m128_f32[0] * x_low.m128_f32[0];
    *(_QWORD *)v24 = v11.m128_u32[0];
    v24[3] = v12.m128_f32[0];
    v16 = *(_OWORD *)v24;
    *(_QWORD *)&v24[1] = 0LL;
    *((_OWORD *)this + 2) = v16;
    v15.m128_f32[0] = v12.m128_f32[0] * y_low.m128_f32[0];
    *((_QWORD *)this + 6) = _mm_unpacklo_ps(_mm_xor_ps(v14, (__m128)_xmm), _mm_xor_ps(v15, (__m128)_xmm)).m128_u64[0];
    v24[0] = 1.0 / v11.m128_f32[0];
    v24[3] = 1.0 / v12.m128_f32[0];
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)v24;
    *((_QWORD *)this + 9) = _mm_unpacklo_ps(x_low, y_low).m128_u64[0];
  }
  if ( *((struct CRenderingEffect **)this + 10) != a3 )
  {
    if ( a3 )
      (**(void (__fastcall ***)(struct CRenderingEffect *))a3)(a3);
    v17 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a3;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  }
  *((_WORD *)this + 2238) = 0;
  v18 = CCommonRegistryData::EnableMegaRects
     && (float)CCommonRegistryData::MegaRectSize > 0.0
     && (*((_BYTE *)this + 24) & 1) != 0;
  v19 = *((_DWORD *)this + 6);
  *((_BYTE *)this + 4475) = v18;
  v20 = *((_QWORD *)this + 2);
  v21 = *(_DWORD *)(v20 + 100) | v19;
  *((_DWORD *)this + 6) = v21;
  if ( (*(_BYTE *)(v20 + 100) & 0x10) != 0 )
  {
    *((_BYTE *)this + 4474) = 1;
    v22 = v21 | 0x10;
  }
  else
  {
    v22 = v21 & 0xFFFFFFEF;
    *((_BYTE *)this + 4474) = CCommonRegistryData::EnableCpuClipping;
  }
  *((_DWORD *)this + 6) = v22;
  if ( (v22 & 0x2000) != 0 )
    *((_BYTE *)this + 28) = 0;
  if ( (__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) >> 4 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 160,
      0LL);
  if ( (__int64)(*((_QWORD *)this + 265) - *((_QWORD *)this + 264)) >> 4 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 2112,
      0LL);
  v23 = (__int64)(*((_QWORD *)this + 510) - *((_QWORD *)this + 509)) >> 1;
  if ( v23 )
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 4072,
      0LL,
      v23,
      a4);
  *((_DWORD *)this + 1016) = 0;
  *((_DWORD *)this + 1112) = 0;
}
