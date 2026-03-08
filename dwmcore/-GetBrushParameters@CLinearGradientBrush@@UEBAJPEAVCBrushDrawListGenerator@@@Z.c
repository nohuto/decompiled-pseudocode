/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800B6320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001EC20 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x180033894 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180079570 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800925F4 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180092E30 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800945A4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800B6654 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B669C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6750 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUM.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D79D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CLinearGradientBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int CurrentSurface; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  __int64 *v7; // rax
  bool v8; // zf
  float *v9; // rdx
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  __int64 v16; // rcx
  unsigned int v17; // ecx
  float *v18; // rax
  float v19; // xmm1_4
  float v20; // xmm6_4
  struct D2D_SIZE_U Size; // rax
  int v22; // ecx
  CSurfaceDrawListBrush *v23; // rcx
  CSurfaceDrawListBrush *v24; // rax
  __int64 v25; // rcx
  unsigned int v27; // [rsp+28h] [rbp-89h]
  __int16 v28; // [rsp+38h] [rbp-79h] BYREF
  char v29; // [rsp+3Ah] [rbp-77h]
  struct IBitmapResource *v30; // [rsp+48h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v31; // [rsp+50h] [rbp-61h] BYREF
  __int128 v32; // [rsp+58h] [rbp-59h] BYREF
  char v33; // [rsp+68h] [rbp-49h]
  CSurfaceDrawListBrush **v34; // [rsp+70h] [rbp-41h] BYREF
  CSurfaceDrawListBrush *v35; // [rsp+78h] [rbp-39h] BYREF
  float v36; // [rsp+80h] [rbp-31h]
  float v37; // [rsp+84h] [rbp-2Dh]
  __int128 v38; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v39[5]; // [rsp+98h] [rbp-19h] BYREF
  float v40; // [rsp+ACh] [rbp-5h]
  float v41; // [rsp+B0h] [rbp-1h] BYREF
  float v42; // [rsp+B4h] [rbp+3h]
  float v43; // [rsp+B8h] [rbp+7h]
  float v44; // [rsp+BCh] [rbp+Bh]
  float v45; // [rsp+C0h] [rbp+Fh]
  float v46; // [rsp+C4h] [rbp+13h]
  int v47; // [rsp+C8h] [rbp+17h]
  float v48; // [rsp+CCh] [rbp+1Bh]
  int v49; // [rsp+D0h] [rbp+1Fh]

  v31 = 0LL;
  v30 = 0LL;
  v33 = 0;
  v32 = 0LL;
  v38 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v27 = 123;
    goto LABEL_21;
  }
  v7 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v34, v30);
  CDrawListBitmap::operator=((__int64 *)&v32, v7);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v35);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
  CBrushDrawListGenerator::Reset(a2);
  v8 = *((_DWORD *)this + 39) == 1;
  v9 = (float *)((char *)a2 + 8);
  v10 = *((float *)this + 59);
  v11 = *((float *)this + 60);
  v12 = *((float *)this + 61);
  v13 = *((float *)this + 58);
  v42 = v10;
  v43 = v11;
  v44 = v12;
  v41 = v13;
  if ( v8 )
  {
    v14 = *((float *)a2 + 3);
    v10 = v10 * v14;
    v15 = *v9 * v11;
    v13 = *v9 * v13;
    v41 = v13;
    v11 = v15;
    v42 = v10;
    v43 = v15;
    v12 = v14 * v12;
    v44 = v12;
  }
  v16 = *((_QWORD *)this + 27);
  v45 = v13 - (float)(v12 - v10);
  v46 = (float)(v11 - v13) + v10;
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v16 + 208LL))(v16, v9, &v34);
    v17 = 0;
    v18 = &v41;
    do
    {
      ++v17;
      v19 = (float)(*((float *)&v35 + 1) * v18[1]) + (float)(*((float *)&v34 + 1) * *v18);
      *v18 = (float)((float)(*(float *)&v35 * v18[1]) + (float)(*(float *)&v34 * *v18)) + v36;
      v18[1] = v19 + v37;
      v18 += 2;
    }
    while ( v17 < 3 );
  }
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform(this, &v41, &v38, v39);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v27 = 164;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(
      v5,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      CurrentSurface,
      v27,
      0LL);
    goto LABEL_22;
  }
  v20 = *((float *)&v38 + 1) + 0.5;
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)&v32);
  v35 = 0LL;
  v42 = 0.0;
  v22 = *(_DWORD *)(*(_QWORD *)&Size + 4LL);
  v39[1] = 0;
  v39[3] = 0;
  v43 = 0.0;
  v45 = 0.0;
  v46 = 0.0;
  v34 = &v31;
  LOBYTE(v36) = 1;
  v49 = (int)FLOAT_1_0;
  v41 = *(float *)v39;
  v44 = *(float *)&v39[2];
  v40 = v20 / (float)v22;
  v48 = v40;
  v47 = v39[4];
  LOBYTE(v28) = InterpolationMode::FromD2D1InterpolationMode(1);
  HIBYTE(v28) = *((_BYTE *)this + 152);
  v29 = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform((struct CSurfaceDrawListBrush *)&v32, &v28, &v41, &v35);
  if ( LOBYTE(v36) )
  {
    v23 = *v34;
    *v34 = v35;
    if ( v23 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v23, 1u);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)v23,
      &`CBitmapRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v6,
      0xB5u,
      0LL);
LABEL_22:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_15;
  }
  v24 = v31;
  v31 = 0LL;
  *(_QWORD *)&v38 = v24;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v38);
  if ( (_QWORD)v38 )
    std::default_delete<CDrawListBrush>::operator()(v25, (__int64 (__fastcall ***)(_QWORD, __int64))v38);
  v6 = 0;
LABEL_15:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v30);
  if ( v31 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v31, 1u);
  return (unsigned int)v6;
}
