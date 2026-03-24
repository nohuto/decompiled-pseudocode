/*
 * XREFs of ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800133C0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013B98 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x180013C58 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180051B20 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180051B68 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x180051CC0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054720 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054E94 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180056430 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsProtected@CDrawListBitmap@@QEBA_NXZ @ 0x180056988 (-IsProtected@CDrawListBitmap@@QEBA_NXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800577C0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180057AA8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180057C44 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058560 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180092A8C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180094ABC (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180094C48 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094C7C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C8D60 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v8; // r15
  bool v9; // r9
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // ebx
  int v13; // edi
  unsigned int v14; // eax
  CSurfaceDrawListBrush *v15; // rcx
  __int64 v16; // rcx
  int DrawList; // eax
  unsigned int v18; // ecx
  CGeometryOnlyDrawListBrush *v20; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CGeometryOnlyDrawListBrush *v23; // rax
  __int128 v24; // xmm0
  CGeometryOnlyDrawListBrush *v25; // rcx
  CSurfaceDrawListBrush *v26; // rax
  unsigned __int64 v27; // xmm1_8
  _BYTE v28[16]; // [rsp+30h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v29; // [rsp+40h] [rbp-C0h] BYREF
  struct CGeometryOnlyDrawListBrush *v30[2]; // [rsp+48h] [rbp-B8h] BYREF
  char v31; // [rsp+58h] [rbp-A8h]
  CSurfaceDrawListBrush *v32; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h]
  int v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+84h] [rbp-7Ch]
  int v37; // [rsp+8Ch] [rbp-74h]
  char v38; // [rsp+90h] [rbp-70h]
  _QWORD v39[6]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp-30h]
  unsigned int v41; // [rsp+D4h] [rbp-2Ch]
  int v42; // [rsp+E0h] [rbp-20h]
  _QWORD v43[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v44; // [rsp+100h] [rbp+0h]
  __int16 v45; // [rsp+14Ch] [rbp+4Ch]
  char v46; // [rsp+14Eh] [rbp+4Eh]
  __int128 v47; // [rsp+150h] [rbp+50h] BYREF
  char v48; // [rsp+160h] [rbp+60h]
  __int128 v49; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v50[16]; // [rsp+180h] [rbp+80h] BYREF
  int v51; // [rsp+190h] [rbp+90h]
  int v52; // [rsp+194h] [rbp+94h]
  int v53; // [rsp+198h] [rbp+98h]
  int v54; // [rsp+19Ch] [rbp+9Ch]
  int v55; // [rsp+1A0h] [rbp+A0h]
  char v56; // [rsp+1CCh] [rbp+CCh]
  _BYTE v57[2304]; // [rsp+1D0h] [rbp+D0h] BYREF

  v42 = 0;
  v49 = 0LL;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a3, (CMILMatrix *)v39);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v49) )
  {
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v50, a2);
    v29 = 0LL;
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a3) )
    {
      v30[1] = 0LL;
      v30[0] = (struct CGeometryOnlyDrawListBrush *)&v29;
      v31 = 1;
      v12 = CGeometryOnlyDrawListBrush::Create(&v30[1]);
      if ( v31 )
      {
        v20 = *(CGeometryOnlyDrawListBrush **)v30[0];
        *(_QWORD *)v30[0] = v30[1];
        if ( v20 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v20, 1u);
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, v12, 0x1D8u, 0LL);
        v25 = v29;
        if ( !v29 )
        {
LABEL_30:
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v50);
          return (unsigned int)v12;
        }
LABEL_29:
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v25, 1u);
        goto LABEL_30;
      }
      width = a3->width;
      height = a3->height;
      v23 = v29;
      v30[0] = 0LL;
      v30[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      v24 = *(_OWORD *)v30;
      *((_BYTE *)v29 + 52) = 1;
      *((_DWORD *)v23 + 12) = 50529027;
      *((_OWORD *)v23 + 2) = v24;
    }
    v35 = 0;
    v36 = 0LL;
    v37 = 0;
    v34 = 0LL;
    v38 = 0;
    v33 = 0LL;
    v10 = CDrawListBitmap::Initialize(
            (CDrawListBitmap *)&v33,
            (struct IBitmapResource *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
            a2,
            v9);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1E0u, 0LL);
      goto LABEL_37;
    }
    if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)&v33) && *(_BYTE *)(*((_QWORD *)this + 2) + 1129LL) )
    {
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = (int)FLOAT_1_0;
      v56 = 0;
      v51 = 4;
    }
    else
    {
      v13 = 512;
      if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)&v33) )
        v13 = 514;
      v14 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a2 + 68));
      v28[0] = InterpolationMode::FromD2D1InterpolationMode(v14);
      v28[1] = 1;
      *(_QWORD *)&v47 = &v32;
      v32 = 0LL;
      *(_OWORD *)v30 = v49;
      *((_QWORD *)&v47 + 1) = 0LL;
      v48 = 1;
      v28[2] = 1;
      v12 = CSurfaceDrawListBrush::CreateWithContentRect(&v33, v28, v30, (char *)&v47 + 8);
      if ( v48 )
      {
        v15 = *(CSurfaceDrawListBrush **)v47;
        *(_QWORD *)v47 = *((_QWORD *)&v47 + 1);
        if ( v15 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1u);
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, 0LL, 0, v12, 0x1FCu, 0LL);
        if ( v32 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v32, 1u);
        goto LABEL_37;
      }
      if ( v8 )
      {
        v26 = v32;
        *(_QWORD *)&v47 = v39[0];
        *((_QWORD *)&v47 + 1) = v39[2];
        v27 = _mm_unpacklo_ps((__m128)v40, (__m128)v41).m128_u64[0];
        *(_OWORD *)((char *)v32 + 8) = v47;
        *((_QWORD *)v26 + 3) = v27;
      }
      v30[0] = v32;
      v32 = 0LL;
      CBrushDrawListGenerator::AttachInput(v50, 0LL, v30);
      if ( v30[0] )
        std::default_delete<CShape>::operator()(v16, (__int64 (__fastcall ***)(_QWORD, __int64))v30[0]);
      v51 = v13;
      if ( v32 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v32, 1u);
    }
    v43[0] = v29;
    v43[1] = 0LL;
    v44 = 0;
    v45 = 1;
    v46 = 0;
    CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v57);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v50,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v43,
                 (struct CDrawListEntryBuilder *)v57);
    v12 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v57);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v57);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v33 + 8);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v33);
      if ( v29 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v29, 1u);
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v50);
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, DrawList, 0x215u, 0LL);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v57);
LABEL_37:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v33 + 8);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v33);
    v25 = v29;
    if ( !v29 )
      goto LABEL_30;
    goto LABEL_29;
  }
  return 0;
}
