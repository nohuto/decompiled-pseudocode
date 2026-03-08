/*
 * XREFs of ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0069D34 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 * Callees:
 *     ??0CDropShadowMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000B508 (--0CDropShadowMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000CF38 (--0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba1200___ @ 0x1C0068680 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba12.c)
 *     ??0CSpriteVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00698D8 (--0CSpriteVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1C006A574 (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ??0CShapeVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C006B2A4 (--0CShapeVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A2E8C (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CAnimationLoggingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00BDE80 (--0CAnimationLoggingManagerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00BF214 (--0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CLayerVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00C1044 (--0CLayerVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0249F44 (--0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C0249F80 (--0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CGenericMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C0249FC0 (--0CGenericMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0249FF8 (--0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A02C (--0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A084 (--0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A0C0 (--0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A128 (--0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRemoteAppRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A188 (--0CRemoteAppRenderTargetMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A1BC (--0CSpatialRemarshalerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CWindowNodeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A21C (--0CWindowNodeMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C02669BC (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreatePrivateMarshaler(
        DirectComposition::CApplicationChannel *this,
        unsigned __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r14
  unsigned int v4; // ebx
  int PrivateMarshaler; // esi
  __int64 v7; // rax
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v9; // rax
  void **v10; // rax
  DirectComposition::CSpriteVisualMarshaler *v11; // rax
  DirectComposition::CDropShadowMarshaler *v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  NSInstrumentation::CLeakTrackingAllocator *v17; // rax
  NSInstrumentation::CLeakTrackingAllocator *v18; // rax
  NSInstrumentation::CLeakTrackingAllocator *v19; // rax
  bool v20; // zf
  int v21; // eax
  bool v22; // zf
  NSInstrumentation::CLeakTrackingAllocator *v23; // rax
  NSInstrumentation::CLeakTrackingAllocator *v24; // rax
  NSInstrumentation::CLeakTrackingAllocator *v25; // rax
  DirectComposition::CShapeVisualMarshaler *v26; // rax
  NSInstrumentation::CLeakTrackingAllocator *v27; // rax
  NSInstrumentation::CLeakTrackingAllocator *v28; // rax
  NSInstrumentation::CLeakTrackingAllocator *v29; // rax
  int v30; // eax
  NSInstrumentation::CLeakTrackingAllocator *v31; // rax
  NSInstrumentation::CLeakTrackingAllocator *v32; // rax
  void *v33; // rcx
  const unsigned __int64 *v34; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v35; // rax
  NSInstrumentation::CLeakTrackingAllocator *v36; // rax
  NSInstrumentation::CLeakTrackingAllocator *v37; // rax
  NSInstrumentation::CLeakTrackingAllocator *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // r8
  DirectComposition::CInteractionMarshaler *v42; // rax
  DirectComposition::CAnimationLoggingManagerMarshaler *v43; // rax
  NSInstrumentation::CLeakTrackingAllocator *v44; // rax
  DirectComposition::CLayerVisualMarshaler *v45; // rax
  NSInstrumentation::CLeakTrackingAllocator *v46; // rax
  NSInstrumentation::CLeakTrackingAllocator *v47; // rax
  NSInstrumentation::CLeakTrackingAllocator *v48; // rax
  NSInstrumentation::CLeakTrackingAllocator *v49; // rax
  NSInstrumentation::CLeakTrackingAllocator *v50; // rax
  DirectComposition::CDropShadowMarshaler *v51; // rax
  NSInstrumentation::CLeakTrackingAllocator *v52; // rax
  NSInstrumentation::CLeakTrackingAllocator *v53; // rax
  NSInstrumentation::CLeakTrackingAllocator *v54; // rax
  NSInstrumentation::CLeakTrackingAllocator *v55; // rax
  NSInstrumentation::CLeakTrackingAllocator *v56; // rax
  NSInstrumentation::CLeakTrackingAllocator *v57; // rax
  NSInstrumentation::CLeakTrackingAllocator *v58; // rax
  NSInstrumentation::CLeakTrackingAllocator *v59; // rax
  NSInstrumentation::CLeakTrackingAllocator *v60; // rax
  DirectComposition::CProjectedShadowSceneMarshaler *v61; // rax
  NSInstrumentation::CLeakTrackingAllocator *v62; // rax
  NSInstrumentation::CLeakTrackingAllocator *v63; // rax
  NSInstrumentation::CLeakTrackingAllocator *v64; // rax
  NSInstrumentation::CLeakTrackingAllocator *v65; // rax
  void *v66; // rcx
  void *v67; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v68; // rax
  void *v69; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v70; // rax
  DirectComposition::CCaptureControllerMarshaler *v71; // rax
  NSInstrumentation::CLeakTrackingAllocator *v72; // rax
  NSInstrumentation::CLeakTrackingAllocator *v73; // rax
  NSInstrumentation::CLeakTrackingAllocator *v74; // rax
  void *v75; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v76; // rax
  NSInstrumentation::CLeakTrackingAllocator *v77; // rax
  NSInstrumentation::CLeakTrackingAllocator *v78; // rax
  NSInstrumentation::CLeakTrackingAllocator *v79; // rax
  NSInstrumentation::CLeakTrackingAllocator *v80; // rax
  NSInstrumentation::CLeakTrackingAllocator *v81; // rax
  NSInstrumentation::CLeakTrackingAllocator *v82; // rax
  NSInstrumentation::CLeakTrackingAllocator *v83; // rax
  NSInstrumentation::CLeakTrackingAllocator *v84; // rax
  void *v85; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v86; // rax
  NSInstrumentation::CLeakTrackingAllocator *v87; // rax
  NSInstrumentation::CLeakTrackingAllocator *v88; // rax
  NSInstrumentation::CLeakTrackingAllocator *v89; // rax
  DirectComposition::CHolographicViewerMarshaler *v90; // rax
  DirectComposition::CHolographicInteropTextureMarshaler *v91; // rax
  NSInstrumentation::CLeakTrackingAllocator *v92; // rax
  NSInstrumentation::CLeakTrackingAllocator *v93; // rax
  NSInstrumentation::CLeakTrackingAllocator *v94; // rax
  NSInstrumentation::CLeakTrackingAllocator *v95; // rax
  NSInstrumentation::CLeakTrackingAllocator *v96; // rax
  NSInstrumentation::CLeakTrackingAllocator *v97; // rax
  DirectComposition::CInteractionTrackerMarshaler *v98; // rax
  NSInstrumentation::CLeakTrackingAllocator *v99; // rax
  NSInstrumentation::CLeakTrackingAllocator *v100; // rax
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v101; // rax
  NSInstrumentation::CLeakTrackingAllocator *v102; // rax
  void *v103; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v104; // rax
  DirectComposition::CNaturalAnimationMarshaler *v105; // rax
  NSInstrumentation::CLeakTrackingAllocator *v106; // rax
  void *v107; // rcx
  DirectComposition::CRedirectVisualMarshaler *v108; // rax
  char *v109; // rax
  NSInstrumentation::CLeakTrackingAllocator *v110; // rax
  DirectComposition::CRemoteAppRenderTargetMarshaler *v111; // rax
  NSInstrumentation::CLeakTrackingAllocator *v112; // rax
  NSInstrumentation::CLeakTrackingAllocator *v113; // rax
  NSInstrumentation::CLeakTrackingAllocator *v114; // rax
  NSInstrumentation::CLeakTrackingAllocator *v115; // rax
  NSInstrumentation::CLeakTrackingAllocator *v116; // rax
  DirectComposition::CSpatialRemarshalerMarshaler *v117; // rax
  void *v118; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v119; // rax
  NSInstrumentation::CLeakTrackingAllocator *v120; // rax
  NSInstrumentation::CLeakTrackingAllocator *v121; // rax
  NSInstrumentation::CLeakTrackingAllocator *QuotaZInit; // rax
  void *v123; // rax
  NSInstrumentation::CLeakTrackingAllocator *v124; // rax
  DirectComposition::CWindowNodeMarshaler *v125; // rax
  _QWORD v126[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v127; // [rsp+30h] [rbp-10h] BYREF
  int *v128; // [rsp+38h] [rbp-8h]
  int v129; // [rsp+78h] [rbp+38h] BYREF
  NSInstrumentation::CLeakTrackingAllocator *v130; // [rsp+88h] [rbp+48h] BYREF

  v3 = (_QWORD *)a3;
  v130 = 0LL;
  v4 = a2;
  PrivateMarshaler = 0;
  if ( (unsigned int)a2 > 0x9E )
  {
    if ( (unsigned int)a2 > 0xB7 )
    {
      if ( (unsigned int)a2 <= 0xC7 )
      {
        if ( (_DWORD)a2 != 199 )
        {
          switch ( (_DWORD)a2 )
          {
            case 0xC0:
              QuotaZInit = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                          this,
                                                                          a2,
                                                                          0x98uLL,
                                                                          0x65664344u);
              v8 = QuotaZInit;
              if ( QuotaZInit )
              {
                *((_DWORD *)QuotaZInit + 8) = 0;
                *((_QWORD *)QuotaZInit + 6) = 0LL;
                *((_QWORD *)QuotaZInit + 3) = 1LL;
                *((_DWORD *)QuotaZInit + 9) = 192;
                *((_DWORD *)QuotaZInit + 18) = 0;
                *((_QWORD *)QuotaZInit + 10) = 0LL;
                *((_QWORD *)QuotaZInit + 11) = 0LL;
                *((_QWORD *)QuotaZInit + 12) = 0LL;
                *((_DWORD *)QuotaZInit + 26) = 0;
                v10 = &DirectComposition::CTurbulenceEffectMarshaler::`vftable';
                goto LABEL_38;
              }
              goto LABEL_237;
            case 0xC2:
              v121 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                    this,
                                                                    a2,
                                                                    0x58uLL,
                                                                    0x62764344u);
              v8 = v121;
              if ( v121 )
              {
                *((_DWORD *)v121 + 8) = 0;
                *((_QWORD *)v121 + 6) = 0LL;
                *((_QWORD *)v121 + 3) = 1LL;
                *((_DWORD *)v121 + 9) = 194;
                v10 = &DirectComposition::CViewBoxMarshaler::`vftable';
                goto LABEL_38;
              }
              goto LABEL_237;
            case 0xC3:
              v120 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                    this,
                                                                    a2,
                                                                    0xD0uLL,
                                                                    0x6D764344u);
              v8 = v120;
              if ( v120 )
              {
                *((_DWORD *)v120 + 8) = 0;
                *((_QWORD *)v120 + 6) = 0LL;
                *((_QWORD *)v120 + 3) = 1LL;
                *((_DWORD *)v120 + 9) = 195;
                v10 = &DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::`vftable';
                goto LABEL_38;
              }
              goto LABEL_237;
            case 0xC4:
              v127 = v126;
              v128 = &v129;
              v129 = 1769358148;
              v16 = NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba1200___(
                      gpLeakTrackingAllocator,
                      376LL,
                      1769358148LL,
                      &v127,
                      260LL);
              v8 = (NSInstrumentation::CLeakTrackingAllocator *)v16;
              if ( v16 )
              {
                *(_DWORD *)(v16 + 32) = 0;
                *(_QWORD *)(v16 + 48) = 0LL;
                *(_QWORD *)(v16 + 24) = 1LL;
                *(_DWORD *)(v16 + 36) = 196;
                *(_QWORD *)v16 = &DirectComposition::CVisualMarshaler::`vftable';
                *(_QWORD *)(v16 + 320) = 0LL;
                *(_QWORD *)(v16 + 328) = 0LL;
                *(_QWORD *)(v16 + 336) = 0LL;
                *(_QWORD *)(v16 + 344) = 0LL;
                *(_QWORD *)(v16 + 352) = 0LL;
                *(_QWORD *)(v16 + 360) = 0LL;
                *(_DWORD *)(v16 + 368) = 0;
                goto LABEL_39;
              }
              goto LABEL_237;
            case 0xC6:
              v119 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                    this,
                                                                    a2,
                                                                    0x70uLL,
                                                                    0x72764344u);
              v8 = v119;
              if ( v119 )
              {
                *((_DWORD *)v119 + 8) = 0;
                *((_QWORD *)v119 + 6) = 0LL;
                *((_QWORD *)v119 + 3) = 1LL;
                *((_DWORD *)v119 + 9) = 198;
                v10 = &DirectComposition::CVisualCaptureMarshaler::`vftable';
                goto LABEL_38;
              }
              goto LABEL_237;
          }
          goto LABEL_85;
        }
        goto LABEL_368;
      }
      if ( (_DWORD)a2 == 201 )
      {
        v47 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                             this,
                                                             a2,
                                                             0x40uLL,
                                                             0x66724344u);
        v8 = v47;
        if ( v47 )
        {
          *((_DWORD *)v47 + 8) = 0;
          *((_QWORD *)v47 + 6) = 0LL;
          *((_QWORD *)v47 + 3) = 1LL;
          *((_DWORD *)v47 + 9) = 201;
          v10 = &DirectComposition::CVisualReferenceControllerMarshaler::`vftable';
          goto LABEL_38;
        }
LABEL_86:
        v8 = v130;
        goto LABEL_39;
      }
      if ( (_DWORD)a2 != 202 )
      {
        if ( (_DWORD)a2 == 203 )
        {
          v57 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x48uLL,
                                                               0x776A4344u);
          v8 = v57;
          if ( v57 )
          {
            *((_DWORD *)v57 + 8) = 0;
            *((_QWORD *)v57 + 6) = 0LL;
            *((_QWORD *)v57 + 3) = 1LL;
            *((_DWORD *)v57 + 9) = 203;
            v10 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        }
        if ( (_DWORD)a2 != 204 )
        {
          if ( (_DWORD)a2 == 205 )
          {
            v124 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                  this,
                                                                  a2,
                                                                  0x50uLL,
                                                                  0x73794344u);
            v8 = v124;
            if ( v124 )
            {
              *((_DWORD *)v124 + 8) = 0;
              *((_QWORD *)v124 + 6) = 0LL;
              *((_QWORD *)v124 + 3) = 1LL;
              *((_DWORD *)v124 + 9) = 205;
              v10 = &DirectComposition::CYCbCrSurfaceMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          }
          goto LABEL_85;
        }
        v125 = (DirectComposition::CWindowNodeMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                            this,
                                                            a2,
                                                            0x178uLL,
                                                            0x6E774344u);
        if ( !v125 )
          goto LABEL_237;
        v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CWindowNodeMarshaler::CWindowNodeMarshaler(v125);
        goto LABEL_29;
      }
      v29 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           this,
                                                           a2,
                                                           0x60uLL,
                                                           0x736C4344u);
      v8 = v29;
      if ( !v29 )
        goto LABEL_237;
      *((_DWORD *)v29 + 8) = 0;
      *((_QWORD *)v29 + 6) = 0LL;
      *((_QWORD *)v29 + 3) = 1LL;
      *((_DWORD *)v29 + 9) = 202;
      v10 = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
    }
    else
    {
      if ( (_DWORD)a2 == 183 )
      {
        v118 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0xB8uLL, 0x65664344u);
        if ( !v118 )
          goto LABEL_237;
        DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v118, 183LL);
        v34 = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
        goto LABEL_122;
      }
      if ( (unsigned int)a2 <= 0xAE )
      {
        switch ( (_DWORD)a2 )
        {
          case 0xAE:
            v116 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                  this,
                                                                  a2,
                                                                  0x90uLL,
                                                                  0x61734344u);
            v8 = v116;
            if ( v116 )
            {
              *((_DWORD *)v116 + 8) = 0;
              *((_QWORD *)v116 + 6) = 0LL;
              *((_QWORD *)v116 + 3) = 1LL;
              *((_DWORD *)v116 + 9) = 174;
              v10 = &DirectComposition::CSnapshotMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case 0xA5:
            v115 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                  this,
                                                                  a2,
                                                                  0x60uLL,
                                                                  0x6E6D4344u);
            v8 = v115;
            if ( v115 )
            {
              *((_DWORD *)v115 + 8) = 0;
              *((_QWORD *)v115 + 6) = 0LL;
              *((_QWORD *)v115 + 3) = 1LL;
              *((_DWORD *)v115 + 9) = 165;
              v10 = &DirectComposition::CSceneSurfaceMaterialInputMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case 0xA7:
            v114 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                  this,
                                                                  a2,
                                                                  0x88uLL,
                                                                  0x65664344u);
            v8 = v114;
            if ( v114 )
            {
              *((_DWORD *)v114 + 8) = 0;
              *((_QWORD *)v114 + 6) = 0LL;
              *((_QWORD *)v114 + 3) = 1LL;
              *((_DWORD *)v114 + 9) = 167;
              *((_DWORD *)v114 + 18) = 0;
              *((_QWORD *)v114 + 10) = 0LL;
              *((_QWORD *)v114 + 11) = 0LL;
              *((_QWORD *)v114 + 12) = 0LL;
              *((_DWORD *)v114 + 26) = 0;
              v10 = &DirectComposition::CShadowEffectMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case 0xA8:
            v26 = (DirectComposition::CShapeVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                this,
                                                                a2,
                                                                0x198uLL,
                                                                0x68734344u);
            if ( !v26 )
              goto LABEL_237;
            v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CShapeVisualMarshaler::CShapeVisualMarshaler(v26);
            goto LABEL_29;
          case 0xA9:
            v38 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x48uLL,
                                                                 0x73734344u);
            v8 = v38;
            if ( v38 )
            {
              *((_DWORD *)v38 + 8) = 0;
              *((_QWORD *)v38 + 6) = 0LL;
              *((_QWORD *)v38 + 3) = 1LL;
              *((_DWORD *)v38 + 9) = 169;
              v10 = &DirectComposition::CSharedSectionMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
        }
        v21 = a2 - 171;
        if ( (_DWORD)a2 == 171 )
        {
          v113 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                this,
                                                                a2,
                                                                0x48uLL,
                                                                0x677A4344u);
          v8 = v113;
          if ( v113 )
          {
            *((_DWORD *)v113 + 8) = 0;
            *((_QWORD *)v113 + 6) = 0LL;
            *((_QWORD *)v113 + 3) = 1LL;
            *((_DWORD *)v113 + 9) = 171;
            v10 = &DirectComposition::CSharedSectionWrapperMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        }
        goto LABEL_83;
      }
      switch ( (_DWORD)a2 )
      {
        case 0xAF:
          goto LABEL_368;
        case 0xB0:
          v117 = (DirectComposition::CSpatialRemarshalerMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                      this,
                                                                      a2,
                                                                      0x178uLL,
                                                                      0x797A4344u);
          if ( !v117 )
            goto LABEL_237;
          v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CSpatialRemarshalerMarshaler::CSpatialRemarshalerMarshaler(v117);
          goto LABEL_29;
        case 0xB1:
          v25 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x88uLL,
                                                               0x736F4344u);
          v8 = v25;
          if ( !v25 )
            goto LABEL_237;
          *((_DWORD *)v25 + 8) = 0;
          *((_QWORD *)v25 + 6) = 0LL;
          *((_QWORD *)v25 + 3) = 1LL;
          *((_DWORD *)v25 + 9) = 177;
          v10 = &DirectComposition::CSpriteShapeMarshaler::`vftable';
          break;
        case 0xB2:
          v127 = v126;
          v128 = &v129;
          v129 = 1987265348;
          v11 = (DirectComposition::CSpriteVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba1200___(
                                                               gpLeakTrackingAllocator,
                                                               400LL,
                                                               1987265348LL,
                                                               &v127,
                                                               260LL);
          if ( !v11 )
            goto LABEL_237;
          v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CSpriteVisualMarshaler::CSpriteVisualMarshaler(v11);
          goto LABEL_29;
        case 0xB5:
          v19 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x80uLL,
                                                               0x736A4344u);
          v8 = v19;
          if ( !v19 )
            goto LABEL_237;
          *((_DWORD *)v19 + 8) = 0;
          *((_QWORD *)v19 + 6) = 0LL;
          *((_QWORD *)v19 + 3) = 1LL;
          *((_DWORD *)v19 + 9) = 181;
          v10 = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
          break;
        default:
          goto LABEL_85;
      }
    }
    goto LABEL_38;
  }
  if ( (_DWORD)a2 == 158 )
  {
    v112 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                          this,
                                                          a2,
                                                          0x58uLL,
                                                          0x687A4344u);
    v8 = v112;
    if ( v112 )
    {
      *((_DWORD *)v112 + 8) = 0;
      *((_QWORD *)v112 + 6) = 0LL;
      *((_QWORD *)v112 + 3) = 1LL;
      *((_DWORD *)v112 + 9) = 158;
      v10 = &DirectComposition::CSceneMeshRendererComponentMarshaler::`vftable';
      goto LABEL_38;
    }
    goto LABEL_237;
  }
  if ( (unsigned int)a2 <= 0x4B )
  {
    if ( (_DWORD)a2 == 75 )
    {
      v89 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           this,
                                                           a2,
                                                           0x60uLL,
                                                           0x63684344u);
      v8 = v89;
      if ( v89 )
      {
        *((_DWORD *)v89 + 8) = 0;
        *((_QWORD *)v89 + 6) = 0LL;
        *((_QWORD *)v89 + 3) = 1LL;
        *((_DWORD *)v89 + 9) = 75;
        v10 = &DirectComposition::CHolographicCompositionMarshaler::`vftable';
        goto LABEL_38;
      }
      goto LABEL_237;
    }
    if ( (unsigned int)a2 <= 0x22 )
    {
      if ( (_DWORD)a2 == 34 )
      {
        v53 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                             this,
                                                             a2,
                                                             0x88uLL,
                                                             0x6C644344u);
        v8 = v53;
        if ( v53 )
        {
          *((_DWORD *)v53 + 8) = 0;
          *((_QWORD *)v53 + 6) = 0LL;
          *((_QWORD *)v53 + 3) = 1LL;
          *((_DWORD *)v53 + 9) = 34;
          v10 = &DirectComposition::CCompositionDistantLightMarshaler::`vftable';
          goto LABEL_38;
        }
        goto LABEL_237;
      }
      if ( (unsigned int)a2 <= 0x13 )
      {
        if ( (_DWORD)a2 == 19 )
        {
          v71 = (DirectComposition::CCaptureControllerMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                    this,
                                                                    a2,
                                                                    0x60uLL,
                                                                    0x71634344u);
          if ( !v71 )
            goto LABEL_237;
          v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(v71);
          goto LABEL_29;
        }
        if ( (_DWORD)a2 == 9 )
        {
          v50 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x48uLL,
                                                               0x626A4344u);
          v8 = v50;
          if ( v50 )
          {
            *((_DWORD *)v50 + 8) = 0;
            *((_QWORD *)v50 + 6) = 0LL;
            *((_QWORD *)v50 + 3) = 1LL;
            *((_DWORD *)v50 + 9) = 9;
            v10 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        }
        if ( (unsigned int)a2 > 9 )
        {
          if ( (_DWORD)a2 == 12 )
          {
            v70 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x40uLL,
                                                                 0x64624344u);
            v8 = v70;
            if ( v70 )
            {
              *((_DWORD *)v70 + 8) = 0;
              *((_QWORD *)v70 + 6) = 0LL;
              *((_QWORD *)v70 + 3) = 1LL;
              *((_DWORD *)v70 + 9) = 12;
              v10 = &DirectComposition::CBatchDeferralMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          }
          if ( (_DWORD)a2 != 13 )
          {
            if ( (_DWORD)a2 != 14 )
            {
              if ( (_DWORD)a2 == 15 )
              {
                v56 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                     this,
                                                                     a2,
                                                                     0x48uLL,
                                                                     0x646A4344u);
                v8 = v56;
                if ( v56 )
                {
                  *((_DWORD *)v56 + 8) = 0;
                  *((_QWORD *)v56 + 6) = 0LL;
                  *((_QWORD *)v56 + 3) = 1LL;
                  *((_DWORD *)v56 + 9) = 15;
                  v10 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
                  goto LABEL_38;
                }
                goto LABEL_237;
              }
              v30 = a2 - 16;
              if ( (_DWORD)a2 == 16 )
              {
                v68 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                     this,
                                                                     a2,
                                                                     0x80uLL,
                                                                     0x65664344u);
                v8 = v68;
                if ( v68 )
                {
                  *((_DWORD *)v68 + 8) = 0;
                  *((_QWORD *)v68 + 6) = 0LL;
                  *((_QWORD *)v68 + 3) = 1LL;
                  *((_DWORD *)v68 + 9) = 16;
                  *((_DWORD *)v68 + 18) = 0;
                  *((_QWORD *)v68 + 10) = 0LL;
                  *((_QWORD *)v68 + 11) = 0LL;
                  *((_QWORD *)v68 + 12) = 0LL;
                  *((_DWORD *)v68 + 26) = 0;
                  v10 = &DirectComposition::CBrightnessEffectMarshaler::`vftable';
                  goto LABEL_38;
                }
                goto LABEL_237;
              }
LABEL_334:
              v22 = v30 == 2;
LABEL_84:
              if ( !v22 )
                goto LABEL_85;
              goto LABEL_368;
            }
            v69 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x78uLL, 0x65664344u);
            if ( !v69 )
              goto LABEL_237;
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v69, 14LL);
            v34 = &DirectComposition::CBlendEffectMarshaler::`vftable';
LABEL_122:
            *(_QWORD *)v8 = v34;
            goto LABEL_39;
          }
          goto LABEL_368;
        }
        switch ( (_DWORD)a2 )
        {
          case 1:
            v67 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x98uLL, 0x65664344u);
            if ( !v67 )
              goto LABEL_237;
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v67, 1LL);
            v34 = &DirectComposition::CAffineTransform2DEffectMarshaler::`vftable';
            goto LABEL_122;
          case 2:
            v109 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0xF8uLL, 0x6E614344u);
            if ( !v109 )
              return (unsigned int)-1073741801;
            *((_DWORD *)v109 + 12) = 0;
            *((_QWORD *)v109 + 8) = 0LL;
            v39 = (_QWORD *)((char *)this + 336);
            *((_QWORD *)v109 + 5) = 1LL;
            *((_DWORD *)v109 + 13) = 2;
            *(_QWORD *)v109 = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
            *((_QWORD *)v109 + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
            v40 = v109 + 128;
            v41 = *((_QWORD *)this + 42);
            if ( *(DirectComposition::CApplicationChannel **)(v41 + 8) != (DirectComposition::CApplicationChannel *)((char *)this + 336) )
              __fastfail(3u);
            *v40 = v41;
            *((_QWORD *)v109 + 17) = v39;
            *(_QWORD *)(v41 + 8) = v40;
            *v39 = v40;
            goto LABEL_150;
          case 4:
            v43 = (DirectComposition::CAnimationLoggingManagerMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                            this,
                                                                            a2,
                                                                            0x108uLL,
                                                                            0x6D6C4344u);
            if ( !v43 )
              goto LABEL_237;
            v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CAnimationLoggingManagerMarshaler::CAnimationLoggingManagerMarshaler(v43);
            goto LABEL_29;
          case 6:
            v66 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x88uLL, 0x65664344u);
            if ( !v66 )
              goto LABEL_237;
            DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v66, 6LL);
            v34 = &DirectComposition::CArithmeticCompositeEffectMarshaler::`vftable';
            goto LABEL_122;
        }
        v21 = a2 - 7;
        v20 = (_DWORD)a2 == 7;
      }
      else
      {
        if ( (unsigned int)a2 > 0x1C )
        {
          if ( (_DWORD)a2 == 29 )
          {
            v9 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                this,
                                                                a2,
                                                                0x88uLL,
                                                                0x32634344u);
            v8 = v9;
            if ( !v9 )
              goto LABEL_237;
            *((_DWORD *)v9 + 8) = 0;
            *((_QWORD *)v9 + 6) = 0LL;
            *((_QWORD *)v9 + 3) = 1LL;
            *((_DWORD *)v9 + 9) = 29;
            v10 = &DirectComposition::CComponentTransform2DMarshaler::`vftable';
          }
          else
          {
            if ( (_DWORD)a2 != 30 )
            {
              if ( (_DWORD)a2 != 31 )
              {
                if ( (_DWORD)a2 == 32 )
                {
                  v52 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                       this,
                                                                       a2,
                                                                       0x78uLL,
                                                                       0x6D614344u);
                  v8 = v52;
                  if ( v52 )
                  {
                    *((_DWORD *)v52 + 8) = 0;
                    *((_QWORD *)v52 + 6) = 0LL;
                    *((_QWORD *)v52 + 3) = 1LL;
                    *((_DWORD *)v52 + 9) = 32;
                    v10 = &DirectComposition::CCompositionAmbientLightMarshaler::`vftable';
                    goto LABEL_38;
                  }
                }
                else
                {
                  v74 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                       this,
                                                                       a2,
                                                                       0x58uLL,
                                                                       0x6D634344u);
                  v8 = v74;
                  if ( v74 )
                  {
                    *((_DWORD *)v74 + 8) = 0;
                    *((_QWORD *)v74 + 6) = 0LL;
                    *((_QWORD *)v74 + 3) = 1LL;
                    *((_DWORD *)v74 + 9) = 33;
                    v10 = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
                    goto LABEL_38;
                  }
                }
                goto LABEL_237;
              }
              v75 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x78uLL, 0x65664344u);
              if ( !v75 )
                goto LABEL_237;
              DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v75, 31LL);
              v34 = &DirectComposition::CCompositeEffectMarshaler::`vftable';
              goto LABEL_122;
            }
            v24 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0xD8uLL,
                                                                 0x6F634344u);
            v8 = v24;
            if ( !v24 )
              goto LABEL_237;
            *((_DWORD *)v24 + 8) = 0;
            *((_QWORD *)v24 + 6) = 0LL;
            *((_QWORD *)v24 + 3) = 1LL;
            *((_DWORD *)v24 + 9) = 30;
            v10 = &DirectComposition::CComponentTransform3DMarshaler::`vftable';
          }
          goto LABEL_38;
        }
        switch ( (_DWORD)a2 )
        {
          case 0x1C:
            v28 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x68uLL,
                                                                 0x74654344u);
            v8 = v28;
            if ( !v28 )
              goto LABEL_237;
            *((_DWORD *)v28 + 8) = 0;
            *((_QWORD *)v28 + 6) = 0LL;
            *((_QWORD *)v28 + 3) = 1LL;
            *((_DWORD *)v28 + 9) = 28;
            v10 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
            goto LABEL_38;
          case 0x14:
            v73 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x88uLL,
                                                                 0x72634344u);
            v8 = v73;
            if ( v73 )
            {
              *((_DWORD *)v73 + 8) = 0;
              *((_QWORD *)v73 + 6) = 0LL;
              *((_QWORD *)v73 + 3) = 1LL;
              *((_DWORD *)v73 + 9) = 20;
              v10 = &DirectComposition::CCaptureRenderTargetMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case 0x16:
            v17 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x58uLL,
                                                                 0x636A4344u);
            v8 = v17;
            if ( !v17 )
              goto LABEL_237;
            *((_DWORD *)v17 + 8) = 0;
            *((_QWORD *)v17 + 6) = 0LL;
            *((_QWORD *)v17 + 3) = 1LL;
            *((_DWORD *)v17 + 9) = 22;
            v10 = &DirectComposition::CColorBrushMarshaler::`vftable';
            goto LABEL_38;
          case 0x17:
            v35 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x50uLL,
                                                                 0x73674344u);
            v8 = v35;
            if ( v35 )
            {
              *((_DWORD *)v35 + 8) = 0;
              *((_QWORD *)v35 + 6) = 0LL;
              *((_QWORD *)v35 + 3) = 1LL;
              *((_DWORD *)v35 + 9) = 23;
              v10 = &DirectComposition::CColorGradientStopMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case 0x18:
            v72 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0xC8uLL,
                                                                 0x65664344u);
            v8 = v72;
            if ( v72 )
            {
              *((_DWORD *)v72 + 8) = 0;
              *((_QWORD *)v72 + 6) = 0LL;
              *((_QWORD *)v72 + 3) = 1LL;
              *((_DWORD *)v72 + 9) = 24;
              *((_DWORD *)v72 + 18) = 0;
              *((_QWORD *)v72 + 10) = 0LL;
              *((_QWORD *)v72 + 11) = 0LL;
              *((_QWORD *)v72 + 12) = 0LL;
              *((_DWORD *)v72 + 26) = 0;
              v10 = &DirectComposition::CColorMatrixEffectMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
        }
        v21 = a2 - 26;
        v20 = (_DWORD)a2 == 26;
      }
      if ( v20 )
        goto LABEL_368;
      goto LABEL_83;
    }
    if ( (unsigned int)a2 <= 0x37 )
    {
      if ( (_DWORD)a2 == 55 )
      {
        v51 = (DirectComposition::CDropShadowMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           this,
                                                           a2,
                                                           0x78uLL,
                                                           0x73644344u);
        if ( !v51 )
          goto LABEL_237;
        v12 = DirectComposition::CDropShadowMarshaler::CDropShadowMarshaler(v51);
        goto LABEL_29;
      }
      if ( (unsigned int)a2 > 0x2E )
      {
        switch ( (_DWORD)a2 )
        {
          case '0':
            v83 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x58uLL,
                                                                 0x66734344u);
            v8 = v83;
            if ( v83 )
            {
              *((_DWORD *)v83 + 8) = 0;
              *((_QWORD *)v83 + 6) = 0LL;
              *((_QWORD *)v83 + 3) = 1LL;
              *((_DWORD *)v83 + 9) = 48;
              v10 = &DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case '1':
            v82 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x68uLL,
                                                                 0x67734344u);
            v8 = v82;
            if ( v82 )
            {
              *((_DWORD *)v82 + 8) = 0;
              *((_QWORD *)v82 + 6) = 0LL;
              *((_QWORD *)v82 + 3) = 1LL;
              *((_DWORD *)v82 + 9) = 169;
              v10 = &DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case '3':
            v81 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x48uLL,
                                                                 0x72734344u);
            v8 = v81;
            if ( v81 )
            {
              *((_DWORD *)v81 + 8) = 0;
              *((_QWORD *)v81 + 6) = 0LL;
              *((_QWORD *)v81 + 3) = 1LL;
              *((_DWORD *)v81 + 9) = 51;
              v10 = &DirectComposition::CDataSourceReaderMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case '4':
            v80 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0xA8uLL,
                                                                 0x64644344u);
            v8 = v80;
            if ( v80 )
            {
              *((_DWORD *)v80 + 8) = 0;
              *((_QWORD *)v80 + 6) = 0LL;
              *((_QWORD *)v80 + 3) = 1LL;
              *((_DWORD *)v80 + 9) = 52;
              v10 = &DirectComposition::CDDisplayRenderTargetMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case '5':
            v62 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x48uLL,
                                                                 0x65644344u);
            v8 = v62;
            if ( v62 )
            {
              *((_DWORD *)v62 + 8) = 0;
              *((_QWORD *)v62 + 6) = 0LL;
              *((_QWORD *)v62 + 3) = 1LL;
              *((_DWORD *)v62 + 9) = 53;
              v10 = &DirectComposition::CDesktopTreeMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
        }
        goto LABEL_85;
      }
      if ( (_DWORD)a2 != 46 )
      {
        switch ( (_DWORD)a2 )
        {
          case '%':
            v79 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x60uLL,
                                                                 0x6D6D4344u);
            v8 = v79;
            if ( v79 )
            {
              *((_DWORD *)v79 + 8) = 0;
              *((_QWORD *)v79 + 6) = 0LL;
              *((_QWORD *)v79 + 3) = 1LL;
              *((_DWORD *)v79 + 9) = 37;
              v10 = &DirectComposition::CCompositionMipmapSurfaceMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case '&':
            v78 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0xA0uLL,
                                                                 0x6F704344u);
            v8 = v78;
            if ( v78 )
            {
              *((_DWORD *)v78 + 8) = 0;
              *((_QWORD *)v78 + 6) = 0LL;
              *((_QWORD *)v78 + 3) = 1LL;
              *((_DWORD *)v78 + 9) = 38;
              v10 = &DirectComposition::CCompositionPointLightMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case '(':
            v77 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x70uLL,
                                                                 0x62734344u);
            v8 = v77;
            if ( v77 )
            {
              *((_DWORD *)v77 + 8) = 0;
              *((_QWORD *)v77 + 6) = 0LL;
              *((_QWORD *)v77 + 3) = 1LL;
              *((_DWORD *)v77 + 9) = 40;
              v10 = &DirectComposition::CCompositionSkyBoxBrushMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case ')':
            v48 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0xC8uLL,
                                                                 0x70734344u);
            v8 = v48;
            if ( v48 )
            {
              *((_DWORD *)v48 + 8) = 0;
              *((_QWORD *)v48 + 6) = 0LL;
              *((_QWORD *)v48 + 3) = 1LL;
              *((_DWORD *)v48 + 9) = 41;
              v10 = &DirectComposition::CCompositionSpotLightMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case '*':
            v37 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x48uLL,
                                                                 0x62634344u);
            v8 = v37;
            if ( v37 )
            {
              *((_DWORD *)v37 + 8) = 0;
              *((_QWORD *)v37 + 6) = 0LL;
              *((_QWORD *)v37 + 3) = 1LL;
              *((_DWORD *)v37 + 9) = 42;
              v10 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case '-':
            v76 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0xA0uLL,
                                                                 0x61634344u);
            v8 = v76;
            if ( v76 )
            {
              *((_DWORD *)v76 + 8) = 0;
              *((_QWORD *)v76 + 6) = 0LL;
              *((_QWORD *)v76 + 3) = 1LL;
              *((_DWORD *)v76 + 9) = 45;
              v10 = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
        }
        goto LABEL_85;
      }
      v23 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           this,
                                                           a2,
                                                           0x50uLL,
                                                           0x636F4344u);
      v8 = v23;
      if ( !v23 )
        goto LABEL_237;
      *((_DWORD *)v23 + 8) = 0;
      *((_QWORD *)v23 + 6) = 0LL;
      *((_QWORD *)v23 + 3) = 1LL;
      *((_DWORD *)v23 + 9) = 46;
      v10 = &DirectComposition::CContainerShapeMarshaler::`vftable';
    }
    else
    {
      if ( (unsigned int)a2 > 0x42 )
      {
        if ( (_DWORD)a2 != 67 && (_DWORD)a2 != 69 )
        {
          if ( (_DWORD)a2 == 70 )
          {
            v88 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x70uLL,
                                                                 0x67634344u);
            v8 = v88;
            if ( v88 )
            {
              *((_DWORD *)v88 + 8) = 0;
              *((_QWORD *)v88 + 6) = 0LL;
              *((_QWORD *)v88 + 3) = 1LL;
              *((_DWORD *)v88 + 9) = 70;
              v10 = &DirectComposition::CClipGroupMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          }
          if ( (_DWORD)a2 != 71 )
          {
            if ( (_DWORD)a2 == 72 )
            {
              v87 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                   this,
                                                                   a2,
                                                                   0x50uLL,
                                                                   0x76674344u);
              v8 = v87;
              if ( v87 )
              {
                *((_DWORD *)v87 + 8) = 0;
                *((_QWORD *)v87 + 6) = 0LL;
                *((_QWORD *)v87 + 3) = 1LL;
                *((_DWORD *)v87 + 9) = 72;
                v10 = &DirectComposition::CGlobalDCompVisualMarshaler::`vftable';
                goto LABEL_38;
              }
              goto LABEL_237;
            }
            goto LABEL_85;
          }
        }
        goto LABEL_368;
      }
      switch ( (_DWORD)a2 )
      {
        case 'B':
          v86 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0xF0uLL,
                                                               0x69674344u);
          v8 = v86;
          if ( !v86 )
            goto LABEL_237;
          *((_DWORD *)v86 + 8) = 0;
          *((_QWORD *)v86 + 6) = 0LL;
          *((_QWORD *)v86 + 3) = 1LL;
          *((_DWORD *)v86 + 9) = 66;
          *(_QWORD *)v86 = &DirectComposition::CGenericInkMarshaler::`vftable';
          *((_BYTE *)v86 + 64) = 1;
          *((_QWORD *)v86 + 11) = 1LL;
          *((_BYTE *)v86 + 104) = 1;
          *((_QWORD *)v86 + 16) = 1LL;
          *((_BYTE *)v86 + 180) = 0;
          goto LABEL_39;
        case '9':
          v32 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x68uLL,
                                                               0x656A4344u);
          v8 = v32;
          if ( v32 )
          {
            *((_DWORD *)v32 + 8) = 0;
            *((_QWORD *)v32 + 6) = 0LL;
            *((_QWORD *)v32 + 3) = 1LL;
            *((_DWORD *)v32 + 9) = 57;
            v10 = &DirectComposition::CEffectBrushMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        case ';':
          v59 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x70uLL,
                                                               0x79654344u);
          v8 = v59;
          if ( v59 )
          {
            *((_DWORD *)v59 + 8) = 0;
            *((_QWORD *)v59 + 6) = 0LL;
            *((_QWORD *)v59 + 3) = 1LL;
            *((_DWORD *)v59 + 9) = 59;
            v10 = &DirectComposition::CEllipseGeometryMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
      }
      if ( (_DWORD)a2 != 60 )
      {
        if ( (_DWORD)a2 != 62 )
        {
          if ( (_DWORD)a2 != 63 )
          {
            if ( (_DWORD)a2 == 64 )
            {
              v84 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                   this,
                                                                   a2,
                                                                   0x80uLL,
                                                                   0x65664344u);
              v8 = v84;
              if ( v84 )
              {
                *((_DWORD *)v84 + 8) = 0;
                *((_QWORD *)v84 + 6) = 0LL;
                *((_QWORD *)v84 + 3) = 1LL;
                *((_DWORD *)v84 + 9) = 64;
                *((_DWORD *)v84 + 18) = 0;
                *((_QWORD *)v84 + 10) = 0LL;
                *((_QWORD *)v84 + 11) = 0LL;
                *((_QWORD *)v84 + 12) = 0LL;
                *((_DWORD *)v84 + 26) = 0;
                v10 = &DirectComposition::CGaussianBlurEffectMarshaler::`vftable';
                goto LABEL_38;
              }
              goto LABEL_237;
            }
            goto LABEL_85;
          }
          v85 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x80uLL, 0x65664344u);
          if ( !v85 )
            goto LABEL_237;
          DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v85, 63LL);
          v34 = &DirectComposition::CFloodEffectMarshaler::`vftable';
          goto LABEL_122;
        }
        goto LABEL_368;
      }
      v127 = v126;
      v128 = &v129;
      v129 = 2019902276;
      v13 = NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba1200___(
              gpLeakTrackingAllocator,
              224LL,
              2019902276LL,
              &v127,
              260LL);
      v8 = (NSInstrumentation::CLeakTrackingAllocator *)v13;
      if ( !v13 )
        goto LABEL_237;
      *(_DWORD *)(v13 + 32) = 0;
      *(_QWORD *)(v13 + 48) = 0LL;
      *(_QWORD *)(v13 + 24) = 1LL;
      *(_DWORD *)(v13 + 36) = 60;
      v10 = &DirectComposition::CExpressionMarshaler::`vftable';
    }
LABEL_38:
    *(_QWORD *)v8 = v10;
    goto LABEL_39;
  }
  a3 = 104LL;
  if ( (unsigned int)a2 > 0x68 )
  {
    if ( (unsigned int)a2 > 0x84 )
    {
      if ( (unsigned int)a2 <= 0x8D )
      {
        switch ( (_DWORD)a2 )
        {
          case 0x8D:
            v108 = (DirectComposition::CRedirectVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                    this,
                                                                    a2,
                                                                    0x188uLL,
                                                                    0x76724344u);
            if ( !v108 )
              goto LABEL_237;
            v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CRedirectVisualMarshaler::CRedirectVisualMarshaler(v108);
            break;
          case 0x85:
            v61 = (DirectComposition::CProjectedShadowSceneMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                         this,
                                                                         a2,
                                                                         0x88uLL,
                                                                         0x737A4344u);
            if ( !v61 )
              goto LABEL_237;
            v12 = DirectComposition::CProjectedShadowSceneMarshaler::CProjectedShadowSceneMarshaler(v61);
            break;
          case 0x87:
            v127 = v126;
            v128 = &v129;
            v129 = 1651524420;
            v7 = NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba1200___(
                   gpLeakTrackingAllocator,
                   112LL,
                   1651524420LL,
                   &v127,
                   260LL);
            v8 = (NSInstrumentation::CLeakTrackingAllocator *)v7;
            if ( v7 )
            {
              *(_DWORD *)(v7 + 32) = 0;
              *(_QWORD *)(v7 + 48) = 0LL;
              *(_QWORD *)(v7 + 24) = 1LL;
              *(_DWORD *)(v7 + 36) = 135;
              *(_QWORD *)v7 = &DirectComposition::CPropertySetMarshaler::`vftable';
              *(_QWORD *)(v7 + 72) = 0LL;
              *(_QWORD *)(v7 + 80) = 0LL;
              *(_QWORD *)(v7 + 88) = 0LL;
              *(_QWORD *)(v7 + 96) = 0LL;
              goto LABEL_39;
            }
            goto LABEL_237;
          case 0x88:
            v55 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x70uLL,
                                                                 0x787A4344u);
            v8 = v55;
            if ( v55 )
            {
              *((_DWORD *)v55 + 8) = 0;
              *((_QWORD *)v55 + 6) = 0LL;
              *((_QWORD *)v55 + 3) = 1LL;
              *((_DWORD *)v55 + 9) = 136;
              v10 = &DirectComposition::CProxyGeometryClipMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case 0x89:
            v107 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x88uLL, 0x6F6A4344u);
            if ( !v107 )
              goto LABEL_237;
            DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler(v107, 137LL);
            v34 = &DirectComposition::CRadialGradientBrushMarshaler::`vftable';
            goto LABEL_122;
          default:
            v30 = a2 - 138;
            if ( (_DWORD)a2 == 138 )
            {
              v31 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                   this,
                                                                   a2,
                                                                   0x98uLL,
                                                                   0x63724344u);
              v8 = v31;
              if ( v31 )
              {
                *((_DWORD *)v31 + 8) = 0;
                *((_QWORD *)v31 + 6) = 0LL;
                *((_QWORD *)v31 + 3) = 1LL;
                *((_DWORD *)v31 + 9) = 138;
                v10 = &DirectComposition::CRectangleClipMarshaler::`vftable';
                goto LABEL_38;
              }
LABEL_237:
              v8 = 0LL;
              goto LABEL_39;
            }
            goto LABEL_334;
        }
LABEL_29:
        v8 = v12;
        goto LABEL_39;
      }
      if ( (_DWORD)a2 == 143 )
      {
        v111 = (DirectComposition::CRemoteAppRenderTargetMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                       this,
                                                                       a2,
                                                                       0x68uLL,
                                                                       0x6D644344u);
        if ( !v111 )
          goto LABEL_237;
        v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CRemoteAppRenderTargetMarshaler::CRemoteAppRenderTargetMarshaler(v111);
        goto LABEL_29;
      }
      if ( (_DWORD)a2 == 144 )
      {
        v65 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                             this,
                                                             a2,
                                                             0x78uLL,
                                                             0x70644344u);
        v8 = v65;
        if ( v65 )
        {
          *((_DWORD *)v65 + 8) = 0;
          *((_QWORD *)v65 + 6) = 0LL;
          *((_QWORD *)v65 + 3) = 1LL;
          *((_DWORD *)v65 + 9) = 144;
          v10 = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
          goto LABEL_38;
        }
        goto LABEL_237;
      }
      if ( (_DWORD)a2 != 145 )
      {
        if ( (_DWORD)a2 == 150 )
        {
          v110 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                this,
                                                                a2,
                                                                0x78uLL,
                                                                0x65664344u);
          v8 = v110;
          if ( v110 )
          {
            *((_DWORD *)v110 + 8) = 0;
            *((_QWORD *)v110 + 6) = 0LL;
            *((_QWORD *)v110 + 3) = 1LL;
            *((_DWORD *)v110 + 9) = 150;
            *((_DWORD *)v110 + 18) = 0;
            *((_QWORD *)v110 + 10) = 0LL;
            *((_QWORD *)v110 + 11) = 0LL;
            *((_QWORD *)v110 + 12) = 0LL;
            *((_DWORD *)v110 + 26) = 0;
            v10 = &DirectComposition::CSaturationEffectMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        }
        if ( (_DWORD)a2 != 151 )
          goto LABEL_85;
        v109 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x50uLL, 0x6C734344u);
        if ( !v109 )
          return (unsigned int)-1073741801;
        *((_DWORD *)v109 + 12) = 0;
        *((_QWORD *)v109 + 8) = 0LL;
        *((_QWORD *)v109 + 5) = 1LL;
        *((_DWORD *)v109 + 13) = 151;
        *(_QWORD *)v109 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
        *((_QWORD *)v109 + 2) = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
LABEL_150:
        v8 = (NSInstrumentation::CLeakTrackingAllocator *)(v109 + 16);
        goto LABEL_39;
      }
LABEL_368:
      v123 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x50uLL, 0x6D674344u);
      if ( !v123 )
        goto LABEL_237;
      v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CGenericMarshaler::CGenericMarshaler(v123, v4);
      goto LABEL_29;
    }
    if ( (_DWORD)a2 == 132 )
    {
      v64 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           this,
                                                           a2,
                                                           0x60uLL,
                                                           0x727A4344u);
      v8 = v64;
      if ( v64 )
      {
        *((_DWORD *)v64 + 8) = 0;
        *((_QWORD *)v64 + 6) = 0LL;
        *((_QWORD *)v64 + 3) = 1LL;
        *((_DWORD *)v64 + 9) = 132;
        *(_QWORD *)v64 = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
        *((_DWORD *)v64 + 20) = 1;
        goto LABEL_39;
      }
      goto LABEL_237;
    }
    if ( (unsigned int)a2 <= 0x70 )
    {
      if ( (_DWORD)a2 == 112 )
      {
        v105 = (DirectComposition::CNaturalAnimationMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                  this,
                                                                  a2,
                                                                  0xC8uLL,
                                                                  0x616E4344u);
        if ( !v105 )
          goto LABEL_237;
        v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(v105);
        goto LABEL_29;
      }
      if ( (_DWORD)a2 != 105 )
      {
        switch ( (_DWORD)a2 )
        {
          case 'j':
            v46 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x80uLL,
                                                                 0x616D4344u);
            v8 = v46;
            if ( v46 )
            {
              *((_DWORD *)v46 + 8) = 0;
              *((_QWORD *)v46 + 6) = 0LL;
              *((_QWORD *)v46 + 3) = 1LL;
              *((_DWORD *)v46 + 9) = 106;
              v10 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case 'k':
            v18 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x58uLL,
                                                                 0x6D6A4344u);
            v8 = v18;
            if ( !v18 )
              goto LABEL_237;
            *((_DWORD *)v18 + 8) = 0;
            *((_QWORD *)v18 + 6) = 0LL;
            *((_QWORD *)v18 + 3) = 1LL;
            *((_DWORD *)v18 + 9) = 107;
            v10 = &DirectComposition::CMaskBrushMarshaler::`vftable';
            goto LABEL_38;
          case 'm':
            v54 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x60uLL,
                                                                 0x746D4344u);
            v8 = v54;
            if ( v54 )
            {
              *((_DWORD *)v54 + 8) = 0;
              *((_QWORD *)v54 + 6) = 0LL;
              *((_QWORD *)v54 + 3) = 1LL;
              *((_DWORD *)v54 + 9) = 109;
              v10 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
        }
        v21 = a2 - 110;
        if ( (_DWORD)a2 == 110 )
        {
          v49 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x88uLL,
                                                               0x336D4344u);
          v8 = v49;
          if ( v49 )
          {
            *((_DWORD *)v49 + 8) = 0;
            *((_QWORD *)v49 + 6) = 0LL;
            *((_QWORD *)v49 + 3) = 1LL;
            *((_DWORD *)v49 + 9) = 110;
            v10 = &DirectComposition::CMatrixTransform3DMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        }
LABEL_83:
        v22 = v21 == 1;
        goto LABEL_84;
      }
      v104 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                            this,
                                                            a2,
                                                            0x120uLL,
                                                            0x696D4344u);
      v8 = v104;
      if ( !v104 )
        goto LABEL_237;
      *((_DWORD *)v104 + 8) = 0;
      *((_BYTE *)v104 + 108) &= 0xF8u;
      *((_QWORD *)v104 + 6) = 0LL;
      *((_QWORD *)v104 + 3) = 1LL;
      *((_DWORD *)v104 + 9) = 105;
      *(_QWORD *)v104 = &DirectComposition::CManipulationMarshaler::`vftable';
      *((_QWORD *)v104 + 14) = 0LL;
      *((_DWORD *)v104 + 30) = 0;
      *((_QWORD *)v104 + 16) = 0LL;
      *((_QWORD *)v104 + 17) = 0LL;
      goto LABEL_39;
    }
    if ( (_DWORD)a2 != 113 )
    {
      switch ( (_DWORD)a2 )
      {
        case 0x7E:
          v44 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x70uLL,
                                                               0x79704344u);
          v8 = v44;
          if ( v44 )
          {
            *((_DWORD *)v44 + 8) = 0;
            *((_QWORD *)v44 + 6) = 0LL;
            *((_QWORD *)v44 + 3) = 1LL;
            *((_DWORD *)v44 + 9) = 126;
            v10 = &DirectComposition::CPathGeometryMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        case 0x80:
          v106 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                this,
                                                                a2,
                                                                0x48uLL,
                                                                0x63704344u);
          v8 = v106;
          if ( v106 )
          {
            *((_DWORD *)v106 + 8) = 0;
            *((_QWORD *)v106 + 6) = 0LL;
            *((_QWORD *)v106 + 3) = 1LL;
            *((_DWORD *)v106 + 9) = 128;
            v10 = &DirectComposition::CPrimitiveColorMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        case 0x81:
          v36 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0xC8uLL,
                                                               0x67704344u);
          v8 = v36;
          if ( v36 )
          {
            *((_DWORD *)v36 + 8) = 0;
            *((_QWORD *)v36 + 6) = 0LL;
            *((_QWORD *)v36 + 3) = 1LL;
            *((_DWORD *)v36 + 9) = 129;
            v10 = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        case 0x83:
          v60 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x68uLL,
                                                               0x637A4344u);
          v8 = v60;
          if ( v60 )
          {
            *((_DWORD *)v60 + 8) = 0;
            *((_QWORD *)v60 + 6) = 0LL;
            *((_QWORD *)v60 + 3) = 1LL;
            *((_DWORD *)v60 + 9) = 131;
            v10 = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
      }
      goto LABEL_85;
    }
    v27 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                         this,
                                                         a2,
                                                         0x78uLL,
                                                         0x6E6A4344u);
    v8 = v27;
    if ( !v27 )
      goto LABEL_237;
    *((_DWORD *)v27 + 8) = 0;
    *((_QWORD *)v27 + 6) = 0LL;
    *((_QWORD *)v27 + 3) = 1LL;
    *((_DWORD *)v27 + 9) = 113;
    v10 = &DirectComposition::CNineGridBrushMarshaler::`vftable';
    goto LABEL_38;
  }
  if ( (_DWORD)a2 == 104 )
    goto LABEL_368;
  if ( (unsigned int)a2 > 0x5A )
  {
    if ( (unsigned int)a2 <= 0x62 )
    {
      if ( (_DWORD)a2 != 98 )
      {
        switch ( (_DWORD)a2 )
        {
          case '[':
            v101 = (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                                      this,
                                                                                      a2,
                                                                                      0x70uLL,
                                                                                      0x73694344u);
            if ( !v101 )
              goto LABEL_237;
            v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CInteractionTrackerBindingManagerMarshaler::CInteractionTrackerBindingManagerMarshaler(v101);
            break;
          case '\\':
            v127 = v126;
            v128 = &v129;
            v129 = 1718305604;
            v15 = NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba1200___(
                    gpLeakTrackingAllocator,
                    304LL,
                    1718305604LL,
                    &v127,
                    260LL);
            v8 = (NSInstrumentation::CLeakTrackingAllocator *)v15;
            if ( v15 )
            {
              *(_DWORD *)(v15 + 32) = 0;
              *(_QWORD *)(v15 + 48) = 0LL;
              *(_QWORD *)(v15 + 24) = 1LL;
              *(_DWORD *)(v15 + 36) = 92;
              *(_QWORD *)v15 = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
              *(_DWORD *)(v15 + 256) = 1065353216;
              *(_DWORD *)(v15 + 260) = 1065353216;
              goto LABEL_39;
            }
            goto LABEL_237;
          case ']':
            v45 = (DirectComposition::CLayerVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                this,
                                                                a2,
                                                                0x190uLL,
                                                                0x766C4344u);
            if ( !v45 )
              goto LABEL_237;
            v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CLayerVisualMarshaler::CLayerVisualMarshaler(v45);
            break;
          case '^':
            v100 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                  this,
                                                                  a2,
                                                                  0x40uLL,
                                                                  0x74614344u);
            v8 = v100;
            if ( v100 )
            {
              *((_DWORD *)v100 + 8) = 0;
              *((_QWORD *)v100 + 6) = 0LL;
              *((_QWORD *)v100 + 3) = 1LL;
              *((_DWORD *)v100 + 9) = 94;
              v10 = &DirectComposition::CLegacyAnimationTriggerMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case '`':
            v63 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x98uLL,
                                                                 0x6B644344u);
            v8 = v63;
            if ( v63 )
            {
              *((_DWORD *)v63 + 8) = 0;
              *((_QWORD *)v63 + 6) = 0LL;
              *((_QWORD *)v63 + 3) = 1LL;
              *((_DWORD *)v63 + 9) = 96;
              v10 = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          case 'a':
            v99 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 this,
                                                                 a2,
                                                                 0x98uLL,
                                                                 0x6A644344u);
            v8 = v99;
            if ( v99 )
            {
              *((_DWORD *)v99 + 8) = 0;
              *((_QWORD *)v99 + 6) = 0LL;
              *((_QWORD *)v99 + 3) = 1LL;
              *((_DWORD *)v99 + 9) = 97;
              v10 = &DirectComposition::CLegacyStereoRenderTargetMarshaler::`vftable';
              goto LABEL_38;
            }
            goto LABEL_237;
          default:
            goto LABEL_85;
        }
        goto LABEL_29;
      }
      goto LABEL_368;
    }
    switch ( (_DWORD)a2 )
    {
      case 'c':
        v33 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x80uLL, 0x6C6A4344u);
        if ( !v33 )
          goto LABEL_237;
        DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler(v33, 99LL);
        v34 = &DirectComposition::CLinearGradientBrushMarshaler::`vftable';
        goto LABEL_122;
      case 'd':
        goto LABEL_368;
      case 'e':
        v103 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x98uLL, 0x65664344u);
        if ( !v103 )
          goto LABEL_237;
        DirectComposition::CFilterEffectMarshaler::CFilterEffectMarshaler(v103, 101LL);
        v34 = &DirectComposition::CLinearTransferEffectMarshaler::`vftable';
        goto LABEL_122;
    }
    v21 = a2 - 102;
    if ( (_DWORD)a2 == 102 )
    {
      v102 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                            this,
                                                            a2,
                                                            0x70uLL,
                                                            0x676C4344u);
      v8 = v102;
      if ( v102 )
      {
        *((_DWORD *)v102 + 8) = 0;
        *((_QWORD *)v102 + 6) = 0LL;
        *((_QWORD *)v102 + 3) = 1LL;
        *((_DWORD *)v102 + 9) = 102;
        v10 = &DirectComposition::CLineGeometryMarshaler::`vftable';
        goto LABEL_38;
      }
      goto LABEL_237;
    }
    goto LABEL_83;
  }
  if ( (_DWORD)a2 == 90 )
  {
    v98 = (DirectComposition::CInteractionTrackerMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x1D8uLL,
                                                               0x72694344u);
    if ( !v98 )
      goto LABEL_237;
    v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(v98);
    goto LABEL_29;
  }
  if ( (unsigned int)a2 <= 0x53 )
  {
    switch ( (_DWORD)a2 )
    {
      case 'S':
        v95 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                             this,
                                                             a2,
                                                             0x78uLL,
                                                             0x65664344u);
        v8 = v95;
        if ( v95 )
        {
          *((_DWORD *)v95 + 8) = 0;
          *((_QWORD *)v95 + 6) = 0LL;
          *((_QWORD *)v95 + 3) = 1LL;
          *((_DWORD *)v95 + 9) = 83;
          *((_DWORD *)v95 + 18) = 0;
          *((_QWORD *)v95 + 10) = 0LL;
          *((_QWORD *)v95 + 11) = 0LL;
          *((_QWORD *)v95 + 12) = 0LL;
          *((_DWORD *)v95 + 26) = 0;
          v10 = &DirectComposition::CHueRotationEffectMarshaler::`vftable';
          goto LABEL_38;
        }
        goto LABEL_237;
      case 'L':
        v94 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                             this,
                                                             a2,
                                                             0x68uLL,
                                                             0x64684344u);
        v8 = v94;
        if ( v94 )
        {
          *((_DWORD *)v94 + 8) = 0;
          *((_QWORD *)v94 + 6) = 0LL;
          *((_QWORD *)v94 + 3) = 1LL;
          *((_DWORD *)v94 + 9) = 76;
          v10 = &DirectComposition::CHolographicDisplayMarshaler::`vftable';
          goto LABEL_38;
        }
        goto LABEL_237;
      case 'M':
        v93 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                             this,
                                                             a2,
                                                             0x48uLL,
                                                             0x6D684344u);
        v8 = v93;
        if ( v93 )
        {
          *((_DWORD *)v93 + 8) = 0;
          *((_QWORD *)v93 + 6) = 0LL;
          *((_QWORD *)v93 + 3) = 1LL;
          *((_DWORD *)v93 + 9) = 77;
          v10 = &DirectComposition::CHolographicExclusiveModeMarshaler::`vftable';
          goto LABEL_38;
        }
        goto LABEL_237;
    }
    if ( (_DWORD)a2 != 78 )
    {
      switch ( (_DWORD)a2 )
      {
        case 'P':
          v91 = (DirectComposition::CHolographicInteropTextureMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                            this,
                                                                            a2,
                                                                            0x60uLL,
                                                                            0x69684344u);
          if ( !v91 )
            goto LABEL_237;
          v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CHolographicInteropTextureMarshaler::CHolographicInteropTextureMarshaler(v91);
          break;
        case 'Q':
          v90 = (DirectComposition::CHolographicViewerMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                    this,
                                                                    a2,
                                                                    0x88uLL,
                                                                    0x78684344u);
          if ( !v90 )
            goto LABEL_237;
          v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CHolographicViewerMarshaler::CHolographicViewerMarshaler(v90);
          break;
        case 'R':
          v58 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               this,
                                                               a2,
                                                               0x38uLL,
                                                               0x70684344u);
          v8 = v58;
          if ( v58 )
          {
            *((_DWORD *)v58 + 8) = 0;
            *((_QWORD *)v58 + 6) = 0LL;
            *((_QWORD *)v58 + 3) = 1LL;
            *((_DWORD *)v58 + 9) = 82;
            v10 = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
            goto LABEL_38;
          }
          goto LABEL_237;
        default:
          goto LABEL_85;
      }
      goto LABEL_29;
    }
    v92 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                         this,
                                                         a2,
                                                         0x68uLL,
                                                         0x65684344u);
    v8 = v92;
    if ( !v92 )
      goto LABEL_237;
    *((_DWORD *)v92 + 4) |= 0x20u;
    *((_DWORD *)v92 + 8) = 0;
    *((_QWORD *)v92 + 6) = 0LL;
    *((_QWORD *)v92 + 3) = 1LL;
    *((_DWORD *)v92 + 9) = 78;
    *(_QWORD *)v92 = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
  }
  else
  {
    if ( (_DWORD)a2 == 84 || (_DWORD)a2 == 86 )
      goto LABEL_368;
    if ( (_DWORD)a2 == 87 )
    {
      v97 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           this,
                                                           a2,
                                                           0x98uLL,
                                                           0x61694344u);
      v8 = v97;
      if ( v97 )
      {
        *((_DWORD *)v97 + 8) = 0;
        *((_QWORD *)v97 + 6) = 0LL;
        *((_QWORD *)v97 + 3) = 1LL;
        *((_DWORD *)v97 + 9) = 87;
        v10 = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
        goto LABEL_38;
      }
      goto LABEL_237;
    }
    if ( (_DWORD)a2 != 88 )
    {
      if ( (_DWORD)a2 != 89 )
      {
LABEL_85:
        PrivateMarshaler = DirectComposition::GeneratedCreatePrivateMarshaler(
                             (DirectComposition *)(unsigned int)a2,
                             (unsigned int)&v130,
                             (struct DirectComposition::CResourceMarshaler **)a3);
        if ( PrivateMarshaler < 0 )
          return (unsigned int)PrivateMarshaler;
        goto LABEL_86;
      }
      v42 = (DirectComposition::CInteractionMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                          this,
                                                          a2,
                                                          0x150uLL,
                                                          0x6F694344u);
      if ( !v42 )
        goto LABEL_237;
      v12 = (DirectComposition::CDropShadowMarshaler *)DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v42);
      goto LABEL_29;
    }
    v96 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                         this,
                                                         a2,
                                                         0xA0uLL,
                                                         0x6B694344u);
    v8 = v96;
    if ( !v96 )
      goto LABEL_237;
    *((_DWORD *)v96 + 8) = 0;
    *((_QWORD *)v96 + 6) = 0LL;
    *((_QWORD *)v96 + 3) = 1LL;
    *((_DWORD *)v96 + 9) = 88;
    *(_QWORD *)v96 = &DirectComposition::CInkMarshaler::`vftable';
    *((_BYTE *)v96 + 120) = 1;
    *((_QWORD *)v96 + 18) = 36LL;
  }
LABEL_39:
  if ( !v8 )
    return (unsigned int)-1073741801;
  *v3 = v8;
  return (unsigned int)PrivateMarshaler;
}
