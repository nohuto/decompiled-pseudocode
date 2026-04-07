/*
 * XREFs of ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3D8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800157E0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _Init_thread_footer @ 0x180053C0C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180053C7C (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180088418 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18008848C (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800884D8 (-OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180088554 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18008B730 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18008B9C4 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x18008BB6C (-OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18008BBDC (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18008BE88 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18008C30C (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18008C9AC (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18008CBD0 (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 *     ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x18008D038 (-RenderAndCommit@CMagnifierControl@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008D1A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 *     ?reset@?$unique_ptr@VMagnifierExperienceHelper@@U?$default_delete@VMagnifierExperienceHelper@@@wistd@@@wistd@@QEAAXPEAVMagnifierExperienceHelper@@@Z @ 0x18008D2E4 (-reset@-$unique_ptr@VMagnifierExperienceHelper@@U-$default_delete@VMagnifierExperienceHelper@@@w.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x180095CBC (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 *     ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x180098CB0 (-RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener.c)
 *     ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800BC8D4 (--0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BD1DC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierApiMessage(unsigned __int64 a1, int a2, __int64 a3, char a4)
{
  unsigned int v4; // edi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // eax
  CMagnifierControl *v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  double *v31; // rsi
  MagnifierExperienceHelper *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // esi
  MagnifierExperienceHelper *v41; // rax
  MagnifierExperienceHelper *v42; // rax
  int v43; // eax
  struct CMagnifier *v44; // rax
  __int64 v45; // rcx
  int v46; // esi
  MagnifierExperienceHelper *v47; // rax
  MagnifierExperienceHelper *v48; // rax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  int v55; // eax
  __int64 v56; // rdx
  int v57; // eax
  struct CMagnifier *v59; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v60; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v61[2]; // [rsp+40h] [rbp-10h] BYREF
  int v62; // [rsp+88h] [rbp+38h] BYREF
  float v63; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v63) = a4;
  v4 = 0;
  v8 = 0;
  if ( dword_1800E6FE4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E6FE4);
    if ( dword_1800E6FE4 == -1 )
    {
      dword_1800E6F38 = -2147023728;
      Init_thread_footer(&dword_1800E6FE4);
    }
  }
  v60 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 > 1073741927 )
  {
    v35 = a2 - 1073741929;
    if ( !v35 )
    {
      v56 = *(_QWORD *)(a3 + 4);
      v59 = 0LL;
      v57 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v56, &v59);
      v8 = v57;
      if ( v57 >= 0 )
        v8 = 0;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v57, 0xF1u);
      goto LABEL_74;
    }
    v36 = v35 - 1;
    if ( !v36 )
    {
      v53 = *(_QWORD *)(a3 + 4);
      v59 = 0LL;
      v54 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v53, &v59);
      v8 = v54;
      if ( v54 >= 0 )
      {
        v55 = CMagnifier::OnSetMagnifierSamplingMode((__int64)v59, *(_DWORD *)(a3 + 20));
        v8 = v55;
        if ( v55 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v55, 0x13Fu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v54, 0x13Du);
      }
      goto LABEL_74;
    }
    v37 = v36 - 1;
    if ( !v37 )
    {
      v51 = CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(*(_QWORD *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v8 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v51, 0x147u);
        goto LABEL_74;
      }
      goto LABEL_65;
    }
    v38 = v37 - 1;
    if ( !v38 )
    {
      v50 = CFullScreenMagnifier::OnSetPersistentDesktopColorEffect(
              *(CFullScreenMagnifier **)(a1 + 48),
              (const struct MilColorTransform *)(a3 + 12));
      v8 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v50, 0x151u);
        goto LABEL_74;
      }
      goto LABEL_65;
    }
    v39 = v38 - 1;
    if ( v39 )
    {
      if ( v39 != 1 )
        goto LABEL_74;
      LOBYTE(v9) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
        v9,
        v11);
      v40 = *(_DWORD *)(a3 + 12);
      v41 = (MagnifierExperienceHelper *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                           WPF::g_pProcessHeap,
                                           128LL);
      if ( v41 )
        v42 = MagnifierExperienceHelper::MagnifierExperienceHelper(
                v41,
                (const double *)(a1 + 152),
                (const float *)(a3 + 16),
                (const float *)(a3 + 20));
      else
        v42 = 0LL;
      v59 = 0LL;
      wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(
        a1 + 160,
        v42);
      wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(&v59, 0LL);
      if ( v40 )
      {
        v43 = CWindowList::RegisterForSoftwareCursorChangeNotification(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                (struct ISoftwareCursorChangeListener *)((a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64)));
        v8 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v43, 0x189u);
          goto LABEL_74;
        }
        goto LABEL_54;
      }
    }
    else
    {
      v46 = *(_DWORD *)(a3 + 12);
      v47 = (MagnifierExperienceHelper *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                           WPF::g_pProcessHeap,
                                           128LL);
      if ( v47 )
      {
        v63 = 0.0;
        v62 = 0;
        v48 = MagnifierExperienceHelper::MagnifierExperienceHelper(
                v47,
                (const double *)(a1 + 152),
                (const float *)&v62,
                &v63);
      }
      else
      {
        v48 = 0LL;
      }
      v59 = 0LL;
      wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(
        a1 + 160,
        v48);
      wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(&v59, 0LL);
      if ( v46 )
      {
        v49 = CWindowList::RegisterForSoftwareCursorChangeNotification(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                (struct ISoftwareCursorChangeListener *)((a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64)));
        v8 = v49;
        if ( v49 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v49, 0x16Au);
          goto LABEL_74;
        }
LABEL_54:
        *(_BYTE *)(a1 + 128) = *(_DWORD *)(a3 + 12) != 0;
        goto LABEL_74;
      }
    }
    v44 = (struct CMagnifier *)(a1 + 16);
    if ( !a1 )
      v44 = 0LL;
    v59 = v44;
    v45 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
    v61[0] = &v59;
    v61[1] = v45;
    CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(v45, v61);
    goto LABEL_54;
  }
  if ( a2 == 1073741927 )
  {
    v31 = (double *)(a3 + 12);
    if ( *(_BYTE *)(a1 + 128) )
    {
      LOBYTE(v10) = *(double *)(a1 + 152) != *v31;
      LODWORD(v59) = -*(_DWORD *)(a3 + 20);
      HIDWORD(v59) = -*(_DWORD *)(a3 + 24);
      *(_QWORD *)(a1 + 184) = v59;
      if ( !(_BYTE)v10 )
      {
        v62 = 0;
        LOBYTE(v63) = 0;
        if ( (int)wil::wnf_query_nothrow<unsigned int>(v10, (char *)&v63, &v62, v12) >= 0 && LOBYTE(v63) && !v62 )
          goto LABEL_74;
      }
      v32 = *(MagnifierExperienceHelper **)(a1 + 160);
      *(double *)(a1 + 152) = *v31;
      MagnifierExperienceHelper::SetMagnificationFactor(v32, (const double *)(a3 + 12));
      v33 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
              *(CFullScreenMagnifier **)(a1 + 48),
              *v31,
              *(_DWORD *)(a3 + 20),
              *(_DWORD *)(a3 + 24));
      v8 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v33, 0x127u);
        goto LABEL_74;
      }
    }
    else
    {
      v34 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
              *(CFullScreenMagnifier **)(a1 + 48),
              *v31,
              *(_DWORD *)(a3 + 20),
              *(_DWORD *)(a3 + 24));
      v8 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v34, 0x130u);
        goto LABEL_74;
      }
    }
    goto LABEL_65;
  }
  v13 = a2 - 1073741919;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            if ( v17 != 3 )
              goto LABEL_74;
            v18 = CFullScreenMagnifier::OnSetDesktopColorEffect(
                    *(CFullScreenMagnifier **)(a1 + 48),
                    (const struct MilColorTransform *)(a3 + 12));
            v8 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v18, 0xFDu);
              goto LABEL_74;
            }
LABEL_65:
            v52 = CMagnifierControl::RenderAndCommit(v19);
            v8 = v52;
            if ( v52 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v52, 0x198u);
            goto LABEL_74;
          }
          v20 = *(_QWORD *)(a3 + 8);
          v59 = 0LL;
          v21 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v20, &v59);
          v8 = v21;
          if ( v21 >= 0 )
          {
            v22 = CMagnifier::OnSetRenderTargetTextures(v59, (const struct MAGN_ADAPTERTEXTURES *)(a3 + 16));
            v8 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v22, 0xE7u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v21, 0xE3u);
          }
        }
        else
        {
          v23 = *(_QWORD *)(a3 + 8);
          v59 = 0LL;
          v24 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v23, &v59);
          v8 = v24;
          if ( v24 >= 0 )
          {
            v25 = CMagnifier::OnModifyWindowFilterList(
                    (CMagnifierRenderTargetProxy **)v59,
                    (const struct MAGN_FILTERLIST *)(a3 + 16));
            v8 = v25;
            if ( v25 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v25, 0xD9u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v24, 0xD5u);
          }
        }
      }
      else
      {
        v26 = *(_QWORD *)(a3 + 4);
        v59 = 0LL;
        v27 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v26, &v59);
        v8 = v27;
        if ( v27 >= 0 )
        {
          v28 = CMagnifier::OnSetColorEffect(v59, (const struct MilColorTransform *)(a3 + 20));
          v8 = v28;
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v28, 0xCBu);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v27, 0xC9u);
        }
      }
    }
    else
    {
      *(_BYTE *)(a1 + 128) = 0;
      v29 = CMagnifierControl::OnMagnifierDestroy((CMagnifierControl *)a1, *(HWND *)(a3 + 4));
      v8 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v29, 0xBFu);
    }
  }
  else
  {
    v30 = CMagnifierControl::OnMagnifierCreate((CMagnifierControl *)a1, *(HWND *)(a3 + 4), *(_DWORD *)(a3 + 20));
    v8 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E6F38, 1LL, v30, 0xB4u);
  }
LABEL_74:
  if ( v8 != -2147023728 )
    v4 = v8;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v60);
  return v4;
}
