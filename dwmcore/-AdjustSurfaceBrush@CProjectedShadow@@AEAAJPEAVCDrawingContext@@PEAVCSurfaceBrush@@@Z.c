__int64 __fastcall CProjectedShadow::AdjustSurfaceBrush(
        struct CComposition **this,
        struct CDrawingContext *a2,
        struct CSurfaceBrush *a3)
{
  __m128 v4; // xmm6
  struct D2D_MATRIX_3X2_F *v6; // r9
  CComponentTransform2D *v7; // rax
  __int64 v8; // rcx
  struct CComponentTransform2D *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-60h]
  _DWORD v15[4]; // [rsp+30h] [rbp-50h] BYREF
  struct D2D_RECT_F v16; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_RECT_F v17; // [rsp+50h] [rbp-30h] BYREF

  v4 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a3 + 152));
  CProjectedShadow::CalculateBounds(this, &v16, a3, *((_QWORD *)a2 + 1007));
  v15[0] = v4.m128_i32[0];
  v15[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  v15[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  v15[3] = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)v15, &v16, &v17, v6);
  *(_QWORD *)&v16.left = 0LL;
  v7 = (CComponentTransform2D *)DefaultHeap::AllocClear(0xE0uLL);
  if ( v7 )
    v7 = CComponentTransform2D::CComponentTransform2D(v7, this[2]);
  wil::com_ptr_t<CComponentTransform2D,wil::err_returncode_policy>::operator=((__int64 *)&v16, (__int64)v7);
  v9 = *(struct CComponentTransform2D **)&v16.left;
  if ( *(_QWORD *)&v16.left )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, void *, struct D2D_RECT_F *))xmmword_1803E0638)(
            *(_QWORD *)&v16.left + SDWORD2(xmmword_1803E0638),
            &CComponentTransform2D::sc_TransformMatrix,
            &v17);
    v10 = v11;
    if ( v11 < 0 )
    {
      v14 = 1244;
    }
    else
    {
      v11 = CSurfaceBrush::SetTransform((struct CResource **)a3, v9);
      v10 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      v14 = 1246;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v14, 0LL);
    goto LABEL_10;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x4DAu, 0LL);
LABEL_10:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return v10;
}
