/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801D2530
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001B570 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180050134 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x180051CC0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054720 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180056430 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180056B28 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180094ABC (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180094D28 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E6D54 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801E6FA8 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUM.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CLinearGradientBrush *this,
        const struct CDrawingContext **a2)
{
  int CurrentSurface; // eax
  __int64 v5; // rcx
  int v6; // ebx
  bool v7; // zf
  float *v8; // rdx
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  __int64 v15; // rcx
  unsigned int v16; // ecx
  float *v17; // rax
  float v18; // xmm1_4
  float v19; // xmm6_4
  struct D2D_SIZE_U Size; // rax
  int v21; // ecx
  CSurfaceDrawListBrush *v22; // rcx
  unsigned int v23; // r8d
  CSurfaceDrawListBrush *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r8d
  unsigned int v28; // [rsp+28h] [rbp-99h]
  __int16 v29; // [rsp+38h] [rbp-89h] BYREF
  char v30; // [rsp+3Ah] [rbp-87h]
  struct IBitmapResource *v31; // [rsp+48h] [rbp-79h] BYREF
  CSurfaceDrawListBrush *v32; // [rsp+50h] [rbp-71h] BYREF
  __int128 v33; // [rsp+58h] [rbp-69h] BYREF
  __int64 v34; // [rsp+68h] [rbp-59h]
  int v35; // [rsp+70h] [rbp-51h]
  __int64 v36; // [rsp+74h] [rbp-4Dh]
  int v37; // [rsp+7Ch] [rbp-45h]
  char v38; // [rsp+80h] [rbp-41h]
  CSurfaceDrawListBrush **v39; // [rsp+88h] [rbp-39h] BYREF
  CSurfaceDrawListBrush *v40; // [rsp+90h] [rbp-31h] BYREF
  float v41; // [rsp+98h] [rbp-29h]
  float v42; // [rsp+9Ch] [rbp-25h]
  __int128 v43; // [rsp+A0h] [rbp-21h] BYREF
  _DWORD v44[5]; // [rsp+B0h] [rbp-11h] BYREF
  float v45; // [rsp+C4h] [rbp+3h]
  float v46; // [rsp+C8h] [rbp+7h] BYREF
  float v47; // [rsp+CCh] [rbp+Bh]
  float v48; // [rsp+D0h] [rbp+Fh]
  float v49; // [rsp+D4h] [rbp+13h]
  float v50; // [rsp+D8h] [rbp+17h]
  float v51; // [rsp+DCh] [rbp+1Bh]
  int v52; // [rsp+E0h] [rbp+1Fh]
  float v53; // [rsp+E4h] [rbp+23h]
  int v54; // [rsp+E8h] [rbp+27h]

  v32 = 0LL;
  v35 = 0;
  v31 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  v37 = 0;
  v34 = 0LL;
  v38 = 0;
  v43 = 0LL;
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v31);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v28 = 123;
    goto LABEL_20;
  }
  CurrentSurface = CDrawListBitmap::Initialize((CDrawListBitmap *)&v33, v31, *a2);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v28 = 126;
    goto LABEL_20;
  }
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
  v7 = *((_DWORD *)this + 27) == 1;
  v8 = (float *)(a2 + 1);
  v9 = *((float *)this + 46);
  v10 = *((float *)this + 48);
  v11 = *((float *)this + 49);
  v12 = *((float *)this + 47);
  v46 = v9;
  v48 = v10;
  v49 = v11;
  v47 = v12;
  if ( v7 )
  {
    v9 = v9 * *v8;
    v13 = *v8 * v10;
    v14 = *((float *)a2 + 3) * v11;
    v12 = *((float *)a2 + 3) * v12;
    v47 = v12;
    v10 = v13;
    v46 = v9;
    v48 = v13;
    v11 = v14;
    v49 = v14;
  }
  v15 = *((_QWORD *)this + 21);
  v50 = v9 - (float)(v11 - v12);
  v51 = (float)(v10 - v9) + v12;
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v15 + 224LL))(v15, v8, &v39);
    v16 = 0;
    v17 = &v46;
    do
    {
      ++v16;
      v18 = (float)(*((float *)&v39 + 1) * *v17) + (float)(*((float *)&v40 + 1) * v17[1]);
      *v17 = (float)((float)(*(float *)&v40 * v17[1]) + (float)(*(float *)&v39 * *v17)) + v41;
      v17[1] = v18 + v42;
      v17 += 2;
    }
    while ( v16 < 3 );
  }
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform(this, &v46, &v43, v44);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v28 = 165;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180304EE0, 2u, CurrentSurface, v28, 0LL);
    goto LABEL_21;
  }
  v19 = *((float *)&v43 + 1) + 0.5;
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)&v33, &v43);
  v40 = 0LL;
  v47 = 0.0;
  v21 = *(_DWORD *)(*(_QWORD *)&Size + 4LL);
  v44[1] = 0;
  v44[3] = 0;
  v48 = 0.0;
  v50 = 0.0;
  v51 = 0.0;
  v39 = &v32;
  LOBYTE(v41) = 1;
  v54 = (int)FLOAT_1_0;
  v46 = *(float *)v44;
  v49 = *(float *)&v44[2];
  v45 = v19 / (float)v21;
  v53 = v45;
  v52 = v44[4];
  LOBYTE(v29) = InterpolationMode::FromD2D1InterpolationMode(1);
  HIBYTE(v29) = *((_BYTE *)this + 104);
  v30 = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(
         (struct CSurfaceDrawListBrush *)&v33,
         &v29,
         (__int64)&v46,
         &v40);
  if ( LOBYTE(v41) )
  {
    v22 = *v39;
    *v39 = v40;
    if ( v22 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1, v23);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, &dword_180304EE0, 2u, v6, 0xB6u, 0LL);
LABEL_21:
    CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2);
    goto LABEL_22;
  }
  v24 = v32;
  v32 = 0LL;
  *(_QWORD *)&v43 = v24;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, &v43);
  if ( (_QWORD)v43 )
    std::default_delete<CShape>::operator()(v25, (__int64 (__fastcall ***)(_QWORD, __int64))v43);
  *((_DWORD *)a2 + 4) = 128;
  v6 = 0;
LABEL_22:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v33);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v31);
  if ( v32 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v32, 1, v26);
  return (unsigned int)v6;
}
