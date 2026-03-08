/*
 * XREFs of ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x180037E34
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180037D40 (-RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029D68 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGraph@@@Z @ 0x1800382DC (--0-$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGr.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x180038318 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18003843C (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1800384E8 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ?HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x180038740 (-HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZ.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1800394F8 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 *     ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x180039564 (-TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x180039610 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AE.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004CF18 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180078358 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007FA38 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800B6654 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAPEAV1@@Z @ 0x1800D1764 (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::ExecuteBlur(
        CRenderingTechnique *this,
        struct CDrawingContext *a2,
        const struct EffectInput *a3,
        const struct D2D_VECTOR_2F *a4,
        struct EffectInput *a5)
{
  unsigned int v5; // edi
  const struct CBackdropVisualImage *BackdropVisualImage; // r14
  CVisual *v11; // rax
  FLOAT v12; // xmm1_4
  __int64 v13; // rdx
  CBlurRenderingGraph *v14; // rsi
  __int64 v15; // rcx
  const struct RenderTargetInfo *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // ebx
  struct D2D_MATRIX_3X2_F *v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // xmm1_8
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rax
  enum D3D_FEATURE_LEVEL v31; // edx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // [rsp+28h] [rbp-E0h]
  CBlurRenderingGraph *v36; // [rsp+38h] [rbp-D0h] BYREF
  D2D_VECTOR_2F v37; // [rsp+40h] [rbp-C8h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v38[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_VECTOR_2F v39; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  CRenderingTechnique *v41; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v42[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v43[8]; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_RECT_F v44; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v45[36]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v46[36]; // [rsp+B4h] [rbp-54h] BYREF
  _BYTE v47[40]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v48; // [rsp+100h] [rbp-8h] BYREF
  __int64 v49; // [rsp+110h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v5 = 0;
  BackdropVisualImage = 0LL;
  v41 = this;
  if ( *((_BYTE *)a3 + 101) && !*((_BYTE *)a3 + 103) )
  {
    v11 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
    BackdropVisualImage = CVisual::GetBackdropVisualImage(v11, *((const struct CVisualTreePath **)a2 + 1010));
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, _BYTE *))(***((_QWORD ***)this + 1)
                                                                                               + 48LL))(
    **((_QWORD **)this + 1),
    *(unsigned int *)(*((_QWORD *)this + 1) + 16LL),
    &v40,
    v38,
    v42);
  v12 = *(float *)&v40 * a4->y;
  v37.x = *(float *)&v40 * a4->x;
  v37.y = v12;
  CBlurRenderingGraph::DeterminePreScale(a3, a5, v38[0], &v37, &v39);
  v13 = *((_QWORD *)this + 34);
  v37.x = v37.x * v39.x;
  v37.y = v37.y * v39.y;
  wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>(
    &v36,
    v13);
  v14 = v36;
  if ( v36 )
  {
    if ( CBlurRenderingGraph::HasMatchingParameters(v36, &v37, v38[0]) )
    {
      if ( BackdropVisualImage )
      {
        v16 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
        if ( CBlurredBackdropCache::LookupCachedBlur(
               (CBlurRenderingGraph *)((char *)v14 + 216),
               BackdropVisualImage,
               v16,
               a5) )
        {
          v32 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v41, word_180338FC0);
          v33 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v39, "BVI-UsingCachedBlur");
          CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v33, v32);
          goto LABEL_17;
        }
        v17 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v43, word_180338FC0);
        v18 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v48, "BVI-CouldNotFindCachedBlur");
        CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v18, v17);
      }
      if ( v14 )
        goto LABEL_10;
    }
    else
    {
      v14 = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v36 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(CBlurRenderingGraph *))(*(_QWORD *)v14 + 8LL))(v14);
  v30 = *((_QWORD *)a2 + 5);
  *(_QWORD *)&v48 = "DWM Blur Effect intermediate";
  v31 = *(_DWORD *)(v30 + 584);
  DWORD2(v48) = 28;
  v19 = CBlurRenderingGraph::Create((const struct CResourceTag *)&v48, v31, &v37, v38[0], &v36);
  if ( v19 < 0 )
  {
    v34 = 788LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
      (const char *)(unsigned int)v19,
      v35);
    v5 = v19;
    goto LABEL_17;
  }
  v14 = v36;
LABEL_10:
  *(struct D2D_VECTOR_2F *)((char *)v14 + 1588) = v39;
  v19 = CExternalEffectGraph::Render(v14, a2, a3, a5);
  if ( v19 < 0 )
  {
    v34 = 796LL;
    goto LABEL_27;
  }
  CDrawListBitmap::GetSize(a5);
  D2DMatrixHelper::ComputeRectangleTransform(
    (const struct EffectInput *)((char *)a3 + 84),
    (const struct D2D_RECT_F *)((char *)a5 + 84),
    &v44,
    v20);
  CDrawListBitmap::GetSize(a3);
  *(_QWORD *)((char *)&v48 + 4) = 0LL;
  *(float *)&v48 = (float)SLODWORD(v39.x);
  *((float *)&v48 + 3) = (float)SLODWORD(v39.y);
  *(float *)&v49 = 0.0 - (float)((float)SLODWORD(v39.x) * 0.0);
  *((float *)&v49 + 1) = 0.0 - (float)((float)SLODWORD(v39.y) * 0.0);
  v21 = Matrix3x3::operator*((char *)a3 + 48, v45, &v48);
  v22 = Matrix3x3::operator*(v21, v46, &v44);
  *(_QWORD *)((char *)&v48 + 4) = 0LL;
  *(float *)&v48 = 1.0 / (float)(int)v36;
  *((float *)&v48 + 3) = 1.0 / (float)SHIDWORD(v36);
  *(float *)&v49 = 0.0 - (float)(*(float *)&v48 * 0.0);
  *((float *)&v49 + 1) = 0.0 - (float)(*((float *)&v48 + 3) * 0.0);
  v23 = Matrix3x3::operator*(v22, v47, &v48);
  *((_OWORD *)a5 + 3) = *(_OWORD *)v23;
  *((_OWORD *)a5 + 4) = *(_OWORD *)(v23 + 16);
  *((_DWORD *)a5 + 20) = *(_DWORD *)(v23 + 32);
  if ( BackdropVisualImage )
  {
    v24 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
    v25 = *(_QWORD *)(v24 + 16);
    v48 = *(_OWORD *)v24;
    v49 = v25;
    if ( CCommonRegistryData::EnableBackdropBlurCaching )
    {
      if ( CBackdropVisualImage::TranslateRenderTargetInfo(BackdropVisualImage, (struct RenderTargetInfo *)&v48) )
      {
        CBlurredBackdropCache::UpdateCachedBlur(
          (CBlurRenderingGraph *)((char *)v14 + 216),
          BackdropVisualImage,
          (const struct RenderTargetInfo *)&v48,
          a5);
        v26 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v48, word_180338FC0);
        v27 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v43, "BVI-CachedNewBlur");
        CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v27, v26);
        ++dword_1803E2AAC;
      }
    }
  }
  v36 = 0LL;
  v28 = *((_QWORD *)v41 + 34);
  *((_QWORD *)v41 + 34) = v14;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
LABEL_17:
  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)&v36);
  return v5;
}
