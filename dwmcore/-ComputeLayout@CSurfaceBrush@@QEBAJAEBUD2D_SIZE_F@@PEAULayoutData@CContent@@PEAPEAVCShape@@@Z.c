__int64 __fastcall CSurfaceBrush::ComputeLayout(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CContent::LayoutData *a3,
        struct CShape **a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  int v12; // edx
  float v13; // xmm1_4
  float v14; // xmm7_4
  float width; // xmm0_4
  float v16; // xmm5_4
  float height; // xmm1_4
  __m128 v18; // xmm2
  __m128 width_low; // xmm2
  __m128 v20; // xmm7
  __int64 v21; // rcx
  __int64 v22; // xmm8_8
  const struct D2D1::Matrix3x2F *v23; // rcx
  float v24; // xmm10_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  unsigned int v27; // xmm6_4
  unsigned int v28; // xmm9_4
  unsigned int v29; // xmm10_4
  unsigned int v30; // xmm11_4
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int128 v38; // xmm1
  struct CShape *v39; // rax
  __int128 v41; // xmm1
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  float v45; // xmm0_4
  int v46; // eax
  struct CShape *v47; // [rsp+48h] [rbp-C0h] BYREF
  float v48; // [rsp+50h] [rbp-B8h] BYREF
  float v49; // [rsp+54h] [rbp-B4h]
  _BYTE v50[80]; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v51; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-50h]
  struct D2D_MATRIX_3X2_F v53; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-30h] BYREF
  const unsigned int *v55; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v56; // [rsp+F0h] [rbp-18h]
  void *lpMem; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE *v58; // [rsp+100h] [rbp-8h]
  int v59; // [rsp+108h] [rbp+0h]
  __int64 v60; // [rsp+10Ch] [rbp+4h]
  _BYTE v61[16]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v62; // [rsp+128h] [rbp+20h]
  const unsigned int *v63; // [rsp+138h] [rbp+30h] BYREF
  __int64 v64; // [rsp+140h] [rbp+38h]
  void *v65; // [rsp+148h] [rbp+40h] BYREF
  _BYTE *v66; // [rsp+150h] [rbp+48h]
  int v67; // [rsp+158h] [rbp+50h]
  __int64 v68; // [rsp+15Ch] [rbp+54h]
  _BYTE v69[16]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v70; // [rsp+178h] [rbp+70h]
  _BYTE v71[24]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v72[24]; // [rsp+1A0h] [rbp+98h] BYREF

  if ( a2->width <= 0.0 || a2->height <= 0.0 || !*((_QWORD *)this + 13) )
  {
    v11 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304441,
      0x1E9u,
      0LL);
    return v11;
  }
  v8 = *((_QWORD *)this + 14);
  v47 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, CSurfaceBrush *, const struct D2D_SIZE_F *, float *, __int128 *, _BYTE *))(*(_QWORD *)v8 + 64LL))(
         v8,
         this,
         a2,
         &v48,
         &v54,
         v71);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v10,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v9,
      0x1FAu,
      0LL);
    goto LABEL_38;
  }
  v12 = *((_DWORD *)this + 24);
  v13 = 0.0;
  v14 = 0.0;
  if ( v12 == 1 )
  {
    width = a2->width;
    v16 = 0.0;
    height = a2->height;
    v51.m128_u64[0] = 0LL;
    v18 = _mm_shuffle_ps(v51, v51, 210);
    v18.m128_f32[0] = width;
    width_low = _mm_shuffle_ps(v18, v18, 39);
    width_low.m128_f32[0] = height;
    v51 = _mm_shuffle_ps(width_low, width_low, 57);
    width_low.m128_i32[0] = 0;
    goto LABEL_7;
  }
  if ( v12 )
  {
    if ( v12 != 2 && v12 != 3 )
      goto LABEL_42;
    v13 = a2->width;
    v45 = a2->height;
    if ( v48 != a2->width || v49 != v45 )
    {
      v14 = v13 / (float)(v48 / v49);
      if ( v14 >= v45 != (v12 == 3) )
      {
        v14 = a2->height;
        v13 = v45 * (float)(v48 / v49);
      }
      goto LABEL_42;
    }
  }
  v14 = v49;
  v13 = v48;
LABEL_42:
  width_low = (__m128)LODWORD(a2->width);
  width_low.m128_f32[0] = (float)(width_low.m128_f32[0] - v13) * *((float *)this + 22);
  v16 = (float)(a2->height - v14) * *((float *)this + 23);
  v42 = _mm_shuffle_ps(width_low, width_low, 225);
  v42.m128_f32[0] = v16;
  v43 = _mm_shuffle_ps(v42, v42, 198);
  v43.m128_f32[0] = v13 + width_low.m128_f32[0];
  v44 = _mm_shuffle_ps(v43, v43, 39);
  v44.m128_f32[0] = v14 + v16;
  v51 = _mm_shuffle_ps(v44, v44, 57);
