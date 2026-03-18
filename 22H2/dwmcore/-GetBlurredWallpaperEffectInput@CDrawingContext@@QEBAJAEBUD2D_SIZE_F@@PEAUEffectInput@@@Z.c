/*
 * XREFs of ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3790
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093240 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180220340 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x180033984 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800343B8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x18003A580 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CF54 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x18004B208 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004B370 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004C6A4 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A660 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180078528 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008974C (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DBE0 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180093000 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x180093AB0 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B3708 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKi.c)
 *     ?GetBlurredWallpaperSurfaceRect@CVisual@@QEBA?AUtagRECT@@XZ @ 0x1800B3D7C (-GetBlurredWallpaperSurfaceRect@CVisual@@QEBA-AUtagRECT@@XZ.c)
 *     ?GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ @ 0x1800B3DD8 (-GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ.c)
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B42EC (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2F90 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C4040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E9DB4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FC824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform@@@details@wil@@QEAA_NXZ @ 0x180118A24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcore.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801D6D58 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1802140D8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802179A8 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 */

__int64 __fastcall CDrawingContext::GetBlurredWallpaperEffectInput(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  const struct D2D_SIZE_F *v5; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  struct CComposition *v8; // rax
  CVisual *v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rsi
  CVisual *v12; // rbx
  __int64 v13; // r8
  int WorldTransform; // ebx
  __int64 v15; // rdx
  CVisualTree *DesktopTree; // rsi
  int v18; // eax
  unsigned int v19; // r15d
  struct CTreeData *v20; // rax
  float width; // xmm0_4
  float height; // xmm1_4
  struct tagRECT *BlurredWallpaperSurfaceRect; // rax
  float left; // xmm7_4
  float top; // xmm9_4
  float right; // xmm6_4
  float bottom; // xmm8_4
  const struct CVisualTree *v28; // rdx
  __int64 v29; // rdx
  CVisualSurface *BlurredWallpaperSurface; // rax
  int ExplicitRealizationSizeCVI; // eax
  float *v32; // rax
  float v33; // xmm6_4
  LONG v34; // xmm7_4
  float v35; // xmm2_4
  float v36; // xmm6_4
  struct CCachedVisualImage *v37; // rbx
  int v38; // eax
  __int128 v39; // xmm1
  struct IBitmapResource *v40; // rdx
  __int64 *v41; // rax
  int v42; // eax
  const struct RenderTargetInfo *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // [rsp+20h] [rbp-E0h]
  __int128 v47; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v48; // [rsp+40h] [rbp-C0h]
  int v49; // [rsp+50h] [rbp-B0h]
  _DWORD v50[12]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+BCh] [rbp-44h]
  struct CCachedVisualImage *v53[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v54; // [rsp+E0h] [rbp-20h] BYREF
  float v55; // [rsp+F0h] [rbp-10h]
  float v56; // [rsp+F4h] [rbp-Ch]
  __int128 v57; // [rsp+F8h] [rbp-8h] BYREF
  int v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v53[0] = (struct CCachedVisualImage *)a2;
  v5 = a2;
  EffectInput::Reset(a3);
  v8 = g_pComposition;
  *((_BYTE *)a3 + 44) = 1;
  *((_BYTE *)a3 + 100) = 1;
  *((_BYTE *)a3 + 102) = 1;
  v9 = (CVisual *)*((_QWORD *)v8 + 38);
  if ( v9 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VTest>::GetImpl'::`2'::impl,
      1u,
      v6,
      v7);
    CMILMatrix::SetToIdentity((CMILMatrix *)v50);
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
    v11 = (_QWORD *)*((_QWORD *)this + 1010);
    v12 = (CVisual *)v10;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*v11 + 8LL) + 184LL))(*(_QWORD *)(*v11 + 8LL)) )
    {
      WorldTransform = CVisual::GetWorldTransform((__int64)v12, v11, v13, (__int64)v50);
      if ( WorldTransform < 0 )
      {
        v15 = 1690LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
          (const char *)(unsigned int)WorldTransform,
          v46);
        return (unsigned int)WorldTransform;
      }
    }
    else
    {
      DesktopTree = CVisual::GetDesktopTree(v12);
      if ( DesktopTree )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform>::GetImpl'::`2'::impl) )
        {
          v18 = CVisualTree::EnsureVisualTransform(DesktopTree, v12);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x6A5,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
              (const char *)(unsigned int)v18,
              v46);
            return v19;
          }
          v20 = CVisual::EnsureTreeData(v12, DesktopTree);
          CVisual::EnsureWorldTransform(v12, DesktopTree, v20);
          v5 = (const struct D2D_SIZE_F *)v53[0];
        }
        WorldTransform = CVisual::GetWorldTransform(v12, DesktopTree, 3, (struct CMILMatrix *)v50, 0LL, 0LL);
        if ( WorldTransform < 0 )
        {
          v15 = 1708LL;
          goto LABEL_5;
        }
      }
      else
      {
        WorldTransform = CVisual::GetWorldTransform(
                           v12,
                           *((const struct CVisualTree **)this + 1007),
                           3,
                           (struct CMILMatrix *)v50,
                           0LL,
                           0LL);
        if ( WorldTransform < 0 )
        {
          v15 = 1713LL;
          goto LABEL_5;
        }
      }
    }
    width = v5->width;
    height = v5->height;
    v54.left = 0;
    v54.top = 0;
    *(float *)&v54.right = width + 0.0;
    *(float *)&v54.bottom = height + 0.0;
    *(_OWORD *)v53 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v50, (struct MilRectF *)&v54);
    BlurredWallpaperSurfaceRect = CVisual::GetBlurredWallpaperSurfaceRect(v9, &v54);
    left = (float)BlurredWallpaperSurfaceRect->left;
    top = (float)BlurredWallpaperSurfaceRect->top;
    right = (float)BlurredWallpaperSurfaceRect->right;
    bottom = (float)BlurredWallpaperSurfaceRect->bottom;
    *(float *)v53 = left;
    *((float *)v53 + 1) = top;
    v53[1] = (struct CCachedVisualImage *)__PAIR64__(LODWORD(bottom), LODWORD(right));
    CVisual::GetDesktopTree(v9);
    CMILMatrix::SetToIdentity((CMILMatrix *)&v47);
    WorldTransform = CVisual::GetWorldTransform(v9, v28, 3, (struct CMILMatrix *)&v47, 0LL, 0LL);
    if ( WorldTransform < 0 )
    {
      v15 = 1732LL;
      goto LABEL_5;
    }
    if ( !CMILMatrix::IsIdentity<1>((__int64)&v47, v29) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v47, (struct MilRectF *)v53);
      bottom = *((float *)&v53[1] + 1);
      right = *(float *)&v53[1];
      top = *((float *)v53 + 1);
      left = *(float *)v53;
    }
    BlurredWallpaperSurface = CVisual::GetBlurredWallpaperSurface(v9);
    v53[0] = 0LL;
    ExplicitRealizationSizeCVI = CVisualSurface::GetExplicitRealizationSizeCVI(
                                   BlurredWallpaperSurface,
                                   (struct D2D_VECTOR_2F *)&v54,
                                   v53);
    WorldTransform = ExplicitRealizationSizeCVI;
    if ( ExplicitRealizationSizeCVI < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D3,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
        (const char *)(unsigned int)ExplicitRealizationSizeCVI,
        v46);
      wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v53);
      return (unsigned int)WorldTransform;
    }
    *(_QWORD *)&v47 = *(_QWORD *)v50;
    *((_QWORD *)&v47 + 1) = *(_QWORD *)&v50[3];
    *(_QWORD *)&v48 = __PAIR64__(v50[7], v50[5]);
    *((_QWORD *)&v48 + 1) = v51;
    v49 = v52;
    v58 = LODWORD(left) ^ _xmm;
    v59 = LODWORD(top) ^ _xmm;
    v57 = *(_OWORD *)&_xmm;
    v32 = Matrix3x3::operator*((float *)&v47, (float *)v50, (float *)&v57);
    v54.right = 0;
    v33 = right - left;
    v34 = v54.left;
    v35 = *(float *)&v54.left / v33;
    v36 = *(float *)&v54.top;
    v54.top = 0;
    *(float *)&v54.left = v35 / *(float *)&v54.left;
    *(float *)&v54.bottom = (float)(v36 / (float)(bottom - top)) / v36;
    v55 = 0.0 - (float)(*(float *)&v54.left * 0.0);
    v56 = 0.0 - (float)(*(float *)&v54.bottom * 0.0);
    Matrix3x3::operator*(v32, (float *)&v47, (float *)&v54.left);
    *(_QWORD *)((char *)a3 + 84) = 0LL;
    *((_DWORD *)a3 + 23) = v34;
    *((float *)a3 + 24) = v36;
    v37 = v53[0];
    v38 = v49;
    v39 = v48;
    *((_OWORD *)a3 + 3) = v47;
    *((_OWORD *)a3 + 4) = v39;
    *((_DWORD *)a3 + 20) = v38;
    if ( v37 )
      v40 = (struct CCachedVisualImage *)((char *)v37 + *(int *)(*((_QWORD *)v37 + 8) + 8LL) + 64);
    else
      v40 = 0LL;
    v41 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v57, v40);
    CDrawListBitmap::operator=((__int64 *)a3, v41);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v57 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v57);
    v42 = *((_DWORD *)a3 + 10) | 0x800;
    *((_DWORD *)a3 + 10) = v42;
    if ( *((_QWORD *)this + 26) )
      *((_DWORD *)a3 + 10) = v42 | 0x100;
    if ( g_LockAndReadBlurredWallpaperBackdropTexture )
    {
      *(_QWORD *)&v54.left = 0LL;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v54);
      v43 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 40LL))((char *)this + 24);
      if ( (int)CCachedVisualImage::GetRenderTargetBitmap(v37, v43, (struct IRenderTargetBitmap **)&v54) >= 0 )
      {
        v44 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v54.left + 64LL))(*(_QWORD *)&v54.left);
        v45 = *(int *)(*(_QWORD *)(v44 + 8) + 16LL) + v44 + 8;
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v45 + 24LL))(v45, (char *)this + 24);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v54);
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v53);
  }
  else
  {
    WorldTransform = CDrawingContext::SetEffectInputToTransparentBlack(this, v5, a3);
    if ( WorldTransform < 0 )
    {
      v15 = 1784LL;
      goto LABEL_5;
    }
    *((_DWORD *)a3 + 10) |= 0x800u;
  }
  return 0LL;
}
