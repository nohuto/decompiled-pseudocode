__int64 __fastcall CBlurredWallpaperBackdropBrush::GetBrushParameters(
        CBlurredWallpaperBackdropBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int BlurredWallpaperEffectInput; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // edi
  CSurfaceDrawListBrush *v7; // r8
  CSurfaceDrawListBrush *v8; // rax
  __int64 v9; // rcx
  __int16 v11; // [rsp+30h] [rbp-69h] BYREF
  char v12; // [rsp+32h] [rbp-67h]
  CSurfaceDrawListBrush *v13; // [rsp+40h] [rbp-59h] BYREF
  CSurfaceDrawListBrush *v14; // [rsp+48h] [rbp-51h] BYREF
  CSurfaceDrawListBrush **v15; // [rsp+50h] [rbp-49h]
  CSurfaceDrawListBrush *v16; // [rsp+58h] [rbp-41h] BYREF
  char v17; // [rsp+60h] [rbp-39h]
  __int128 v18; // [rsp+70h] [rbp-29h] BYREF
  char v19; // [rsp+80h] [rbp-19h]
  __int128 v20; // [rsp+88h] [rbp-11h]
  char v21; // [rsp+9Dh] [rbp+4h]
  _OWORD v22[4]; // [rsp+A0h] [rbp+7h] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v19 = 0;
  v18 = 0LL;
  v22[0] = 0LL;
  EffectInput::Reset((struct EffectInput *)&v18);
  BlurredWallpaperEffectInput = CDrawingContext::GetBlurredWallpaperEffectInput(
                                  *(const struct CVisualTree ***)a2,
                                  (const struct D2D_SIZE_F *)a2 + 1,
                                  (struct EffectInput *)&v18);
  if ( BlurredWallpaperEffectInput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, BlurredWallpaperEffectInput, 0x30u, 0LL);
LABEL_15:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_16;
  }
  if ( v21 )
  {
    *(_OWORD *)((char *)a2 + 20) = v20;
    goto LABEL_16;
  }
  v13 = 0LL;
  v16 = 0LL;
  v15 = &v13;
  v11 = SamplerMode::k_ClampClampLinear;
  v12 = 1;
  v17 = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform((struct CSurfaceDrawListBrush *)&v18, &v11, v22, &v16);
  if ( v17 )
  {
    v5 = (__int64)v16;
    v7 = *v15;
    *v15 = v16;
    if ( v7 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v7, 1);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, 0x3Du, 0LL);
    if ( v13 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1);
    goto LABEL_15;
  }
  v8 = v13;
  v13 = 0LL;
  v14 = v8;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v14);
  if ( v14 )
    std::default_delete<CDrawListBrush>::operator()(v9, (__int64 (__fastcall ***)(_QWORD, __int64))v14);
  *((_DWORD *)a2 + 4) |= 0x800u;
  if ( v13 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1);
LABEL_16:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
  return 0LL;
}
