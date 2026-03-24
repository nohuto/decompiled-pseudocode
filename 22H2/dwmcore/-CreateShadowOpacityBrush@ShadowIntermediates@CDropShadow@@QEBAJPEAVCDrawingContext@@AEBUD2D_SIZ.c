/*
 * XREFs of ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x180006598
 * Callers:
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180006460 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x1800072F8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x1800073B0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180008758 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x180008ABC (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x180040814 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054720 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180057C44 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6CD8 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        struct CDrawListBrush **a5)
{
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  __int64 v7; // rbx
  void (__fastcall ***v9)(_QWORD, _DWORD *); // rcx
  void (__fastcall *v12)(_QWORD, _DWORD *); // rax
  struct IBitmapRealization *v13; // rdx
  float v14; // xmm8_4
  float v15; // xmm7_4
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // edi
  CSurfaceDrawListBrush *v19; // rcx
  struct D2D_MATRIX_3X2_F *v20; // r9
  CSurfaceDrawListBrush *v21; // r11
  __int64 v22; // xmm1_8
  struct CDrawListBrush *v23; // rdi
  float v24; // xmm3_4
  __int32 v25; // xmm3_4
  __int64 v26; // rax
  float v27; // xmm6_4
  CNineGridDrawListBrush *v28; // rcx
  CSurfaceDrawListBrush *v29; // rcx
  __m128 v31; // [rsp+38h] [rbp-91h] BYREF
  struct D2D_RECT_F v32; // [rsp+48h] [rbp-81h] BYREF
  struct D2D_RECT_F v33; // [rsp+58h] [rbp-71h] BYREF
  __int64 v34; // [rsp+68h] [rbp-61h]
  _DWORD v35[2]; // [rsp+70h] [rbp-59h] BYREF
  CSurfaceDrawListBrush **v36; // [rsp+78h] [rbp-51h] BYREF
  CSurfaceDrawListBrush *v37; // [rsp+80h] [rbp-49h] BYREF
  char v38; // [rsp+88h] [rbp-41h]
  __int128 v39; // [rsp+90h] [rbp-39h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-29h]
  int v41; // [rsp+A8h] [rbp-21h]
  __int64 v42; // [rsp+ACh] [rbp-1Dh]
  int v43; // [rsp+B4h] [rbp-15h]
  char v44; // [rsp+B8h] [rbp-11h]
  CNineGridDrawListBrush *v45; // [rsp+128h] [rbp+5Fh] BYREF
  CSurfaceDrawListBrush *v46; // [rsp+138h] [rbp+6Fh] BYREF

  width = a3->width;
  height = a3->height;
  v7 = 0LL;
  v31.m128_u64[0] = 0LL;
  v9 = (void (__fastcall ***)(_QWORD, _DWORD *))*((_QWORD *)this + 5);
  v31.m128_u64[1] = __PAIR64__(LODWORD(height), LODWORD(width));
  v46 = 0LL;
  v12 = **v9;
  v32.left = 0.0 - a4;
  v32.top = _mm_shuffle_ps(v31, v31, 85).m128_f32[0] - a4;
  v32.right = _mm_shuffle_ps(v31, v31, 170).m128_f32[0] + a4;
  v32.bottom = _mm_shuffle_ps(v31, v31, 255).m128_f32[0] + a4;
  v12(v9, v35);
  v13 = (struct IBitmapRealization *)*((_QWORD *)this + 5);
  v41 = 0;
  v44 = 0;
  v14 = (float)v35[0];
  v15 = (float)v35[1];
  v42 = 0LL;
  v43 = 0;
  v40 = 0LL;
  v39 = 0LL;
  v16 = CDrawListBitmap::Initialize((CDrawListBitmap *)&v39, v13, a2);
  v18 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x412u, 0LL);
  }
  else
  {
    v31.m128_u64[0] = 0LL;
    v36 = &v46;
    v31.m128_u64[1] = __PAIR64__(LODWORD(v15), LODWORD(v14));
    LOWORD(v45) = SamplerMode::k_ClampClampLinear;
    BYTE2(v45) = 1;
    v37 = 0LL;
    v38 = 1;
    v18 = CSurfaceDrawListBrush::CreateWithContentRect(&v39, &v45, &v31, &v37);
    if ( v38 )
    {
      v19 = *v36;
      *v36 = v37;
      if ( v19 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1u);
    }
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v18, 0x41Au, 0LL);
    }
    else
    {
      D2DMatrixHelper::ComputeRectangleTransform((CSurfaceDrawListBrush *)((char *)v46 + 32), &v32, &v33, v20);
      v21 = v46;
      v22 = v34;
      *(struct D2D_RECT_F *)((char *)v46 + 8) = v33;
      *((_QWORD *)v21 + 3) = v22;
      *(_QWORD *)&v32.left = v46;
      v23 = v46;
      v46 = 0LL;
      if ( !CDropShadow::ShadowIntermediates::IsRectangularShadow(this) )
        goto LABEL_20;
      v24 = *((float *)this + 8);
      if ( v24 <= 0.0 )
        goto LABEL_20;
      *(float *)&v25 = v24 + v24;
      v31 = 0LL;
      if ( v14 > (float)(*(float *)&v25 + *(float *)&v25) )
      {
        v31.m128_i32[0] = v25;
        v31.m128_i32[2] = v25;
      }
      if ( v15 > (float)(*(float *)&v25 + *(float *)&v25) )
      {
        v31.m128_i32[1] = v25;
        v31.m128_i32[3] = v25;
      }
      if ( Insets::IsEmpty((const struct Insets *)&v31) )
        goto LABEL_20;
      v26 = 0LL;
      v27 = (float)(a4 + a4) / *(float *)&v25;
      do
      {
        *(float *)((char *)&v36 + v26 * 4) = v27 * v31.m128_f32[v26];
        ++v26;
      }
      while ( v26 < 4 );
      v45 = 0LL;
      *(_QWORD *)&v33.left = &v45;
      *(_QWORD *)&v33.right = 0LL;
      LOBYTE(v34) = 1;
      v18 = CNineGridDrawListBrush::Create(
              (unsigned int)&v32,
              (unsigned int)&v31,
              (unsigned int)&v36,
              0,
              (__int64)&v33.right);
      if ( (_BYTE)v34 )
      {
        v28 = **(CNineGridDrawListBrush ***)&v33.left;
        **(_QWORD **)&v33.left = *(_QWORD *)&v33.right;
        if ( v28 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v28, 1u);
      }
      if ( v18 >= 0 )
      {
        v23 = v45;
        v45 = 0LL;
        if ( *(_QWORD *)&v32.left )
        {
          ((void (*)(void))std::default_delete<CShape>::operator())();
          if ( v45 )
            CNineGridDrawListBrush::`scalar deleting destructor'(v45, 1u);
        }
LABEL_20:
        v7 = 0LL;
        *a5 = v23;
        v18 = 0;
        goto LABEL_21;
      }
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v28, 0LL, 0, v18, 0x446u, 0LL);
      if ( v45 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v45, 1u);
      v7 = *(_QWORD *)&v32.left;
    }
  }
LABEL_21:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v39 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v39);
  v29 = v46;
  if ( v46 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v46, 1u);
  if ( v7 )
    std::default_delete<CShape>::operator()(v29, v7);
  return (unsigned int)v18;
}
