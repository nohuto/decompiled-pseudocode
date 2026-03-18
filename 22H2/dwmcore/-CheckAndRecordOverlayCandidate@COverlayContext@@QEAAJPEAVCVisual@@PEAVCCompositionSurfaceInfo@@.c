/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801DB8A4
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801304AE (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800343B8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180041694 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800416CC (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180046478 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047D50 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047F2C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A8890 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DFD90 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800F4910 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800FAF04 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni@@@details@wil@@QEAA_NXZ @ 0x18011941C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni@@@de.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18012DF9E (McTemplateU0x_EventWriteTransfer.c)
 *     ??$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@IUnknown@@QEAAJPEAPEAVIAdvancedDirectFlipBitmapRealization@@@Z @ 0x1801DACAC (--$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@IUnknown@@QEAAJPEAPEAVIAdvancedDirectF.c)
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N777@Z @ 0x1801DB190 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIP.c)
 *     ??$make_shared@VCRegion@@$$V@std@@YA?AV?$shared_ptr@VCRegion@@@0@XZ @ 0x1801DB2FC (--$make_shared@VCRegion@@$$V@std@@YA-AV-$shared_ptr@VCRegion@@@0@XZ.c)
 *     ??1?$shared_ptr@$$BY0A@E@std@@QEAA@XZ @ 0x1801DB654 (--1-$shared_ptr@$$BY0A@E@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801DB6B8 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??I?$com_ptr_t@VIAdvancedDirectFlipBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIAdvancedDirectFlipBitmapRealization@@XZ @ 0x1801DB6F8 (--I-$com_ptr_t@VIAdvancedDirectFlipBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAP.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801DD1A4 (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@II_N@Z @ 0x1801DD9A8 (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     ?IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1801DDBE8 (-IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x1801DE0CC (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x1801DE398 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ @ 0x1801DEA08 (-UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x1801DF208 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x1801DF2C4 (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x1801DF534 (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x1801DF8D8 (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801F7310 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x180287B9C (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        struct CVisual *a2,
        const struct CCompositionSurfaceInfo *a3,
        struct ISwapChainRealization *a4,
        float *a5,
        float *a6,
        _DWORD *a7,
        enum DXGI_MODE_ROTATION a8,
        int a9,
        bool a10,
        char a11)
{
  const struct CCompositionSurfaceInfo *v11; // r12
  float v12; // edi
  COverlayContext *v13; // r15
  struct ISwapChainRealization *v14; // r14
  __int64 v15; // rax
  struct ISwapChainRealization *v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, struct tagRECT *); // rcx
  int v18; // ebx
  char *v19; // rcx
  _DWORD *v20; // rax
  float v21; // xmm0_4
  float v22; // eax
  double v23; // xmm0_8
  int v24; // eax
  double v25; // xmm0_8
  int v26; // eax
  double v27; // xmm0_8
  int v28; // eax
  double v29; // xmm0_8
  int v30; // eax
  double v31; // xmm0_8
  int v32; // eax
  double v33; // xmm0_8
  int v34; // eax
  double v35; // xmm0_8
  int v36; // eax
  LONG v37; // eax
  int v38; // eax
  int v39; // eax
  struct ISwapChainRealization *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  int v43; // ebx
  __int64 (__fastcall ***v44)(_QWORD, struct tagRECT *); // rcx
  __int64 v45; // rax
  bool v46; // cc
  int **v47; // r13
  char v48; // al
  __int64 (__fastcall ***v49)(_QWORD, struct tagRECT *); // rcx
  _DWORD *v50; // rbx
  __int64 v51; // r8
  _DWORD *v52; // rax
  char *v53; // rcx
  char *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 *v58; // rax
  __int64 (__fastcall ***v59)(_QWORD, struct tagRECT *); // rcx
  int v60; // r13d
  struct ISwapChainRealization *v61; // rcx
  int v62; // r12d
  struct ISwapChainRealization *v63; // rcx
  int v64; // r15d
  char v65; // al
  struct ISwapChainRealization *v66; // rbx
  char v67; // r14
  char v68; // di
  char v69; // si
  _DWORD *v70; // rax
  bool v71; // si
  unsigned int v72; // eax
  _QWORD *v73; // rax
  int v74; // edi
  __int64 v75; // r9
  __int64 v76; // rsi
  __int64 (__fastcall *v77)(__int64, _DWORD *); // rdi
  int v78; // ebx
  _DWORD *v79; // rax
  char v80; // cl
  int RectangleCount; // ebx
  _DWORD *v82; // rax
  void *v83; // rdx
  _DWORD *v84; // rax
  int v85; // edx
  int v86; // r9d
  __int64 v87; // rcx
  __int64 v88; // rax
  LONG v89; // ecx
  unsigned int v90; // eax
  __int64 v91; // rax
  __int64 (__fastcall ***v92)(_QWORD, struct tagRECT *); // rcx
  bool v93; // zf
  __int64 v94; // rax
  __int64 (__fastcall ***v95)(_QWORD, struct tagRECT *); // rcx
  __int64 *v96; // rax
  int v97; // eax
  int v98; // eax
  __int64 v99; // rax
  char v100; // bl
  __int64 v101; // rax
  __int64 (__fastcall ***v102)(_QWORD, struct tagRECT *); // rcx
  int v103; // esi
  struct ISwapChainRealization *v104; // rcx
  int v105; // edi
  struct ISwapChainRealization *v106; // rcx
  int v107; // ebx
  _DWORD *v108; // rax
  int v109; // edx
  __int64 v110; // rcx
  int v112; // [rsp+20h] [rbp-140h]
  float v113; // [rsp+E0h] [rbp-80h] BYREF
  unsigned __int8 v114; // [rsp+E4h] [rbp-7Ch]
  char v115; // [rsp+E5h] [rbp-7Bh]
  bool IsIntelWorkaroundNeeded; // [rsp+E6h] [rbp-7Ah]
  __int64 (__fastcall ***v117)(_QWORD); // [rsp+E8h] [rbp-78h] BYREF
  __int64 v118; // [rsp+F0h] [rbp-70h] BYREF
  struct ISwapChainRealization *v119; // [rsp+F8h] [rbp-68h]
  struct CVisual *v120; // [rsp+100h] [rbp-60h]
  FastRegion::CRegion *v121[2]; // [rsp+110h] [rbp-50h] BYREF
  COverlayContext *v122; // [rsp+120h] [rbp-40h]
  const struct CCompositionSurfaceInfo *v123; // [rsp+128h] [rbp-38h]
  int **v124; // [rsp+130h] [rbp-30h]
  _DWORD *v125; // [rsp+138h] [rbp-28h]
  char v126[8]; // [rsp+140h] [rbp-20h] BYREF
  char v127[8]; // [rsp+148h] [rbp-18h] BYREF
  struct tagRECT v128; // [rsp+150h] [rbp-10h] BYREF
  _DWORD v129[4]; // [rsp+170h] [rbp+10h] BYREF
  int v130; // [rsp+180h] [rbp+20h] BYREF
  struct tagRECT v131; // [rsp+184h] [rbp+24h] BYREF
  struct tagRECT v132; // [rsp+194h] [rbp+34h] BYREF
  struct tagRECT v133; // [rsp+1A4h] [rbp+44h] BYREF
  enum DXGI_MODE_ROTATION v134; // [rsp+1B4h] [rbp+54h]
  BOOL v135; // [rsp+1B8h] [rbp+58h]
  int v136; // [rsp+1CCh] [rbp+6Ch]
  int v137; // [rsp+1E0h] [rbp+80h]
  int v138; // [rsp+1E8h] [rbp+88h]
  struct FastRegion::Internal::CRgnData *v139[10]; // [rsp+1F0h] [rbp+90h] BYREF
  void *retaddr; // [rsp+288h] [rbp+128h]

  v11 = a3;
  v12 = *(float *)&a5;
  v13 = this;
  v14 = a4;
  v120 = a2;
  v123 = a3;
  v122 = this;
  v119 = a4;
  v125 = a7;
  memset_0(&v130, 0, 0x70uLL);
  v15 = *((_QWORD *)v14 + 1);
  *(_OWORD *)v121 = 0LL;
  v16 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(v15 + 12) + 8);
  if ( *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _DWORD *))v16)(v16, v129) + 4) != 1 )
  {
    v17 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(*(_QWORD *)v13
                                                             + 8LL
                                                             + *(int *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) + 12LL));
    v18 = *(_DWORD *)((**v17)(v17, &v128) + 8);
    v19 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8;
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(char *, float *))(*(_QWORD *)v19 + 16LL))(v19, &v113);
    if ( *v20 == DisplayId::None || *v20 == v18 || v18 == DisplayId::All )
    {
      v21 = *a5 + 6291456.25;
      v113 = v21;
      v22 = v21;
      v23 = a5[1];
      v131.left = (int)(LODWORD(v22) << 10) >> 11;
      *(float *)&v23 = v23 + 6291456.25;
      v113 = *(float *)&v23;
      v24 = LODWORD(v23);
      v25 = a5[2];
      v131.top = v24 << 10 >> 11;
      *(float *)&v25 = v25 + 6291456.25;
      v113 = *(float *)&v25;
      v26 = LODWORD(v25);
      v27 = a5[3];
      v131.right = v26 << 10 >> 11;
      *(float *)&v27 = v27 + 6291456.25;
      v113 = *(float *)&v27;
      v28 = LODWORD(v27);
      v29 = *a6;
      v131.bottom = v28 << 10 >> 11;
      *(float *)&v29 = v29 + 6291456.25;
      v113 = *(float *)&v29;
      v30 = LODWORD(v29);
      v31 = a6[1];
      v132.left = v30 << 10 >> 11;
      *(float *)&v31 = v31 + 6291456.25;
      v113 = *(float *)&v31;
      v32 = LODWORD(v31);
      v33 = a6[2];
      v132.top = v32 << 10 >> 11;
      *(float *)&v33 = v33 + 6291456.25;
      v113 = *(float *)&v33;
      v34 = LODWORD(v33);
      v35 = a6[3];
      v132.right = v34 << 10 >> 11;
      *(float *)&v35 = v35 + 6291456.25;
      v113 = *(float *)&v35;
      v36 = LODWORD(v35);
      LODWORD(v35) = *a7;
      v132.bottom = v36 << 10 >> 11;
      *(float *)&v35 = *(float *)&v35 + 6291456.25;
      v113 = *(float *)&v35;
      v37 = (int)(LODWORD(v35) << 10) >> 11;
      LODWORD(v35) = a7[1];
      v133.left = v37;
      *(float *)&v35 = *(float *)&v35 + 6291456.25;
      v113 = *(float *)&v35;
      v38 = LODWORD(v35);
      LODWORD(v35) = a7[2];
      v133.top = v38 << 10 >> 11;
      *(float *)&v35 = *(float *)&v35 + 6291456.25;
      v113 = *(float *)&v35;
      v39 = LODWORD(v35);
      LODWORD(v35) = a7[3];
      v133.right = v39 << 10 >> 11;
      v113 = *(float *)&v35 + 6291456.25;
      v133.bottom = (int)(LODWORD(v113) << 10) >> 11;
      v40 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 12LL) + 8);
      v41 = (**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _DWORD *))v40)(v40, v129);
      v42 = *(_QWORD *)v13;
      v136 = *(_DWORD *)(v41 + 8);
      v43 = v136;
      v44 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(v42 + 8 + *(int *)(*(_QWORD *)(v42 + 8) + 12LL));
      v45 = (**v44)(v44, &v128);
      v138 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v45 + 16), v43);
      v46 = *((_DWORD *)v13 + 2821) < 2000;
      LOBYTE(v12) = 0;
      v113 = v12;
      if ( v46 && (a9 & 3) != 0 )
      {
        LODWORD(v12) = (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(
                                          &v133,
                                          &v132) == 0;
        v113 = v12;
      }
      IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(v13, &v131, &v132, &v133);
      COverlayContext::UpdateVisitedContentRegion(v13);
      v47 = (int **)((char *)v13 + 11176);
      v124 = (int **)((char *)v13 + 11176);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v139, &v133);
      if ( !**((_DWORD **)v13 + 1397)
        || !*(_DWORD *)v139[0]
        || (v48 = FastRegion::Internal::CRgnData::Intersects(
                    *((const struct FastRegion::Internal::CRgnData **)v13 + 1397),
                    v139[0]),
            v114 = 0,
            !v48) )
      {
        v114 = 1;
      }
      FastRegion::CRegion::FreeMemory((void **)v139);
      v49 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(*(_QWORD *)v13
                                                               + 8LL
                                                               + *(int *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) + 12LL));
      v50 = (_DWORD *)(**v49)(v49, &v128);
      v51 = *(int *)(*((_QWORD *)v14 + 1) + 8LL);
      v52 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)((char *)v14 + v51 + 8) + 32LL))(
                        (__int64)v14 + v51 + 8,
                        &v118);
      if ( *v52 == *v50 && v52[1] == v50[1] )
      {
        v53 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 8LL) + 8;
        if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v53 + 24LL))(v53)
          || (v54 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 8LL) + 8,
              v55 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v54 + 8LL))(v54),
              !CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v55 + 16))) )
        {
          v56 = *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8LL;
          v118 = 0LL;
          (**(void (__fastcall ***)(char *, GUID *, __int64 *))((char *)v14 + v56))(
            (char *)v14 + v56,
            &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
            &v118);
          v117 = 0LL;
          if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni>::GetImpl'::`2'::impl)
            || *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) )
          {
            v57 = *(int *)(*((_QWORD *)v14 + 1) + 4LL);
            v58 = wil::com_ptr_t<IAdvancedDirectFlipBitmapRealization,wil::err_returncode_policy>::operator&((__int64 *)&v117);
            IUnknown::QueryInterface<IAdvancedDirectFlipBitmapRealization>(
              (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))((char *)v14 + v57 + 8),
              (__int64)v58);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          {
            v59 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v14
                                                                     + *(int *)(*((_QWORD *)v14 + 1) + 12LL)
                                                                     + 8);
            v60 = *(_DWORD *)(**v59)(v59, &v128);
            v61 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8);
            v62 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v61)(v61, v126) + 4);
            v63 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8);
            v64 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v63)(v63, v127);
            v65 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v14 + 72LL))(v14);
            v66 = v119;
            v67 = v65;
            v68 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v119 + 64LL))(v119);
            v69 = v117 != 0LL;
            LODWORD(v66) = (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v66 + 88LL))(v66);
            v70 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v119 + 40LL))(
                              v119,
                              v129);
            McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer(
              *v70,
              v114,
              *v70,
              (_DWORD)v66,
              v69,
              v68,
              v67,
              v114,
              v64,
              v62,
              v60,
              v130,
              v131.left,
              v131.top,
              v131.right,
              v131.bottom,
              v132.left,
              v132.top,
              v132.right,
              v132.bottom,
              v133.left,
              v133.top,
              v133.right,
              v133.bottom,
              v134,
              v135,
              v136);
            v14 = v119;
            v13 = v122;
            v11 = v123;
            v47 = v124;
            LOBYTE(v12) = LOBYTE(v113);
          }
          v71 = a10;
          if ( v118
            || (v72 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 72LL))(v11),
                !COverlayContext::IsCandidateDirectFlipCompatible(
                   v13,
                   v11,
                   v14,
                   (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v130,
                   a8,
                   v72,
                   a9,
                   a10))
            || CCommonRegistryData::m_dwOverlayTestMode != 5
            && *((_DWORD *)v13 + 12) > 1u
            && *((int *)v13 + 2821) >= 2200 )
          {
            if ( COverlayContext::OverlaysEnabled(v13) )
            {
              v115 = 0;
              if ( v117 )
                v115 = (**v117)(v117);
              if ( !(*(unsigned __int8 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 128LL))(v11)
                && !LOBYTE(v12)
                && !IsIntelWorkaroundNeeded
                && !v115 )
              {
                if ( a10 && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 56LL))(*(_QWORD *)v13) )
                {
                  if ( v132.left < 0 || v132.top < 0 )
                  {
                    v71 = 0;
                  }
                  else
                  {
                    v129[0] = v132.left;
                    v129[2] = v132.right;
                    v129[1] = v132.top;
                    v87 = *(_QWORD *)v13;
                    v129[3] = v132.bottom;
                    v88 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 160LL))(v87);
                    if ( *((_BYTE *)v13 + 11025) )
                    {
                      *(_QWORD *)&v128.left = 0LL;
                      v89 = *(_DWORD *)(v88 + 36);
                      v128.bottom = *(_DWORD *)(v88 + 40);
                      v128.right = v89;
                    }
                    else
                    {
                      v128 = *(struct tagRECT *)(v88 + 20);
                    }
                    v71 = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
                            (__int64)&v128,
                            (__int64)v129)
                       && a10;
                  }
                }
                v90 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 72LL))(v11);
                if ( COverlayContext::IsCandidateOverlayCompatible(
                       v13,
                       v120,
                       v11,
                       v14,
                       (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v130,
                       a8,
                       v90,
                       v71) )
                {
                  v130 = a9;
                  v91 = *((_QWORD *)v14 + 1);
                  v134 = a8;
                  v92 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v14 + *(int *)(v91 + 12) + 8);
                  v93 = *(_DWORD *)((**v92)(v92, &v128) + 4) == 1;
                  v94 = *((_QWORD *)v14 + 1);
                  v137 = 2;
                  v135 = v93;
                  v95 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v14 + *(int *)(v94 + 12) + 8);
                  v136 = *(_DWORD *)((**v95)(v95, &v128) + 8);
                  v96 = std::make_shared<CRegion,>(&v128);
                  std::shared_ptr<CRegion>::operator=(v121, v96);
                  std::shared_ptr<unsigned char [0]>::~shared_ptr<unsigned char [0]>((__int64)&v128);
                  v97 = FastRegion::CRegion::Copy((int **)v121[0], v47);
                  if ( v97 < 0 )
                    ModuleFailFastForHRESULT((unsigned int)v97, retaddr);
                  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v139, &v133);
                  v98 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v121[0], v139);
                  if ( v98 < 0 )
                    ModuleFailFastForHRESULT((unsigned int)v98, retaddr);
                  FastRegion::CRegion::FreeMemory((void **)v139);
                  v99 = *(_QWORD *)v11;
                  v100 = v118 != 0;
                  v128 = *(struct tagRECT *)v121;
                  *(_OWORD *)v121 = 0LL;
                  v101 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(v99 + 64))(v11);
                  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool>(
                    (__int64)v13 + 88,
                    (int)v13,
                    (char)v120,
                    (char)v11,
                    v101,
                    (__int64)&v130,
                    (__int64)v125,
                    &v128,
                    v100,
                    v71,
                    a11,
                    v114);
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
                  {
                    v102 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v14
                                                                              + *(int *)(*((_QWORD *)v14 + 1) + 12LL)
                                                                              + 8);
                    v103 = *(_DWORD *)(**v102)(v102, &v128);
                    v104 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8);
                    v105 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _DWORD *))v104)(
                                         v104,
                                         v129)
                                     + 4);
                    v106 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8);
                    v107 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v106)(
                                        v106,
                                        v127);
                    v108 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, char *))(*(_QWORD *)v14 + 40LL))(
                                       v14,
                                       v126);
                    McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer(
                      *v108,
                      v109,
                      *v108,
                      v107,
                      v105,
                      v103,
                      v130,
                      v131.left,
                      v131.top,
                      v131.right,
                      v131.bottom,
                      v132.left,
                      v132.top,
                      v132.right,
                      v132.bottom,
                      v133.left,
                      v133.top,
                      v133.right,
                      v133.bottom,
                      v134,
                      v135,
                      v136);
                  }
                }
              }
            }
            goto LABEL_64;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            v73 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v14 + 40LL))(
                              v14,
                              v129);
            McTemplateU0x_EventWriteTransfer(
              *(unsigned int *)v73,
              (__int64)&EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
              *(unsigned int *)v73 | (unsigned __int64)((__int64)(int)HIDWORD(*v73) << 32));
          }
          v74 = 2;
          if ( v114 )
            goto LABEL_42;
          if ( v117 )
          {
            v75 = *(int *)(*((_QWORD *)v14 + 1) + 12LL);
            v76 = *(_QWORD *)v13 + *(int *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) + 8LL);
            v77 = **(__int64 (__fastcall ***)(__int64, _DWORD *))(v76 + 8);
            v78 = *(_DWORD *)(**(__int64 (__fastcall ***)(__int64, struct tagRECT *))((char *)v14 + v75 + 8))(
                               (__int64)v14 + v75 + 8,
                               &v128);
            v79 = (_DWORD *)v77(v76 + 8, v129);
            v80 = *((_BYTE *)v13 + 11311);
            if ( v78 == *v79 )
            {
              if ( v80 )
              {
                v74 = 4;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
                  goto LABEL_42;
                v128 = 0LL;
                FastRegion::CRegion::GetBoundingRect(v47, &v128);
                RectangleCount = FastRegion::CRegion::GetRectangleCount(v47);
                v82 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v14 + 40LL))(
                                  v14,
                                  v129);
                v83 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
              }
              else
              {
                v74 = 3;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
                {
LABEL_42:
                  CDirectFlipInfo::Init((char *)v13 + 11040, *(_QWORD *)v13, v120, v11, v74, v47);
LABEL_64:
                  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v117);
                  if ( v118 )
                  {
                    v110 = *(int *)(*(_QWORD *)(v118 + 8) + 4LL) + v118 + 8;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v110 + 16LL))(v110);
                  }
                  goto LABEL_66;
                }
                v128 = 0LL;
                FastRegion::CRegion::GetBoundingRect(v47, &v128);
                RectangleCount = FastRegion::CRegion::GetRectangleCount(v47);
                v82 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v14 + 40LL))(
                                  v14,
                                  v129);
                v83 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
              }
              McTemplateU0xddddd_EventWriteTransfer(
                *v82,
                (_DWORD)v83,
                *v82,
                RectangleCount,
                v128.left,
                v128.top,
                v128.right,
                v128.bottom);
              goto LABEL_42;
            }
            if ( !v80 )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              {
                v128 = 0LL;
                FastRegion::CRegion::GetBoundingRect(v47, &v128);
                v84 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v14 + 40LL))(
                                  v14,
                                  v129);
                McTemplateU0xqqdddd_EventWriteTransfer(
                  *v84,
                  v85,
                  *v84,
                  v86,
                  v112,
                  v128.left,
                  v128.top,
                  v128.right,
                  v128.bottom);
              }
              goto LABEL_64;
            }
          }
          else if ( !*((_BYTE *)v13 + 11311) )
          {
            goto LABEL_64;
          }
          v74 = 1;
          goto LABEL_42;
        }
      }
    }
  }
LABEL_66:
  std::shared_ptr<unsigned char [0]>::~shared_ptr<unsigned char [0]>((__int64)v121);
  return 0LL;
}
