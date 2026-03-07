__int64 __fastcall CEmptyRegionDrawListBrush::Initialize(
        CEmptyRegionDrawListBrush *this,
        struct CDrawingContext *a2,
        struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  FastRegion::CRegion *v4; // rdi
  int v8; // r14d
  __int64 v9; // xmm1_8
  struct D2D_RECT_F *v10; // r9
  __m128i *v11; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // xmm0_8
  unsigned __int64 v14; // rax
  _DWORD *v15; // rdx
  _DWORD *v16; // r8
  char v17; // al
  __int64 v18; // rdx
  __m128i *v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // xmm0_8
  unsigned __int64 v22; // rax
  int v23; // eax
  const struct D2D_RECT_F *v24; // rdx
  const struct CRegion *ContentRegion; // rax
  int v27; // eax
  int v28; // eax
  CSurfaceDrawListBrush *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int16 v32; // [rsp+30h] [rbp-79h] BYREF
  char v33; // [rsp+32h] [rbp-77h]
  struct tagRECT v34; // [rsp+40h] [rbp-69h] BYREF
  char v35; // [rsp+50h] [rbp-59h]
  D2D_RECT_F v36; // [rsp+58h] [rbp-51h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+68h] [rbp-41h] BYREF
  _DWORD *v38; // [rsp+80h] [rbp-29h] BYREF
  _DWORD v39[3]; // [rsp+88h] [rbp-21h] BYREF
  _DWORD v40[2]; // [rsp+94h] [rbp-15h] BYREF
  _DWORD v41[3]; // [rsp+9Ch] [rbp-Dh] BYREF
  _DWORD v42[10]; // [rsp+A8h] [rbp-1h] BYREF
  void *retaddr; // [rsp+108h] [rbp+5Fh]

  v3 = *((_QWORD *)this + 9);
  v4 = (CEmptyRegionDrawListBrush *)((char *)this + 88);
  v8 = 0;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v3 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v3 + 24);
  *(_OWORD *)&matrix.m11 = *(_OWORD *)(v3 + 8);
  *(_QWORD *)&matrix.m[2][0] = v9;
  D2D1InvertMatrix(&matrix);
  D2DMatrixHelper::TransformRectConservative(
    (D2DMatrixHelper *)a3,
    (const struct D2D_RECT_F *)&matrix,
    (const struct D2D_MATRIX_3X2_F *)&v36,
    v10);
  v11 = (__m128i *)RECTFromD2DRectF(&v34, &v36);
  v12 = v11->m128i_i64[0];
  v13 = _mm_srli_si128(*v11, 8).m128i_u64[0];
  v14 = HIDWORD(v11->m128i_i64[0]);
  if ( (int)v12 >= (int)v13 || (int)v14 >= SHIDWORD(v13) )
  {
    **(_DWORD **)v4 = 0;
  }
  else
  {
    v15 = *(_DWORD **)v4;
    v16 = (_DWORD *)(*(_QWORD *)v4 + 28LL);
    *v15 = 2;
    *v16 = v12;
    v15[3] = v14;
    v16[1] = v13;
    v15[4] = (_DWORD)v16 - ((_DWORD)v15 + 12);
    v15[1] = v12;
    v15[2] = v13;
    v15[6] = (_DWORD)v16 - ((_DWORD)v15 + 20) + 8;
    v15[5] = HIDWORD(v13);
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9), 4LL);
  v18 = *((_QWORD *)this + 9);
  if ( v17 )
  {
    ContentRegion = CPrimitiveGroupDrawListGenerator::GetContentRegion(*(CPrimitiveGroupDrawListGenerator **)(v18 + 72));
    if ( ContentRegion )
    {
      v27 = FastRegion::CRegion::Subtract(v4, ContentRegion);
      if ( v27 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v27, retaddr);
    }
  }
  else
  {
    if ( *(_BYTE *)(v18 + 52) )
    {
      v39[0] = 0;
      v38 = v39;
      v19 = (__m128i *)RECTFromD2DRectF(&v34, (const struct D2D_RECT_F *)(v18 + 32));
      v20 = v19->m128i_i64[0];
      v21 = _mm_srli_si128(*v19, 8).m128i_u64[0];
      v22 = HIDWORD(v19->m128i_i64[0]);
      if ( (int)v20 < (int)v21 && (int)v22 < SHIDWORD(v21) )
      {
        v40[0] = v22;
        v39[0] = 2;
        v39[1] = v20;
        v39[2] = v21;
        v40[1] = (unsigned int)v42 + 1 - 5 - (unsigned int)v40;
        v41[2] = v20;
        v42[0] = v21;
        v41[1] = (unsigned int)v42 + 1 - 5 - (unsigned int)v41 + 8;
        v41[0] = HIDWORD(v21);
      }
      v23 = FastRegion::CRegion::Subtract(v4, (const struct CRegion *)&v38);
      if ( v23 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v23, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v38);
    }
    else
    {
      **(_DWORD **)v4 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(
           *((_QWORD *)this + 9),
           5LL) )
    {
      v24 = (const struct D2D_RECT_F *)((*((_QWORD *)this + 9) + 552LL) & -(__int64)(*(_BYTE *)(*((_QWORD *)this + 9)
                                                                                              + 569LL) != 0));
      if ( v24 )
      {
        v36 = (D2D_RECT_F)*RECTFromD2DRectF(&v34, v24);
        v28 = CRegion::TryAddRectangle(v4, (const struct tagRECT *)&v36);
        if ( v28 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v28, retaddr);
      }
    }
  }
  if ( **(_DWORD **)v4 )
  {
    v35 = 0;
    v34 = 0LL;
    CDrawListBitmap::SetTransparent((CDrawListBitmap *)&v34, a2);
    *(_QWORD *)&v36.left = 0LL;
    *(_QWORD *)&matrix.m[1][0] = 0LL;
    *(_QWORD *)&matrix.m11 = &v36;
    v32 = SamplerMode::k_ClampClampLinear;
    v33 = 1;
    LOBYTE(matrix.m[2][0]) = 1;
    v8 = CSurfaceDrawListBrush::CreateWithTextureTransform(&v34, &v32, &Matrix3x3::Zero, matrix.m[1]);
    if ( LOBYTE(matrix.m[2][0]) )
    {
      v29 = **(CSurfaceDrawListBrush ***)&matrix.m11;
      **(_QWORD **)&matrix.m11 = *(_QWORD *)&matrix.m[1][0];
      if ( v29 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v29, 1u);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v29, 0LL, 0, v8, 0x70u, 0LL);
    }
    else
    {
      v30 = *(_QWORD *)&v36.left;
      v31 = *((_QWORD *)this + 10);
      *(_QWORD *)&v36.left = 0LL;
      *((_QWORD *)this + 10) = v30;
      if ( !v31 )
      {
LABEL_32:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v34.right);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v34);
        return (unsigned int)v8;
      }
      std::default_delete<CDrawListBrush>::operator()();
    }
    if ( *(_QWORD *)&v36.left )
      CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v36.left, 1u);
    goto LABEL_32;
  }
  return (unsigned int)v8;
}
