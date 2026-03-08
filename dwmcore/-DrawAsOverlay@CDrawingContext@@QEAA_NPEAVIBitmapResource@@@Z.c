/*
 * XREFs of ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800D87F0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000CC70 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x18007A8C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D8670 (-Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCD.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x180018E04 (-IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180046720 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A72B4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18012ACEC (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEAUtagRECT@@2@Z @ 0x18012BA6A (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEAUtagRECT@@2@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetSwapChainOverlayColor@CDrawingContext@@AEBA?AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEBVIBitmapResource@@@Z @ 0x1801B3B30 (-GetSwapChainOverlayColor@CDrawingContext@@AEBA-AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEB.c)
 *     ?clear@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B3D00 (-clear@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x1801B3EB0 (-reserve_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS_ea_1801B3EB0.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D3A90 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801DA5F4 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CDrawingContext::DrawAsOverlay(CDrawingContext *this, struct IBitmapResource *a2)
{
  char IsOverlayAssigned; // di
  int (__fastcall ***v5)(_QWORD, GUID *, struct ISwapChainRealization **); // rcx
  __int64 v6; // rcx
  bool IsNormalDesktopRender; // r15
  char *v9; // rcx
  COverlayContext *v10; // rdi
  __int64 v11; // rax
  struct _LUID v12; // rbx
  const struct CVisual *v13; // rax
  char *v14; // rdx
  void (__fastcall *v15)(struct IBitmapResource *, __int64, const struct CMILMatrix *); // rbx
  void (__fastcall ***v16)(_QWORD, struct _D3DCOLORVALUE *); // rcx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v18; // rdx
  COverlayContext *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 i; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 j; // rax
  _OWORD *v28; // rax
  FastRegion::Internal::CRgnData *v29; // rcx
  _BYTE *v30; // rbx
  __int64 v31; // rdx
  gsl::details *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  void *v35; // rcx
  bool v36; // zf
  struct ISwapChainRealization *v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v39[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h]
  LONG *v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+80h] [rbp-80h]
  struct tagRECT v45; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v46; // [rsp+A0h] [rbp-60h] BYREF
  struct _D3DCOLORVALUE v47; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-40h]
  _BYTE *v49; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v50; // [rsp+D8h] [rbp-28h]
  char *v51; // [rsp+E0h] [rbp-20h]
  _BYTE v52[64]; // [rsp+E8h] [rbp-18h] BYREF
  char v53; // [rsp+128h] [rbp+28h] BYREF
  FastRegion::Internal::CRgnData *v54[10]; // [rsp+130h] [rbp+30h] BYREF
  const struct FastRegion::Internal::CRgnData *v55[10]; // [rsp+180h] [rbp+80h] BYREF
  void *retaddr; // [rsp+208h] [rbp+108h]

  IsOverlayAssigned = 0;
  v38 = 0LL;
  v37 = 0LL;
  if ( *((_QWORD *)this + 6) )
  {
    if ( (*(int (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v38) >= 0 )
    {
      v5 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChainRealization **))(*(int *)(*(_QWORD *)(v38 + 8) + 4LL)
                                                                                 + v38
                                                                                 + 8);
      if ( (**v5)(v5, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v37) >= 0 )
      {
        IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(this);
        if ( !IsNormalDesktopRender
          || !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v37 + 64LL))(v37)
          || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4))
          && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v37 + 72LL))(v37)
          || (v10 = (COverlayContext *)*((_QWORD *)this + 6),
              v45 = 0LL,
              v11 = *(_QWORD *)v37,
              v46 = 0LL,
              v12 = *(struct _LUID *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct _D3DCOLORVALUE *))(v11 + 40))(
                                       v37,
                                       &v47),
              v13 = (const struct CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24),
              (IsOverlayAssigned = COverlayContext::IsOverlayAssigned(v10, v13, v12, &v45, &v46)) == 0) )
        {
          IsOverlayAssigned = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v37 + 72LL))(v37);
          goto LABEL_4;
        }
        v14 = (char *)this + 164;
        LOBYTE(v14) = IsNormalDesktopRender;
        (*(void (__fastcall **)(struct IBitmapResource *, char *, __int64, unsigned __int64))(*(_QWORD *)a2 + 40LL))(
          a2,
          v14,
          1LL,
          ((unsigned __int64)this + 164) & -(__int64)(*((_BYTE *)this + 192) != 0));
        v15 = *(void (__fastcall **)(struct IBitmapResource *, __int64, const struct CMILMatrix *))(*(_QWORD *)a2 + 48LL);
        v16 = (void (__fastcall ***)(_QWORD, struct _D3DCOLORVALUE *))(*((_QWORD *)this + 4)
                                                                     + 8LL
                                                                     + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL)
                                                                              + 12LL));
        (**v16)(v16, &v47);
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
        LOBYTE(v18) = IsNormalDesktopRender;
        v15(a2, v18, TopByReference);
        ++*((_DWORD *)this + 164);
        v19 = (COverlayContext *)*((_QWORD *)this + 6);
        v44 = 0;
        COverlayContext::GetInverseDesktopMPOTransform(v19, (struct CMILMatrix *)v39);
        v20 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v39, 0, 1);
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x77u, 0LL);
          if ( !this )
            goto LABEL_4;
        }
        else
        {
          *(struct _D3DCOLORVALUE *)&v47.r = (struct _D3DCOLORVALUE)v46;
          TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe((int *)&v47, &v45.left);
          for ( i = 0LL; i < 16; i += 4LL )
            *(float *)((char *)&v48 + i) = (float)*(int *)((char *)&v47.r + i);
          CDrawingContext::GetSwapChainOverlayColor(this, &v47, v37, a2);
          v23 = CDrawingContext::RenderOverlayColor(this);
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x80u, 0LL);
          }
          else
          {
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v55, &v46);
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v54, &v45);
            v25 = FastRegion::CRegion::Subtract(v54, v55);
            if ( v25 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v25, retaddr);
            v49 = v52;
            v50 = v52;
            v51 = &v53;
            FastRegion::Internal::CRgnData::BeginIterator(v54[0], (struct FastRegion::CRegion::Iterator *)v39);
            while ( (unsigned __int64)v41 < v40 )
            {
              v45.top = *v41;
              v45.bottom = v41[2];
              v26 = 2 * v43;
              v45.left = *(_DWORD *)(v42 + 4 * v26);
              v45.right = *(_DWORD *)(v42 + 4 * v26 + 4);
              for ( j = 0LL; j < 16; j += 4LL )
                *(float *)((char *)&v48 + j) = (float)*(int *)((char *)&v45.left + j);
              v28 = (_OWORD *)detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
                                &v49,
                                (v50 - v49) >> 4);
              *v28 = v48;
              FastRegion::Internal::CRgnData::StepIterator(v29, (struct FastRegion::CRegion::Iterator *)v39);
            }
            v30 = v49;
            v31 = (v50 - v49) >> 4;
            if ( v31 )
            {
              gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v46, v31);
              *(_QWORD *)&v46.right = v30;
              if ( *(_QWORD *)&v46.left == -1LL || !v30 && *(_QWORD *)&v46.left )
              {
                gsl::details::terminate(v32);
                __debugbreak();
              }
              v33 = CDrawingContext::FillRectanglesWithSolidColor(this, &v46, &stru_180383220);
              if ( v33 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x9Bu, 0LL);
            }
            detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear(&v49);
            v35 = v49;
            v36 = v49 == v52;
            v49 = 0LL;
            if ( v36 )
              v35 = 0LL;
            operator delete(v35);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v54);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v55);
          }
          CDrawingContext::PopTransformInternal(this, 1);
        }
        --*((_DWORD *)this + 164);
      }
    }
  }
LABEL_4:
  if ( v37 )
  {
    v9 = (char *)v37 + *(int *)(*((_QWORD *)v37 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v38 )
  {
    v6 = *(int *)(*(_QWORD *)(v38 + 8) + 4LL) + v38 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return IsOverlayAssigned;
}
