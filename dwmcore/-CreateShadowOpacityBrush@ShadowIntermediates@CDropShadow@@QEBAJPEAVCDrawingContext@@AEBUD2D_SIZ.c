__int64 __fastcall CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        struct CDrawListBrush **a5)
{
  float width; // xmm1_4
  float height; // xmm0_4
  CSurfaceDrawListBrush *v7; // rbx
  __int64 v9; // rdx
  struct IBitmapRealization *v10; // rdx
  CSurfaceDrawListBrush *v11; // rcx
  int v12; // edi
  struct D2D_MATRIX_3X2_F *v13; // r9
  CSurfaceDrawListBrush *v14; // r10
  __int64 v15; // xmm1_8
  struct CDrawListBrush *v16; // rdi
  CNineGridDrawListBrush *v17; // rcx
  char v18; // al
  float v19; // xmm0_4
  float v20; // xmm0_4
  struct D2D_RECT_F v22; // [rsp+38h] [rbp-31h] BYREF
  __int128 v23; // [rsp+48h] [rbp-21h] BYREF
  struct D2D_RECT_F v24; // [rsp+58h] [rbp-11h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h]
  _BYTE v26[8]; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v27[32]; // [rsp+78h] [rbp+Fh] BYREF
  CSurfaceDrawListBrush *v28; // [rsp+C8h] [rbp+5Fh] BYREF
  CSurfaceDrawListBrush *v29; // [rsp+D0h] [rbp+67h] BYREF

  v29 = a2;
  width = a3->width;
  height = a3->height;
  v7 = 0LL;
  *(_QWORD *)&v23 = 0LL;
  v9 = *((_QWORD *)this + 7);
  *((_QWORD *)&v23 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
  v29 = 0LL;
  v22.left = 0.0 - a4;
  v22.top = 0.0 - a4;
  v22.right = width + a4;
  v22.bottom = height + a4;
  v23 = *(_OWORD *)((char *)this + 24);
  if ( v9 )
    v10 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v9 + 8) + 16LL) + v9 + 8);
  else
    v10 = 0LL;
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v26, v10);
  *(_QWORD *)&v24.right = 0LL;
  *(_QWORD *)&v24.left = &v29;
  LOWORD(v28) = SamplerMode::k_ClampClampLinear;
  BYTE2(v28) = 1;
  LOBYTE(v25) = 1;
  v12 = CSurfaceDrawListBrush::CreateWithContentRect(
          (CDrawListBitmap *)v26,
          (__int16 *)&v28,
          (float *)&v23,
          (__int64 *)&v24.right);
  if ( (_BYTE)v25 )
  {
    v11 = **(CSurfaceDrawListBrush ***)&v24.left;
    **(_QWORD **)&v24.left = *(_QWORD *)&v24.right;
    if ( v11 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1);
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v12, 0x3DBu, 0LL);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v27);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v26);
    v17 = v29;
    if ( v29 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v29, 1);
  }
  else
  {
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v23, &v22, &v24, v13);
    v14 = v29;
    v15 = v25;
    *(struct D2D_RECT_F *)((char *)v29 + 8) = v24;
    *((_QWORD *)v14 + 3) = v15;
    v16 = v29;
    v28 = v29;
    v29 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v27);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v26);
    v17 = v29;
    if ( v29 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v29, 1);
    v18 = *((_BYTE *)this + 68);
    if ( !v18 && !*((_BYTE *)this + 69) )
      goto LABEL_23;
    v22 = 0LL;
    v23 = 0LL;
    if ( v18 )
    {
      v19 = *((float *)this + 8) - *((float *)this + 6);
      v22.left = a4 + a4;
      v22.right = a4 + a4;
      *(float *)&v23 = v19 * 0.5;
      *((float *)&v23 + 2) = v19 * 0.5;
    }
    if ( *((_BYTE *)this + 69) )
    {
      v20 = *((float *)this + 9) - *((float *)this + 7);
      v22.top = a4 + a4;
      v22.bottom = a4 + a4;
      *((float *)&v23 + 1) = v20 * 0.5;
      *((float *)&v23 + 3) = v20 * 0.5;
    }
    v29 = 0LL;
    *(_QWORD *)&v24.left = &v29;
    *(_QWORD *)&v24.right = 0LL;
    LOBYTE(v25) = 1;
    v12 = CNineGridDrawListBrush::Create(
            (struct CNineGridDrawListBrush *)&v28,
            (int)&v23,
            (int)&v22,
            0,
            (CNineGridDrawListBrush **)&v24.right);
    if ( (_BYTE)v25 )
    {
      v17 = **(CNineGridDrawListBrush ***)&v24.left;
      **(_QWORD **)&v24.left = *(_QWORD *)&v24.right;
      if ( v17 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v17, 1);
    }
    if ( v12 >= 0 )
    {
      v16 = v29;
      v29 = 0LL;
      if ( v28 )
      {
        std::default_delete<CDrawListBrush>::operator()((__int64)v17, (__int64 (__fastcall ***)(_QWORD, __int64))v28);
        v17 = v29;
        if ( v29 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v29, 1);
      }
LABEL_23:
      v7 = 0LL;
      *a5 = v16;
      v12 = 0;
      goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v12, 0x406u, 0LL);
    v17 = v29;
    if ( v29 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v29, 1);
    v7 = v28;
  }
LABEL_29:
  if ( v7 )
    std::default_delete<CDrawListBrush>::operator()((__int64)v17, (__int64 (__fastcall ***)(_QWORD, __int64))v7);
  return (unsigned int)v12;
}
