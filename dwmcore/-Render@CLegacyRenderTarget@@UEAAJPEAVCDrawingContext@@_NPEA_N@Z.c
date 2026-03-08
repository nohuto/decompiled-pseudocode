/*
 * XREFs of ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC
 * Callers:
 *     ?Render@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180118FD0 (-Render@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EE3F8 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180021F1C (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180021FE0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180041810 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B408 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18008B894 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x18008BD94 (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?Ready@CTargetStats@@QEAA_NAEBUtagCOMPOSITION_TARGET_ID@@_KPEAVIOverlaySwapChain@@@Z @ 0x18008BF70 (-Ready@CTargetStats@@QEAA_NAEBUtagCOMPOSITION_TARGET_ID@@_KPEAVIOverlaySwapChain@@@Z.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18008C1CC (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008C4A8 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18008CA84 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?NeedsPresent@COverlayContext@@QEBA_NXZ @ 0x1800E2054 (-NeedsPresent@COverlayContext@@QEBA_NXZ.c)
 *     ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800E6160 (-IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E707C (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DoesIntersect@CDirtyRegion@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E8724 (-DoesIntersect@CDirtyRegion@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800F1BF8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ??$?0$0?0V?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@$0A@@?$span@PEBVCVisual@@$0?0@gsl@@QEAA@AEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F41F8 (--$-0$0-0V-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@@$0A@@-$span@PEBVCVisual@@$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18012A432 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAXXZ @ 0x18012D81E (-PostRender@CComputeScribbleRenderer@@QEAAXXZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C8A90 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribble@@@Z @ 0x1801C8B50 (-EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribb.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801C9A58 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801CA040 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x1801CAAF4 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801E493C (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801F8B3C (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::Render(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        unsigned __int8 a3,
        bool *a4)
{
  char *v4; // r14
  __int64 v6; // rcx
  struct CDrawingContext *v9; // rsi
  int v10; // ebx
  char v11; // r12
  __int64 v12; // rax
  struct CComposeTop *v13; // r13
  __int64 v14; // rsi
  int v15; // eax
  unsigned int v16; // ecx
  bool v17; // al
  float *v18; // rdx
  __int64 v19; // r8
  float *v20; // r9
  unsigned int v21; // edi
  bool DoesIntersectUnsafe; // al
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // ecx
  char v26; // bl
  struct IDeviceTarget *v27; // rax
  int v28; // eax
  unsigned int v29; // ecx
  signed __int64 v30; // rax
  __int64 v31; // r9
  struct CDrawingContext *v32; // rdi
  int v33; // eax
  unsigned int v34; // ecx
  CLegacyRenderTarget *v35; // rsi
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // ecx
  struct IMonitorTarget *v39; // rdi
  CSuperWetInkManager *v40; // r12
  struct CSuperWetSource *v41; // rdx
  unsigned int i; // ebx
  _QWORD *v44; // rax
  char v45; // r9
  int v46; // eax
  unsigned int v47; // ecx
  __int64 v48; // rcx
  int v49; // eax
  unsigned int v50; // ecx
  CSuperWetInkManager *v51; // rcx
  struct CSuperWetInkManager::SuperWetStroke *v52; // r13
  bool v53; // al
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rsi
  int (__fastcall *v59)(__int64, __int64, char *, struct CComputeScribble **); // rbx
  CSuperWetInkManager *v60; // rcx
  struct IMonitorTarget *v61; // rdi
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rbx
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  CComputeScribbleRenderer *v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // ecx
  __int64 (__fastcall ***v72)(_QWORD); // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // [rsp+20h] [rbp-89h]
  bool v76; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int8 v77; // [rsp+51h] [rbp-58h]
  _WORD v78[7]; // [rsp+52h] [rbp-57h] BYREF
  struct CComputeScribble *v79; // [rsp+60h] [rbp-49h] BYREF
  gsl::details *v80[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v81; // [rsp+78h] [rbp-31h]
  _QWORD *v82; // [rsp+80h] [rbp-29h] BYREF
  CComputeScribbleRenderer *v83; // [rsp+88h] [rbp-21h]
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp-19h] BYREF
  bool *v85; // [rsp+98h] [rbp-11h]
  int v86[4]; // [rsp+A0h] [rbp-9h] BYREF
  struct IMonitorTarget *v87; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = 0LL;
  v85 = a4;
  *(_QWORD *)&v78[3] = a2;
  v6 = *((_QWORD *)this - 2321);
  v83 = 0LL;
  v9 = a2;
  v10 = 0;
  v11 = 0;
  if ( v6 )
    v83 = (CComputeScribbleRenderer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 280LL))(v6);
  *a4 = 0;
  if ( *((_QWORD *)this - 2321) )
  {
    v12 = *((_QWORD *)this - 2323);
    if ( v12 )
    {
      if ( a3 || !*((_BYTE *)this - 50) )
      {
        v13 = *(struct CComposeTop **)(v12 + 4744);
        v14 = v12 + 104;
        if ( v13 && CComposeTop::HasNewContent(*(CComposeTop **)(v12 + 4744)) )
        {
          v48 = *((_QWORD *)this - 2321);
          v76 = 1;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 24LL))(v48);
        }
        else
        {
          v76 = 0;
        }
        v81 = 0LL;
        v77 = 0;
        LOBYTE(v78[0]) = 0;
        *(_OWORD *)v80 = 0LL;
        v15 = COverlayContext::ApplyConfiguration((CLegacyRenderTarget *)((char *)this - 18552), (__int64)v78);
        v10 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x112u, 0LL);
        }
        else
        {
          *((_BYTE *)this - 51) |= LOBYTE(v78[0]);
          QueryPerformanceCounter(&PerformanceCount);
          v17 = CTargetStats::Ready(
                  (CLegacyRenderTarget *)((char *)this - 264),
                  (CLegacyRenderTarget *)((char *)this - 320),
                  PerformanceCount.QuadPart,
                  *((struct IOverlaySwapChain **)this - 2321));
          v20 = (float *)((char *)this - 580);
          if ( !(v77 | a3) && !v17 )
          {
LABEL_56:
            if ( (unsigned __int8)CDirtyRegion::DoesIntersect(v14, v20) )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
                McTemplateU0q_EventWriteTransfer(
                  &Microsoft_Windows_Dwm_Core_Provider_Context,
                  &RENDERTARGET_RENDERSKIPPED,
                  *((unsigned int *)this - 65));
              if ( (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this - 18552) != 2 )
              {
                for ( i = 0; i < *(_DWORD *)(v14 + 2820); ++i )
                {
                  v44 = (_QWORD *)gsl::span<CVisual const *,-1>::span<CVisual const *,-1>(v86, v80);
                  CDirtyRegion::GetOptimizedRect(
                    v14,
                    &v87,
                    i,
                    (float *)this - 145,
                    (CLegacyRenderTarget *)((char *)this - 168),
                    0LL,
                    0,
                    v44,
                    0LL);
                }
              }
            }
            goto LABEL_35;
          }
          if ( *((_BYTE *)this - 7242) )
          {
            CDirtyRegion::ForceFullDirty((CDirtyRegion *)v14);
            v20 = (float *)((char *)this - 580);
            *((_BYTE *)this - 7242) = 0;
          }
          v21 = 0;
          if ( *(_BYTE *)(v14 + 4420) )
          {
            v21 = 1;
          }
          else
          {
            if ( *(_DWORD *)(v14 + 2820) )
            {
              v18 = (float *)(v14 + 2660);
              do
              {
                DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                        v20,
                                        v18);
                v25 = v21 + 1;
                if ( !DoesIntersectUnsafe )
                  v25 = v21;
                v18 = (float *)(v23 + 16);
                v21 = v25;
                v19 = v24 - 1;
              }
              while ( v19 );
            }
            if ( !v21 && !v76 )
              goto LABEL_56;
          }
          v26 = *((_BYTE *)this - 7527);
          v27 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD, float *, __int64, float *))this - 2321))(
                                          *((_QWORD *)this - 2321),
                                          v18,
                                          v19,
                                          v20);
          v28 = CDrawingContext::BeginFrame(
                  *(CDrawingContext **)&v78[3],
                  v27,
                  (CLegacyRenderTarget *)((char *)this + (v26 != 0 ? -400LL : -536LL)),
                  (const struct _D3DCOLORVALUE *)((char *)this - 18628),
                  (CLegacyRenderTarget *)((char *)this - 18552));
          v10 = v28;
          if ( v28 >= 0 )
          {
            v11 = 1;
            if ( v21 )
            {
              v30 = (v80[1] - v80[0]) >> 3;
              *(_QWORD *)v86 = v30;
              if ( v30 == -1 || (*(gsl::details **)&v86[2] = v80[0]) == 0LL && v30 )
              {
                gsl::details::terminate(v80[0]);
                JUMPOUT(0x18008BD8CLL);
              }
              v31 = v21;
              v32 = *(struct CDrawingContext **)&v78[3];
              v33 = CLegacyRenderTarget::RenderDirtyRegion(
                      (__int64)this - 18752,
                      *(CDrawingContext **)&v78[3],
                      v14,
                      v31,
                      v86,
                      (__int64)v13);
              v10 = v33;
              if ( v33 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x13Du, 0LL);
                goto LABEL_72;
              }
            }
            else
            {
              v32 = *(struct CDrawingContext **)&v78[3];
            }
            if ( v13 )
            {
              v45 = *(_BYTE *)(v14 + 4420);
              v35 = (CLegacyRenderTarget *)((char *)this - 18752);
              v46 = CLegacyRenderTarget::RenderComposeTop((CLegacyRenderTarget *)((char *)this - 18752), v32, v13, v45);
              v10 = v46;
              if ( v46 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x146u, 0LL);
                goto LABEL_72;
              }
            }
            else
            {
              v35 = (CLegacyRenderTarget *)((char *)this - 18752);
            }
            if ( CLegacyRenderTarget::IsPrimaryMonitor((CLegacyRenderTarget *)((char *)this - 18608))
              && (v36 = *(_QWORD *)(*((_QWORD *)this - 2342) + 624LL)) != 0
              && *(_BYTE *)(v36 + 8)
              && (v49 = CLegacyRenderTarget::RenderDebugFrameCounter(v35, v32), v10 = v49, v49 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x14Eu, 0LL);
            }
            else
            {
              v11 = 0;
              v37 = CDrawingContext::EndFrame(v32);
              v10 = v37;
              if ( v37 >= 0 )
              {
                if ( **((_DWORD **)v32 + 1012) )
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this - 2321) + 328LL))(*((_QWORD *)this - 2321));
LABEL_35:
                if ( *((_BYTE *)this - 7242) || **((_DWORD **)this - 21) )
                  ScheduleCompositionPass(0LL, 1LL);
                CLegacyRenderTarget::CheckForMajorityScreenVideoNotifications((CLegacyRenderTarget *)((char *)this - 18752));
                if ( v83 )
                {
                  CComputeScribbleRenderer::PostRender(v83);
                  v83 = 0LL;
                }
                if ( *((_BYTE *)this - 7527) )
                {
                  v86[2] = *((_DWORD *)this - 137);
                  v86[3] = *((_DWORD *)this - 136);
                  *(_QWORD *)v86 = 0LL;
                }
                else
                {
                  *(_OWORD *)v86 = *(_OWORD *)((char *)this - 564);
                }
                v39 = (CLegacyRenderTarget *)((char *)this - 18608);
                v40 = *(CSuperWetInkManager **)(*((_QWORD *)this - 2342) + 256LL);
                if ( this == (CLegacyRenderTarget *)18752 )
                  v39 = 0LL;
                v41 = (struct CSuperWetSource *)*((_QWORD *)v40 + 1);
                v87 = v39;
                if ( !v41 )
                  goto LABEL_44;
                v52 = CSuperWetInkManager::TryLookupDataForSource(v40, v41);
                if ( *((struct IMonitorTarget **)v52 + 1) != v39 )
                  goto LABEL_44;
                if ( *(_QWORD *)(*(_QWORD *)v40 + 496LL) - *((_QWORD *)v52 + 11) >= 0xAuLL )
                {
                  CSuperWetInkManager::DeactivateCurrentSource(v51);
LABEL_44:
                  v10 = 0;
                  goto LABEL_45;
                }
                if ( !*((_BYTE *)v52 + 96) )
                {
                  v76 = 0;
                  if ( (int)CSuperWetInkManager::TryReadyForCurrentFrame(v51, v52, &v76) >= 0 )
                  {
                    v53 = v76;
                  }
                  else
                  {
                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
                      McTemplateU0q_EventWriteTransfer(
                        &Microsoft_Windows_Dwm_Core_Provider_Context,
                        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
                        18LL);
                    CSuperWetInkManager::DeactivateCurrentSource(v40);
                    v53 = 0;
                  }
                  if ( !v53 )
                    goto LABEL_44;
                }
                *((_BYTE *)v52 + 96) = 0;
                (*(void (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v39 + 24LL))(v39);
                if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip((struct CSuperWetInkManager::SuperWetStroke *)((char *)v52 + 72)) )
                {
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
                    McTemplateU0q_EventWriteTransfer(
                      &Microsoft_Windows_Dwm_Core_Provider_Context,
                      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
                      17LL);
                  goto LABEL_44;
                }
                v54 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v39 + 144LL))(v39);
                v55 = *(int *)(*(_QWORD *)(v54 + 8) + 12LL) + v54 + 8;
                v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
                v57 = *((_QWORD *)v40 + 1);
                v79 = 0LL;
                v58 = v56;
                v59 = *(int (__fastcall **)(__int64, __int64, char *, struct CComputeScribble **))(*(_QWORD *)v57 + 296LL);
                wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v79);
                if ( v59(v57, v58, (char *)v52 + 16, &v79) < 0 )
                {
                  CSuperWetInkManager::DeactivateCurrentSource(v40);
                  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)&v79);
                  goto LABEL_44;
                }
                v61 = v87;
                v62 = CSuperWetInkManager::EnqueueSuperWetScribbleLocally(v60, v87, v79);
                v10 = v62;
                if ( v62 >= 0 )
                {
                  v63 = *(_QWORD *)v61;
                  v82 = 0LL;
                  v64 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(v63 + 144))(v61);
                  v65 = v64 + *(int *)(*(_QWORD *)(v64 + 8) + 4LL);
                  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v82);
                  v66 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))(v65 + 8))(
                          v65 + 8,
                          &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
                          &v82);
                  v10 = v66;
                  if ( v66 >= 0 )
                  {
                    v69 = (CComputeScribbleRenderer *)(*(__int64 (__fastcall **)(_QWORD *))(*v82 + 280LL))(v82);
                    v66 = CComputeScribbleRenderer::ScheduleScribble(v69);
                    v10 = v66;
                    if ( v66 >= 0 )
                    {
                      if ( v82 )
                      {
                        v70 = (__int64)v82 + *(int *)(v82[1] + 4LL) + 8;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
                      }
                      v10 = 0;
                      goto LABEL_104;
                    }
                    v67 = 261LL;
                  }
                  else
                  {
                    v67 = 256LL;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v67,
                    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
                    (const char *)(unsigned int)v66,
                    v75);
                  if ( v82 )
                  {
                    v68 = (__int64)v82 + *(int *)(v82[1] + 4LL) + 8;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
                  }
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xFD,
                    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
                    (const char *)(unsigned int)v62,
                    v75);
                }
LABEL_104:
                wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)&v79);
                if ( v10 >= 0 )
                {
LABEL_45:
                  if ( v80[0] )
                    std::_Deallocate<16,0>(v80[0], (v81 - (unsigned __int64)v80[0]) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_47:
                  if ( *((_BYTE *)this - 52)
                    || *((_BYTE *)this - 51)
                    || COverlayContext::NeedsPresent((CLegacyRenderTarget *)((char *)this - 18552)) )
                  {
                    *v85 = 1;
                  }
                  v9 = *(struct CDrawingContext **)&v78[3];
                  goto LABEL_50;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v10, 0x18Cu, 0LL);
                if ( v80[0] )
                  std::_Deallocate<16,0>(v80[0], (v81 - (unsigned __int64)v80[0]) & 0xFFFFFFFFFFFFFFF8uLL);
                v11 = 0;
                goto LABEL_112;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x153u, 0LL);
            }
LABEL_72:
            if ( v80[0] )
              std::_Deallocate<16,0>(v80[0], (v81 - (unsigned __int64)v80[0]) & 0xFFFFFFFFFFFFFFF8uLL);
            goto LABEL_113;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x12Bu, 0LL);
        }
        if ( v80[0] )
          std::_Deallocate<16,0>(v80[0], (v81 - (unsigned __int64)v80[0]) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_112:
        v32 = *(struct CDrawingContext **)&v78[3];
LABEL_113:
        *((_BYTE *)this - 52) = 0;
        if ( v11 )
          CDrawingContext::EndFrame(v32);
        if ( v83 )
          CComputeScribbleRenderer::PostRender(v83);
        goto LABEL_47;
      }
    }
  }
LABEL_50:
  if ( g_LockAndReadTarget )
  {
    v72 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this - 2321);
    if ( v72 )
    {
      v73 = (**v72)(v72);
      if ( v9 )
        v4 = (char *)v9 + 24;
      v74 = *(int *)(*(_QWORD *)(v73 + 8) + 16LL) + v73 + 8;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v74 + 24LL))(v74, v4);
    }
  }
  return (unsigned int)v10;
}
