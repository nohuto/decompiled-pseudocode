/*
 * XREFs of ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000C550
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D094 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x18000D2DC (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180079570 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007CF6C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007ECB0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?IsProtected@CDrawListBitmap@@QEBA_NXZ @ 0x180092E04 (-IsProtected@CDrawListBitmap@@QEBA_NXZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180092E30 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800946C0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180095C98 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D79D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800E07BC (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v8; // r15
  int v9; // edi
  unsigned int v10; // eax
  CSurfaceDrawListBrush *v11; // rcx
  int v12; // ebx
  int DrawList; // eax
  unsigned int v14; // ecx
  CGeometryOnlyDrawListBrush *v16; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CGeometryOnlyDrawListBrush *v19; // rax
  __int128 v20; // xmm0
  CGeometryOnlyDrawListBrush *v21; // rcx
  CSurfaceDrawListBrush *v22; // rax
  unsigned __int64 v23; // xmm1_8
  _BYTE v24[16]; // [rsp+30h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v25; // [rsp+40h] [rbp-C0h] BYREF
  struct CGeometryOnlyDrawListBrush *v26[2]; // [rsp+48h] [rbp-B8h] BYREF
  char v27; // [rsp+58h] [rbp-A8h]
  CSurfaceDrawListBrush *v28; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v30[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[6]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp-50h]
  unsigned int v33; // [rsp+B4h] [rbp-4Ch]
  int v34; // [rsp+C0h] [rbp-40h]
  _QWORD v35[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+12Ch] [rbp+2Ch]
  char v38; // [rsp+130h] [rbp+30h]
  __int128 v39; // [rsp+140h] [rbp+40h] BYREF
  char v40; // [rsp+150h] [rbp+50h]
  __int128 v41; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v42[16]; // [rsp+170h] [rbp+70h] BYREF
  int v43; // [rsp+180h] [rbp+80h]
  int v44; // [rsp+184h] [rbp+84h]
  int v45; // [rsp+188h] [rbp+88h]
  int v46; // [rsp+18Ch] [rbp+8Ch]
  int v47; // [rsp+190h] [rbp+90h]
  _BYTE v48[4480]; // [rsp+1C0h] [rbp+C0h] BYREF

  v34 = 0;
  v41 = 0LL;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a3, (CMILMatrix *)v31);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v41) )
  {
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v42, a2);
    v25 = 0LL;
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a3) )
    {
      v26[1] = 0LL;
      v26[0] = (struct CGeometryOnlyDrawListBrush *)&v25;
      v27 = 1;
      v12 = CGeometryOnlyDrawListBrush::Create(&v26[1]);
      if ( v27 )
      {
        v16 = *(CGeometryOnlyDrawListBrush **)v26[0];
        *(_QWORD *)v26[0] = v26[1];
        if ( v16 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v16, 1u);
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v12, 0x1C9u, 0LL);
        v21 = v25;
        if ( !v25 )
        {
LABEL_29:
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v42);
          return (unsigned int)v12;
        }
LABEL_28:
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v21, 1u);
        goto LABEL_29;
      }
      width = a3->width;
      height = a3->height;
      v19 = v25;
      v26[0] = 0LL;
      v26[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      v20 = *(_OWORD *)v26;
      *((_BYTE *)v25 + 52) = 1;
      *((_DWORD *)v19 + 12) = 50529027;
      *((_OWORD *)v19 + 2) = v20;
    }
    CDrawListBitmap::CDrawListBitmap(
      (CDrawListBitmap *)v29,
      (struct IBitmapResource *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v29) && *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = (int)FLOAT_1_0;
      v43 = 4;
    }
    else
    {
      v9 = 512;
      if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v29) )
        v9 = 514;
      v10 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a2 + 83));
      v24[0] = InterpolationMode::FromD2D1InterpolationMode(v10);
      v24[1] = 1;
      *(_QWORD *)&v39 = &v28;
      v28 = 0LL;
      *(_OWORD *)v26 = v41;
      *((_QWORD *)&v39 + 1) = 0LL;
      v40 = 1;
      v24[2] = 1;
      v12 = CSurfaceDrawListBrush::CreateWithContentRect(v29, v24, v26, (char *)&v39 + 8);
      if ( v40 )
      {
        v11 = *(CSurfaceDrawListBrush **)v39;
        *(_QWORD *)v39 = *((_QWORD *)&v39 + 1);
        if ( v11 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1u);
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v12, 0x1EBu, 0LL);
        if ( v28 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
        goto LABEL_35;
      }
      if ( v8 )
      {
        v22 = v28;
        *(_QWORD *)&v39 = v31[0];
        *((_QWORD *)&v39 + 1) = v31[2];
        v23 = _mm_unpacklo_ps((__m128)v32, (__m128)v33).m128_u64[0];
        *(_OWORD *)((char *)v28 + 8) = v39;
        *((_QWORD *)v22 + 3) = v23;
      }
      v26[0] = v28;
      v28 = 0LL;
      CBrushDrawListGenerator::AttachInput(v42, 0LL, v26);
      if ( v26[0] )
        std::default_delete<CDrawListBrush>::operator()();
      v43 = v9;
      if ( v28 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
    }
    v35[0] = v25;
    v35[1] = 0LL;
    v36 = 0;
    v37 = 257;
    v38 = 0;
    CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v48);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v42,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v35,
                 (struct CDrawListEntryBuilder *)v48);
    v12 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v48);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v48);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v30);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v29);
      if ( v25 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v25, 1u);
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v42);
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, DrawList, 0x204u, 0LL);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v48);
LABEL_35:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v30);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v29);
    v21 = v25;
    if ( !v25 )
      goto LABEL_29;
    goto LABEL_28;
  }
  return 0;
}
