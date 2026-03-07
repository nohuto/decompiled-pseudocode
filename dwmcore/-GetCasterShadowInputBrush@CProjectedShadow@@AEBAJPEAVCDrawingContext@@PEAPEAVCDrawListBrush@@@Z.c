__int64 __fastcall CProjectedShadow::GetCasterShadowInputBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  int v4; // ecx
  CSurfaceDrawListBrush *v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  struct IRenderTargetBitmap *v10; // rax
  struct IBitmapRealization *v11; // rdi
  __int64 v12; // rdx
  CSurfaceDrawListBrush *v13; // rcx
  CSurfaceDrawListBrush *v14; // rsi
  CNineGridDrawListBrush *v15; // rcx
  __m128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // rax
  float v19; // xmm2_4
  struct D2D_MATRIX_3X2_F *v20; // r9
  __int64 v21; // xmm1_8
  FLOAT v22; // xmm0_4
  FLOAT v24; // [rsp+30h] [rbp-59h] BYREF
  CSurfaceDrawListBrush *v25[2]; // [rsp+40h] [rbp-49h] BYREF
  struct D2D_RECT_F v26; // [rsp+50h] [rbp-39h] BYREF
  __int64 v27; // [rsp+60h] [rbp-29h]
  CSurfaceDrawListBrush *v28; // [rsp+68h] [rbp-21h] BYREF
  float left_low; // [rsp+70h] [rbp-19h]
  float top_low; // [rsp+74h] [rbp-15h]
  __m128i si128; // [rsp+78h] [rbp-11h] BYREF
  char v32; // [rsp+88h] [rbp-1h]
  struct D2D_RECT_F v33; // [rsp+90h] [rbp+7h] BYREF

  v4 = *((_DWORD *)this + 82);
  v7 = 0LL;
  if ( !v4 )
  {
    v12 = *((_QWORD *)this + 46);
    if ( v12 )
    {
      v11 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v12 + 8) + 16LL) + v12 + 8);
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v8 = (unsigned int)(v4 - 1);
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 != 4 )
    {
      v9 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147418113, 0x230u, 0LL);
      return (unsigned int)v9;
    }
    v10 = CProjectedShadow::s_cp2xBlurAsset;
  }
  else
  {
    v10 = *(struct IRenderTargetBitmap **)&CProjectedShadow::s_cpFastShadowIntermediate;
  }
  if ( !v10 )
  {
LABEL_10:
    v11 = 0LL;
    goto LABEL_12;
  }
  v11 = (struct IRenderTargetBitmap *)((char *)v10 + *(int *)(*((_QWORD *)v10 + 1) + 16LL) + 8);
LABEL_12:
  (**(void (__fastcall ***)(struct IBitmapRealization *, struct D2D_RECT_F *))v11)(v11, &v33);
  v28 = 0LL;
  left_low = (float)SLODWORD(v33.left);
  top_low = (float)SLODWORD(v33.top);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v26, v11);
  v25[0] = 0LL;
  si128.m128i_i64[0] = (__int64)v25;
  LOWORD(v24) = SamplerMode::k_ClampClampLinear;
  BYTE2(v24) = 1;
  si128.m128i_i64[1] = 0LL;
  v32 = 1;
  v9 = CSurfaceDrawListBrush::CreateWithContentRect(
         (CDrawListBitmap *)&v26,
         (__int16 *)&v24,
         (float *)&v28,
         &si128.m128i_i64[1]);
  if ( v32 )
  {
    v13 = *(CSurfaceDrawListBrush **)si128.m128i_i64[0];
    *(_QWORD *)si128.m128i_i64[0] = si128.m128i_i64[1];
    if ( v13 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v9, 0x241u, 0LL);
    if ( v25[0] )
      CSurfaceDrawListBrush::`vector deleting destructor'(v25[0], 1);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26.right);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
    goto LABEL_36;
  }
  v14 = v25[0];
  v28 = v25[0];
  v25[0] = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26.right);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
  if ( *((_DWORD *)this + 82) )
  {
    v17 = *((_QWORD *)this + 10) + 80LL;
    *(_QWORD *)&v33.left = *((_QWORD *)a2 + 1007);
    v18 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
            v17,
            (__int64)&v33);
    v19 = *((float *)this + 24);
    v33 = *(struct D2D_RECT_F *)(v18 + 60);
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v33.left, v19, v19);
    *(struct D2D_RECT_F *)v25 = v33;
    D2DMatrixHelper::ComputeRectangleTransform((CSurfaceDrawListBrush *)((char *)v14 + 32), &v33, &v26, v20);
    v21 = v27;
    *(struct D2D_RECT_F *)((char *)v14 + 8) = v26;
    *((_QWORD *)v14 + 3) = v21;
  }
  else
  {
    v16 = _mm_xor_ps((__m128)*((unsigned int *)this + 24), (__m128)_xmm);
    *(_OWORD *)((char *)v14 + 8) = *(_OWORD *)&_xmm;
    *((_QWORD *)v14 + 3) = _mm_unpacklo_ps(v16, v16).m128_u64[0];
  }
  if ( *((_DWORD *)this + 82) == 1 )
  {
    v22 = *((float *)this + 24) + *((float *)this + 24);
    *(_QWORD *)&v26.left = v25;
    v25[0] = 0LL;
    *(_QWORD *)&v26.right = 0LL;
    LOBYTE(v27) = 1;
    v24 = v22;
    v33.left = v22;
    v33.top = v22;
    v33.right = v22;
    v33.bottom = v22;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v9 = CNineGridDrawListBrush::Create(
           (struct CNineGridDrawListBrush *)&v28,
           (int)&si128,
           (int)&v33,
           0,
           (CNineGridDrawListBrush **)&v26.right);
    if ( (_BYTE)v27 )
    {
      v15 = **(CNineGridDrawListBrush ***)&v26.left;
      **(_QWORD **)&v26.left = *(_QWORD *)&v26.right;
      if ( v15 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v15, 1);
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v9, 0x26Bu, 0LL);
      v15 = v25[0];
      if ( v25[0] )
        CNineGridDrawListBrush::`scalar deleting destructor'(v25[0], 1);
      v7 = v28;
      goto LABEL_36;
    }
    v14 = v25[0];
    v25[0] = 0LL;
    if ( v28 )
    {
      std::default_delete<CDrawListBrush>::operator()((__int64)v15, (__int64 (__fastcall ***)(_QWORD, __int64))v28);
      v15 = v25[0];
      if ( v25[0] )
        CNineGridDrawListBrush::`scalar deleting destructor'(v25[0], 1);
    }
  }
  if ( *((float *)this + 24) > 0.0 )
  {
    *((_BYTE *)v14 + 52) = 1;
    *((_DWORD *)v14 + 12) = 0;
  }
  v7 = 0LL;
  *a3 = v14;
LABEL_36:
  if ( v7 )
    std::default_delete<CDrawListBrush>::operator()((__int64)v15, (__int64 (__fastcall ***)(_QWORD, __int64))v7);
  return (unsigned int)v9;
}
