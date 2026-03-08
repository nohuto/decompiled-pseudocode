/*
 * XREFs of ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008833C
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A4C4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A380 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18004B010 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x18004B038 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C748 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C79C (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004CF18 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18004E764 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180088904 (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180090D28 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C35E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??8Matrix3x3@@QEBA_NAEBV0@@Z @ 0x1800DDFE8 (--8Matrix3x3@@QEBA_NAEBV0@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z @ 0x1800E1710 (--0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x1800E4678 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1800F42C0 (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x1800FCA50 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180214448 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 */

__int64 __fastcall CDrawingContext::ValidateBVIEffectInputForRender(__int64 a1, struct MilRectF *a2, bool *a3)
{
  bool v3; // r14
  __int64 v4; // r15
  CVisual *v7; // rax
  const struct CVisualTreePath *v8; // rsi
  struct CVisual *v9; // r13
  CTreeData *TreeData; // rax
  CBackdropVisualImage *BackdropVisualImage; // rdi
  __int64 i; // rax
  void *v13; // r14
  __int64 v14; // r8
  int WorldTransform; // eax
  unsigned int v16; // edi
  int v17; // eax
  CMILMatrix *v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm1_4
  bool v23; // al
  __int64 v24; // r9
  __int128 *v25; // rdx
  int updated; // eax
  unsigned int v27; // ebx
  CTreeData *v28; // rax
  struct CBackdropVisualImage *v29; // rdi
  struct MilRectF *v30; // r14
  __int64 v31; // r8
  __int64 v32; // rcx
  char v33; // r8
  char v34; // si
  const struct RenderTargetInfo *v35; // rax
  const char *v36; // rbx
  const char **v37; // rax
  void **v38; // rbx
  const char *v39; // rdx
  void **v40; // rax
  int v42; // eax
  __int128 v43; // xmm1
  const struct RenderTargetInfo *v44; // rax
  void **v45; // rbx
  const char *v46; // rdx
  void **v47; // rax
  const struct RenderTargetInfo *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+20h] [rbp-E0h]
  __int64 v53; // [rsp+30h] [rbp-D0h] BYREF
  struct MilRectF *v54; // [rsp+38h] [rbp-C8h] BYREF
  void *lpMem; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v56; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v57; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+68h] [rbp-98h]
  _DWORD v59[12]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-60h]
  int v61; // [rsp+ACh] [rbp-54h]
  _BYTE v62[80]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v63; // [rsp+110h] [rbp+10h] BYREF
  __int128 v64; // [rsp+120h] [rbp+20h] BYREF
  __int128 v65; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3 = 0;
  v54 = a2;
  v4 = a1 + 24;
  LOBYTE(v53) = 0;
  v7 = (CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 32LL))(a1 + 24);
  v8 = *(const struct CVisualTreePath **)(a1 + 8080);
  v9 = v7;
  TreeData = CVisual::FindTreeData(v7, *(const struct CVisualTree **)(*((_QWORD *)v8 + 1) - 8LL));
  if ( TreeData )
    BackdropVisualImage = CTreeData::GetBackdropVisualImage(TreeData, v8);
  else
    BackdropVisualImage = 0LL;
  if ( *(_QWORD *)(a1 + 200) && BackdropVisualImage && CBackdropVisualImage::CanUseAsEffectInput(BackdropVisualImage) )
  {
    if ( a3 )
    {
      v44 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
      v3 = !CBackdropVisualImage::HasValidRenderingRealization(BackdropVisualImage, v44);
      *a3 = v3;
    }
    v45 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&lpMem, word_180338FC0);
    v46 = "BVI-SkipValidationInNestedBackdropWalk-InvalidatedCache";
    if ( !v3 )
      v46 = "BVI-SkipValidationInNestedBackdropWalk-DidNotInvalidateCache";
    v47 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v54, v46);
    CBackdropVisualImage::LogEtwEvent((__int64)BackdropVisualImage, v47, v45);
    return 0LL;
  }
  for ( i = a1; *(_QWORD *)(i + 208); i = *(_QWORD *)(i + 208) )
    ;
  v13 = *(void **)(i + 8056);
  lpMem = *(void **)(a1 + 8056);
  CMILMatrix::SetToIdentity((CMILMatrix *)v62);
  v64 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  WorldTransform = CVisual::GetWorldTransform((__int64)v9, v8, v14, (__int64)v62);
  v16 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x640,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)WorldTransform,
      v51);
    return v16;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v62, v54);
    v17 = *(_DWORD *)(a1 + 400);
    v63 = 0LL;
    v65 = 0LL;
    if ( v17 )
      v18 = (CMILMatrix *)(*(_QWORD *)(a1 + 416) + 68LL * (unsigned int)(v17 - 1));
    else
      v18 = (CMILMatrix *)&CMILMatrix::Identity;
    CMILMatrix::Transform2DBoundsHelper<1>(v18, v54);
    CDrawingContext::GetClipBoundsWorld(a1, &v65);
    v19 = *(float *)&v63;
    if ( *(float *)&v65 > *(float *)&v63 )
    {
      LODWORD(v63) = v65;
      v19 = *(float *)&v65;
    }
    v20 = *((float *)&v63 + 1);
    if ( *((float *)&v65 + 1) > *((float *)&v63 + 1) )
    {
      DWORD1(v63) = DWORD1(v65);
      v20 = *((float *)&v65 + 1);
    }
    v21 = *((float *)&v63 + 2);
    if ( *((float *)&v63 + 2) > *((float *)&v65 + 2) )
    {
      DWORD2(v63) = DWORD2(v65);
      v21 = *((float *)&v65 + 2);
    }
    v22 = *((float *)&v63 + 3);
    if ( *((float *)&v63 + 3) > *((float *)&v65 + 3) )
    {
      HIDWORD(v63) = HIDWORD(v65);
      v22 = *((float *)&v65 + 3);
    }
    if ( v21 <= v19 || v22 <= v20 )
      v63 = 0uLL;
    v23 = CBackdropVisualImage::RequireClippedBounds((float *)&v64);
    v25 = &v64;
    if ( v23 )
      v25 = &v63;
    v64 = *v25;
    LOBYTE(v24) = lpMem != v13 || !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v13 + 184LL))(v13);
    updated = CVisual::CreateOrUpdateBVI(v9, v8, (__int64)&v64, v24, (__int64)&v53);
    v27 = updated;
    if ( updated >= 0 )
    {
      v28 = CVisual::FindTreeData(v9, *(const struct CVisualTree **)(*((_QWORD *)v8 + 1) - 8LL));
      if ( v28 )
        v29 = CTreeData::GetBackdropVisualImage(v28, v8);
      else
        v29 = 0LL;
      if ( CBackdropVisualImage::IsValid(v29) )
      {
        CMILMatrix::SetToIdentity((CMILMatrix *)v59);
        v30 = v54;
        CMILMatrix::Translate((CMILMatrix *)v59, *(float *)v54, *((float *)v54 + 1));
        CMILMatrix::Multiply((CMILMatrix *)v59, (const struct CMILMatrix *)v62);
        *(_QWORD *)&v56 = *(_QWORD *)v59;
        LOBYTE(v31) = 0;
        *((_QWORD *)&v56 + 1) = *(_QWORD *)&v59[3];
        *(_QWORD *)&v57 = __PAIR64__(v59[7], v59[5]);
        *((_QWORD *)&v57 + 1) = v60;
        v58 = v61;
        if ( !(unsigned __int8)Matrix3x3::operator==((char *)v29 + 1916, &v56, v31) )
        {
          v42 = v58;
          v43 = v57;
          *(_OWORD *)v32 = v56;
          *(_OWORD *)(v32 + 16) = v43;
          *(_DWORD *)(v32 + 32) = v42;
          CBackdropVisualImage::InvalidateAllBlurCaches(v29);
          v33 = 1;
        }
        v34 = v33 | v53;
        *((_BYTE *)v29 + 1952) = 1;
        if ( g_LockAndReadBackdropTexture )
        {
          v54 = 0LL;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v54);
          v48 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
          if ( (int)CCachedVisualImage::GetRenderTargetBitmap(v29, v48, &v54) >= 0 )
          {
            v49 = (*(__int64 (__fastcall **)(struct MilRectF *))(*(_QWORD *)v54 + 64LL))(v54);
            v50 = *(int *)(*(_QWORD *)(v49 + 8) + 16LL) + v49 + 8;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 24LL))(v50, v4);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v54);
        }
      }
      else
      {
        v34 = v53;
        v30 = v54;
      }
      if ( a3 )
      {
        v35 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
        v34 |= !CBackdropVisualImage::HasValidRenderingRealization(v29, v35);
        *a3 = v34;
      }
      v36 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v54, (const struct CMILMatrix *)v62);
      v37 = (const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&lpMem, v30);
      v38 = (void **)DwmDbg::DbgString::DbgString(
                       (DwmDbg::DbgString *)&v64,
                       "rcBackdropLocal=[%s], worldTransform=[%s]",
                       *v37,
                       v36);
      v39 = "BVI-Validate-InvalidatedCache";
      if ( !v34 )
        v39 = "BVI-Validate-DidNotInvalidateCache";
      v40 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v63, v39);
      CBackdropVisualImage::LogEtwEvent((__int64)v29, v40, v38);
      if ( lpMem )
        operator delete(lpMem);
      if ( v54 )
        operator delete(v54);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)updated,
      v52);
    return v27;
  }
}