LABEL_7:
  *(_QWORD *)&v53.m[0][1] = 0LL;
  v53.m11 = (float)(v51.m128_f32[2] - width_low.m128_f32[0]) / v48;
  v53.m22 = (float)(v51.m128_f32[3] - v16) / v49;
  *(_QWORD *)&v53.m[2][0] = v51.m128_u64[0];
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v51,
    (const struct D2D1::Matrix3x2F *)v71,
    (const struct D2D1::Matrix3x2F *)&v53);
  v20 = v51;
  v21 = *((_QWORD *)this + 15);
  v22 = v52;
  *(_QWORD *)&v53.m[2][0] = v52;
  *(__m128 *)&v53.m11 = v51;
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, _BYTE *))(*(_QWORD *)v21 + 208LL))(v21, a2, v72);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v51,
      (const struct D2D1::Matrix3x2F *)&v53,
      (const struct D2D1::Matrix3x2F *)v72);
    v20 = v51;
    v22 = v52;
    *(__m128 *)&v53.m11 = v51;
    *(_QWORD *)&v53.m[2][0] = v52;
  }
  if ( !D2D1::Matrix3x2F::IsIdentity((CSurfaceBrush *)((char *)this + 128)) )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v51, (const struct D2D1::Matrix3x2F *)&v53, v23);
    v20 = v51;
    v22 = v52;
    *(__m128 *)&v53.m11 = v51;
    *(_QWORD *)&v53.m[2][0] = v52;
  }
  if ( a4 )
  {
    v24 = a2->height;
    v25 = a2->width + 0.0;
    v65 = v69;
    v26 = v24 + 0.0;
    v66 = v69;
    v64 = 0LL;
    v63 = &CRectanglesShape::`vftable';
    v67 = 1;
    v68 = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v69);
    v70 = 0LL;
    HIDWORD(v68) = 0;
    DynArrayImpl<0>::ShrinkToSize(&v65, 16LL);
    if ( v70 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
      v70 = 0LL;
    }
    v51.m128_u64[1] = __PAIR64__(LODWORD(v26), LODWORD(v25));
    v51.m128_u64[0] = 0LL;
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      &v65,
      &v51,
      1LL);
    v27 = v54;
    v28 = DWORD1(v54);
    v29 = DWORD2(v54);
    v30 = HIDWORD(v54);
    lpMem = v61;
    v58 = v61;
    v56 = 0LL;
    v55 = &CRectanglesShape::`vftable';
    v59 = 1;
    v60 = 1LL;
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v61);
    v62 = 0LL;
    HIDWORD(v60) = 0;
    DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
    if ( v62 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
      v62 = 0LL;
    }
    v51.m128_u64[0] = __PAIR64__(v28, v27);
    v51.m128_u64[1] = __PAIR64__(v30, v29);
    DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      &lpMem,
      &v51,
      1LL);
    CMILMatrix::CMILMatrix((CMILMatrix *)v50, &v53);
    *(_QWORD *)&v53.m[1][0] = 0LL;
    *(_QWORD *)&v53.m11 = &v47;
    LOBYTE(v53.m[2][0]) = 1;
    v31 = CShape::TryOptimizedCombinePaths(&v63, 0LL, &v55, v50, 1, v53.m[1]);
    v11 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v31, 0x1CCu, 0LL);
    }
    else if ( !*(_QWORD *)&v53.m[1][0] )
    {
      v46 = CShape::D2DCombine(
              (__int64)&v63,
              v32,
              (__int64)&v55,
              (__int64)v50,
              D2D1_COMBINE_MODE_INTERSECT,
              (CRectanglesShape **)v53.m[1]);
      v11 = v46;
      if ( v46 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v46, 0x1D7u, 0LL);
    }
    if ( LOBYTE(v53.m[2][0]) )
    {
      v33 = *(_QWORD *)&v53.m11;
      v34 = **(_QWORD **)&v53.m11;
      **(_QWORD **)&v53.m11 = *(_QWORD *)&v53.m[1][0];
      if ( v34 )
        std::default_delete<CShape>::operator()(v33, v34);
    }
    if ( (v11 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        v33,
        &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v11,
        0x22Eu,
        0LL);
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)v47 + 16LL))(v47) )
      {
        v55 = &CRectanglesShape::`vftable';
        HIDWORD(v60) = 0;
        DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
        if ( v62 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
          v62 = 0LL;
        }
        if ( lpMem != v58 )
        {
          operator delete(lpMem);
          lpMem = 0LL;
        }
        v36 = v56;
        if ( v56 )
        {
          v56 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        v63 = &CRectanglesShape::`vftable';
        HIDWORD(v68) = 0;
        DynArrayImpl<0>::ShrinkToSize(&v65, 16LL);
        if ( v70 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
          v70 = 0LL;
        }
        if ( v65 != v66 )
        {
          operator delete(v65);
          v65 = 0LL;
        }
        v37 = v64;
        if ( v64 )
        {
          v64 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        }
        v38 = v54;
        v39 = v47;
        *(__m128 *)a3 = v20;
        *(_OWORD *)((char *)a3 + 24) = v38;
        *((_QWORD *)a3 + 2) = v22;
        *a4 = v39;
        return v11;
      }
      v11 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(
        v35,
        &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2003304441,
        0x233u,
        0LL);
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v55);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v63);
  }
  else
  {
    v41 = v54;
    *(__m128 *)a3 = v20;
    *(_OWORD *)((char *)a3 + 24) = v41;
    *((_QWORD *)a3 + 2) = v22;
  }
LABEL_38:
  if ( v47 )
    std::default_delete<CShape>::operator()(v23, v47);
  return v11;
}
