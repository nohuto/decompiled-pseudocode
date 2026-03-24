/*
 * XREFs of ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801E7A20
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
 *     ?SetCommonShaderConstants@CRadialGradientEffect@@QEAAXMM@Z @ 0x180269898 (-SetCommonShaderConstants@CRadialGradientEffect@@QEAAXMM@Z.c)
 *     ?SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z @ 0x1802698C8 (-SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z.c)
 */

__int64 __fastcall CRadialGradientBrush::GetBrushParameters(
        CRadialGradientEffect **this,
        struct CBrushDrawListGenerator *a2)
{
  int CurrentSurface; // eax
  __int64 v5; // rcx
  int v6; // ebx
  bool v7; // zf
  float *v8; // rdx
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  CRadialGradientEffect *v16; // rcx
  unsigned int v17; // ecx
  float *v18; // rax
  float v19; // xmm1_4
  struct D2D_SIZE_U Size; // rax
  float v21; // xmm6_4
  float v22; // xmm7_4
  struct D2D_SIZE_U v23; // rax
  CRadialGradientEffect *v24; // rcx
  float v25; // xmm3_4
  FLOAT v26; // xmm1_4
  CSurfaceDrawListBrush *v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  unsigned int v30; // r8d
  unsigned int v32; // [rsp+28h] [rbp-E0h]
  __int16 v33; // [rsp+38h] [rbp-D0h] BYREF
  char v34; // [rsp+3Ah] [rbp-CEh]
  struct D2D_POINT_2F v35; // [rsp+48h] [rbp-C0h] BYREF
  struct IBitmapResource *v36; // [rsp+50h] [rbp-B8h] BYREF
  CSurfaceDrawListBrush *v37; // [rsp+58h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush *v38[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h]
  int v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+7Ch] [rbp-8Ch]
  int v42; // [rsp+84h] [rbp-84h]
  char v43; // [rsp+88h] [rbp-80h]
  CSurfaceDrawListBrush **v44; // [rsp+90h] [rbp-78h] BYREF
  CSurfaceDrawListBrush *v45; // [rsp+98h] [rbp-70h] BYREF
  float v46; // [rsp+A0h] [rbp-68h]
  float v47; // [rsp+A4h] [rbp-64h]
  __int128 v48; // [rsp+A8h] [rbp-60h] BYREF
  float v49; // [rsp+B8h] [rbp-50h]
  float v50; // [rsp+BCh] [rbp-4Ch]
  float v51; // [rsp+C0h] [rbp-48h]
  float v52; // [rsp+C4h] [rbp-44h]
  int v53; // [rsp+C8h] [rbp-40h]
  int v54; // [rsp+CCh] [rbp-3Ch]
  float v55; // [rsp+D0h] [rbp-38h] BYREF
  float v56; // [rsp+D4h] [rbp-34h]
  float v57; // [rsp+D8h] [rbp-30h]
  float v58; // [rsp+DCh] [rbp-2Ch]
  float v59; // [rsp+E0h] [rbp-28h]
  float v60; // [rsp+E4h] [rbp-24h]
  int v61; // [rsp+E8h] [rbp-20h]
  int v62; // [rsp+ECh] [rbp-1Ch]
  int v63; // [rsp+F0h] [rbp-18h]

  v37 = 0LL;
  v36 = 0LL;
  v41 = 0LL;
  *(_OWORD *)v38 = 0LL;
  v42 = 0;
  v39 = 0LL;
  v40 = 0;
  v43 = 0;
  v48 = 0LL;
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v36);
  CurrentSurface = CGradientBrush::GetCurrentSurface(
                     (CGradientBrush *)this,
                     *(_QWORD *)a2,
                     (__int64 *)&v36,
                     (__int64)&v48);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v32 = 82;
    goto LABEL_24;
  }
  CurrentSurface = CDrawListBitmap::Initialize((CDrawListBitmap *)v38, v36, *(const struct CDrawingContext **)a2);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v32 = 85;
    goto LABEL_24;
  }
  CBrushDrawListGenerator::Reset(a2);
  v7 = *((_DWORD *)this + 27) == 1;
  v8 = (float *)((char *)a2 + 8);
  v9 = *((float *)this + 48);
  v10 = *((float *)this + 49);
  v11 = v9 + *((float *)this + 50);
  v55 = v9;
  v12 = v10 + *((float *)this + 51);
  v56 = v10;
  v58 = v10;
  v57 = v11;
  v59 = v9;
  v60 = v12;
  if ( v7 )
  {
    v13 = v9 * *v8;
    v14 = v11 * *v8;
    v15 = *((float *)a2 + 3) * v12;
    v56 = *((float *)a2 + 3) * v10;
    v58 = v56;
    v55 = v13;
    v57 = v14;
    v59 = v13;
    v60 = v15;
  }
  v16 = this[21];
  if ( v16 )
  {
    (*(void (__fastcall **)(CRadialGradientEffect *, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v16 + 224LL))(
      v16,
      v8,
      &v44);
    v17 = 0;
    v18 = &v55;
    do
    {
      ++v17;
      v19 = (float)(*((float *)&v45 + 1) * v18[1]) + (float)(*((float *)&v44 + 1) * *v18);
      *v18 = (float)((float)(v18[1] * *(float *)&v45) + (float)(*v18 * *(float *)&v44)) + v46;
      v18[1] = v19 + v47;
      v18 += 2;
    }
    while ( v17 < 3 );
  }
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform((__int64)this, (__int64)&v55, (__int64)&v48);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v32 = 123;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180304EE0, 2u, CurrentSurface, v32, 0LL);
    goto LABEL_25;
  }
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)v38, &v35);
  v21 = *((float *)&v48 + 1) + 0.5;
  v22 = 0.5 / (float)*(int *)Size.width;
  v23 = CDrawListBitmap::GetSize((CDrawListBitmap *)v38, &v35);
  CRadialGradientEffect::SetCommonShaderConstants(this[23], v22, v21 / (float)*(int *)(*(_QWORD *)&v23 + 4LL));
  v24 = this[23];
  if ( !*((_BYTE *)v24 + 68) )
  {
    v25 = *((float *)&v48 + 2);
    if ( *((_BYTE *)this + 104) == 1 )
      v25 = *((float *)&v48 + 2) - 1.0;
    v26 = (float)(*((float *)this + 53) / *((float *)this + 51)) * (float)(v25 / *((float *)&v48 + 2));
    v35.x = (float)(*((float *)this + 52) / *((float *)this + 50)) * (float)(v25 / *((float *)&v48 + 2));
    v35.y = v26;
    CRadialGradientEffect::SetNonCenteredShaderConstants(v24, &v35, *((float *)&v48 + 2), v25);
  }
  v57 = 0.0;
  v60 = 0.0;
  v55 = v49;
  v56 = v50;
  v58 = v51;
  v59 = v52;
  v61 = v53;
  v62 = v54;
  v44 = &v37;
  v45 = 0LL;
  LOBYTE(v46) = 1;
  v63 = 1065353216;
  LOBYTE(v33) = InterpolationMode::FromD2D1InterpolationMode(1);
  HIBYTE(v33) = *((_BYTE *)this + 104);
  v34 = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform((struct CSurfaceDrawListBrush *)v38, &v33, (__int64)&v55, &v45);
  if ( LOBYTE(v46) )
  {
    v27 = *v44;
    *v44 = v45;
    if ( v27 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v27, 1, v28);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v27, &dword_180304EE0, 2u, v6, 0xBCu, 0LL);
LABEL_25:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_26;
  }
  v35 = (struct D2D_POINT_2F)v37;
  v37 = 0LL;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, &v35);
  if ( v35 )
    std::default_delete<CShape>::operator()(v29, *(__int64 (__fastcall ****)(_QWORD, __int64))&v35);
  v6 = 0;
LABEL_26:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v38[1]);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v38);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v36);
  if ( v37 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v37, 1, v30);
  return (unsigned int)v6;
}
