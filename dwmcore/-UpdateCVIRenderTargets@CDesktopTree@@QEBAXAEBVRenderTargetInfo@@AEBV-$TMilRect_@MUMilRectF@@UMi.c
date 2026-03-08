/*
 * XREFs of ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CC2C
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B408 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801097B8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E5DF4 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002ED9C (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003A6E0 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180041810 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180049030 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x18004CEF4 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004CF18 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18004D740 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18007BA04 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180087890 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180088904 (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x18008B318 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?GetBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C1E14 (-GetBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x1800E4678 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@@@Z @ 0x1800E8D3C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

void __fastcall CDesktopTree::UpdateCVIRenderTargets(
        struct CVisualTree *a1,
        struct RenderTargetInfo *a2,
        struct MilRectF *a3)
{
  float *v4; // rdi
  bool IsCurrent; // al
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r12
  CVisual **v10; // rax
  CVisual **v11; // rsi
  struct CBackdropVisualImage *BackdropVisualImage; // r14
  __int64 v13; // rbx
  __int64 v14; // rdi
  CVisual *v15; // rbx
  _OWORD *v16; // rax
  CTreeData *TreeData; // rax
  _BYTE *v18; // rbx
  bool v19; // al
  float *v20; // rax
  struct COcclusionInfo *OcclusionInfo; // rax
  unsigned int v22; // r8d
  __int64 v23; // rbx
  __int64 v24; // rax
  struct COcclusionInfo *v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  HANDLE ProcessHeap; // rax
  const char *v29; // rdi
  const struct MilRectF *Bounds; // rax
  const char *v31; // rbx
  const char **v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  struct IDeviceTexture *v35; // [rsp+30h] [rbp-D0h] BYREF
  struct MilRectF *v36; // [rsp+38h] [rbp-C8h]
  void *lpMem; // [rsp+40h] [rbp-C0h] BYREF
  void *v38; // [rsp+48h] [rbp-B8h] BYREF
  void *v39; // [rsp+50h] [rbp-B0h] BYREF
  CVisual **v40; // [rsp+58h] [rbp-A8h]
  char v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v42[8]; // [rsp+68h] [rbp-98h] BYREF
  char v43[8]; // [rsp+70h] [rbp-90h] BYREF
  char v44[8]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v45; // [rsp+80h] [rbp-80h] BYREF
  __int128 v46; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v47; // [rsp+A0h] [rbp-60h] BYREF
  const struct CVisualTree **v48; // [rsp+A8h] [rbp-58h]
  _BYTE *v49; // [rsp+B0h] [rbp-50h]
  _BYTE v50[32]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v51[16]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v52; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v53[16]; // [rsp+F8h] [rbp-8h] BYREF

  v36 = a3;
  v4 = (float *)a3;
  IsCurrent = COcclusionContext::IsCurrent((struct CVisualTree *)((char *)a1 + 120));
  v9 = v8 & -(__int64)IsCurrent;
  if ( !v9 )
    return;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_RENDER_CVIPASS_Start,
      v7,
      1LL,
      &v52);
  v10 = (CVisual **)*((_QWORD *)a1 + 686);
  v11 = (CVisual **)*((_QWORD *)a1 + 685);
  v40 = v10;
  while ( 1 )
  {
    BackdropVisualImage = 0LL;
    if ( v11 == v10 )
      break;
    v15 = *v11;
    v47 = v50;
    *(_QWORD *)&v52 = 0LL;
    *((_QWORD *)&v52 + 1) = a1;
    v48 = (const struct CVisualTree **)v50;
    v49 = v51;
    v16 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                      &v47,
                      0LL,
                      1LL);
    *v16 = v52;
    TreeData = CVisual::FindTreeData(v15, *(v48 - 1));
    if ( TreeData )
      BackdropVisualImage = CTreeData::GetBackdropVisualImage(TreeData, (const struct CVisualTreePath *)&v47);
    v18 = v47;
    v7 = ((char *)v48 - v47) >> 4;
    if ( v7 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v47,
        0LL,
        v7);
      v18 = v47;
    }
    v47 = 0LL;
    if ( v18 == v50 )
      v18 = 0LL;
    if ( v18 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v18);
    }
    if ( BackdropVisualImage )
    {
      v45 = *((_OWORD *)BackdropVisualImage + 6);
      v19 = CBackdropVisualImage::RequiresRendering(BackdropVisualImage, a2);
      if ( dword_1803E0760 )
      {
        if ( !v19 )
          goto LABEL_21;
        v29 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v39, (const struct MilRectF *)&v45);
        Bounds = (const struct MilRectF *)CDirtyRegion::GetBounds((char *)a1 + 104, v51);
        v31 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v38, Bounds);
        v32 = (const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&lpMem, v36);
        v33 = DwmDbg::DbgString::DbgString(
                (DwmDbg::DbgString *)v41,
                "renderTarget=[%s], dirtyRegion=[%s], bviBounds=[%s]",
                *v32,
                v31,
                v29);
        v34 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v42, "BVI-AttemptPreRender");
        CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v34, v33);
        if ( lpMem )
          operator delete(lpMem);
        if ( v38 )
          operator delete(v38);
        if ( v39 )
          operator delete(v39);
        v4 = (float *)v36;
      }
      else if ( !v19 )
      {
        goto LABEL_21;
      }
      v20 = (float *)CDirtyRegion::GetBounds((char *)a1 + 104, v53);
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v20, (float *)&v45)
        && TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v4, (float *)&v45) )
      {
        OcclusionInfo = CVisual::GetOcclusionInfo(
                          *v11,
                          a1,
                          (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
        if ( !OcclusionInfo
          || (v22 = *((_DWORD *)OcclusionInfo + 7),
              v46 = *((_OWORD *)BackdropVisualImage + 6),
              !COcclusionContext::IsOccluded(v9, (__int64)&v46, v22)) )
        {
          v35 = 0LL;
          if ( (int)CCachedVisualImage::GetDeviceTexture(
                      (struct CBackdropVisualImage *)((char *)BackdropVisualImage + 72),
                      a2,
                      &v35) >= 0 )
          {
            v23 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v43, word_180338FC0);
            v24 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v44, "BVI-SuccessfulPreRender");
            CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v24, v23);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v35);
        }
      }
    }
LABEL_21:
    v10 = v40;
    ++v11;
  }
  v13 = *((_QWORD *)a1 + 602);
  v14 = *((_QWORD *)a1 + 603);
  while ( v13 != v14 )
  {
    if ( (int)CThreadContext::RegisterGraphWalkRoot(*(const void **)v13) >= 0 )
    {
      v25 = CVisual::GetOcclusionInfo(
              *(CVisual **)v13,
              a1,
              (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
      if ( !*(_BYTE *)(v13 + 32) || !v25 || !COcclusionContext::IsOccluded(v9, v13 + 16, *((_DWORD *)v25 + 7)) )
      {
        v26 = (__int64 *)(*(_QWORD *)(v13 + 8) + 72LL);
        v27 = *v26;
        v35 = 0LL;
        (*(void (__fastcall **)(__int64 *, struct RenderTargetInfo *, struct IDeviceTexture **))(v27 + 48))(
          v26,
          a2,
          &v35);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v35);
      }
      CThreadContext::UnregisterGraphWalkRoot();
    }
    v13 += 40LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_RENDER_CVIPASS_Stop,
      v7,
      1LL,
      v53);
}
