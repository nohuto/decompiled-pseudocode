/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800310DC
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180030C54 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x1800089D4 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x180008A08 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x1800094AC (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x1800094DC (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x180009514 (--0CSlide@@IEAA@XZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002F7A0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x180030FF0 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18004209C (--0CStoryboard@@IEAA@_N@Z.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x180053580 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x1800535B0 (--0CFade@@IEAA@XZ.c)
 *     memset_0 @ 0x180057E72 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800AE3B4 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800AE400 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x1800AE430 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800AE4A8 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x1800AE4E8 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800AE518 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  CStoryboard *v7; // rax
  CStoryboard *v8; // rbx
  void **v9; // rax
  void **v10; // rcx
  int v11; // eax
  int v12; // ebx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  CFlyoutPopup *v21; // rax
  int v22; // ecx
  CLauncherAnimationBase *v23; // rax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  CSlideOut *v27; // rax
  CFadeIn *v28; // rax
  CFadeOut *v29; // rax
  CFlyoutPopup *v30; // rax
  int v31; // ecx
  CLauncherAnimationBase *v32; // rax
  CStoryboard *v33; // rax
  CSlideOut *v34; // rax
  CSlideOut *v35; // rax
  CStoryboard *v36; // rax
  CSlideIn *v37; // rax
  CSlideIn *v38; // rbx
  CFadeOut *v39; // rax
  CSlide *v40; // rax
  int v41; // ecx
  int v42; // ecx
  CStoryboard *v43; // rax
  CLaunchSwitchBase *v44; // rax
  CLaunchSwitchBase *v45; // rax
  CCrossFade *v46; // rax
  CStoryboard *v47; // rax
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  CStoryboard *v55; // rax
  CStoryboard *v56; // rax
  CPanelAnimation *v57; // rax
  CPanelAnimation *v58; // rax
  CStoryboard *v59; // rax
  CStoryboard *v60; // rax
  CAppArrangementBase *v61; // rax
  CAppArrangementBase *v62; // rax
  CStoryboard *v63; // rax
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  CStoryboard *v67; // rax
  CStoryboard *v68; // rax
  __int64 v69; // rcx
  CStoryboard *v70; // rax
  CVirtualDesktopSwitch *v71; // rax
  CStoryboard *v72; // rax

  *a3 = 0LL;
  if ( a1 <= 66 )
  {
    if ( a1 == 66 )
    {
      v47 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             120LL);
      v8 = v47;
      if ( v47 )
      {
        memset_0(v47, 0, 0x78uLL);
        CFadeIn::CFadeIn(v8);
        v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v10 = &CTDBN::`vftable'{for `CBaseObject'};
        goto LABEL_8;
      }
      goto LABEL_46;
    }
    if ( a1 > 19 )
    {
      v5 = a1 - 34;
      if ( v5 )
      {
        v6 = v5 - 16;
        if ( !v6 )
        {
          v7 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                WPF::g_pProcessHeap,
                                120LL);
          v8 = v7;
          if ( v7 )
          {
            CStoryboard::CStoryboard(v7, 0);
            v9 = &CSlide::`vftable'{for `IAnimationListener'};
            v10 = &CWindowClose::`vftable'{for `CBaseObject'};
LABEL_8:
            *((_QWORD *)v8 + 2) = v9;
            *(_QWORD *)v8 = v10;
            goto LABEL_9;
          }
          goto LABEL_46;
        }
        v22 = v6 - 6;
        if ( !v22 )
        {
          v23 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                            WPF::g_pProcessHeap,
                                            136LL);
          v8 = v23;
          if ( v23 )
          {
            CLauncherAnimationBase::CLauncherAnimationBase(v23);
            v9 = &CSlide::`vftable'{for `IAnimationListener'};
            v10 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
            goto LABEL_8;
          }
          goto LABEL_46;
        }
        v31 = v22 - 1;
        if ( !v31 )
        {
          v32 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                            WPF::g_pProcessHeap,
                                            144LL);
          v8 = v32;
          if ( v32 )
          {
            CLauncherAnimationBase::CLauncherAnimationBase(v32);
            v9 = &CSlide::`vftable'{for `IAnimationListener'};
            *((_BYTE *)v8 + 136) = 0;
            v10 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
            goto LABEL_8;
          }
          goto LABEL_46;
        }
        v41 = v31 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 == 5 )
            {
              v43 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     120LL);
              v8 = v43;
              if ( v43 )
              {
                CStoryboard::CStoryboard(v43, 0);
                v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                v10 = &CNoAnimation::`vftable'{for `CBaseObject'};
                goto LABEL_8;
              }
              goto LABEL_46;
            }
            return (unsigned int)-2147024809;
          }
          if ( !a2 )
            return (unsigned int)-2147024809;
          v44 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
          v8 = v44;
          if ( v44 )
          {
            CLaunchSwitchBase::CLaunchSwitchBase(v44);
            v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *((_BYTE *)v8 + 168) = 1;
            v10 = &CAppSwitch::`vftable'{for `CBaseObject'};
            goto LABEL_8;
          }
        }
        else
        {
          if ( !a2 )
            return (unsigned int)-2147024809;
          v45 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       176LL);
          v8 = v45;
          if ( v45 )
          {
            CLaunchSwitchBase::CLaunchSwitchBase(v45);
            v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *((_BYTE *)v8 + 168) = 0;
            v10 = &CAppLaunch::`vftable'{for `CBaseObject'};
            goto LABEL_8;
          }
        }
        goto LABEL_46;
      }
      v46 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            120LL);
      if ( !v46 )
        goto LABEL_46;
      v29 = CCrossFade::CCrossFade(v46);
LABEL_38:
      v8 = v29;
      goto LABEL_9;
    }
    if ( a1 == 19 )
    {
      v30 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              120LL);
      v8 = v30;
      if ( v30 )
      {
        CFlyoutPopup::CFlyoutPopup(v30);
        v9 = &CSlide::`vftable'{for `IAnimationListener'};
        v10 = &CHidePopup::`vftable'{for `CBaseObject'};
        goto LABEL_8;
      }
      goto LABEL_46;
    }
    v14 = a1 - 3;
    if ( !v14 )
    {
      v40 = (CSlide *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        128LL);
      v8 = v40;
      if ( v40 )
      {
        CSlide::CSlide(v40);
        v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v10 = &CReposition::`vftable'{for `CBaseObject'};
        goto LABEL_8;
      }
      goto LABEL_46;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v28 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         120LL);
      if ( !v28 )
        goto LABEL_46;
      v29 = CFadeIn::CFadeIn(v28);
      goto LABEL_38;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v39 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          120LL);
      if ( !v39 )
        goto LABEL_46;
      v29 = CFadeOut::CFadeOut(v39);
      goto LABEL_38;
    }
    v17 = v16 - 9;
    if ( !v17 )
    {
      v37 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
      v38 = v37;
      if ( !v37 )
        goto LABEL_46;
      memset_0(v37, 0, 0x80uLL);
      v29 = CSlideIn::CSlideIn(v38);
      goto LABEL_38;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        v35 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
        if ( !v35 )
          goto LABEL_46;
        v29 = CSlideOut::CSlideOut(v35);
        goto LABEL_38;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v21 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                                  WPF::g_pProcessHeap,
                                  120LL);
          v8 = v21;
          if ( v21 )
          {
            CFlyoutPopup::CFlyoutPopup(v21);
            v9 = &CSlide::`vftable'{for `IAnimationListener'};
            v10 = &CShowPopup::`vftable'{for `CBaseObject'};
            goto LABEL_8;
          }
          goto LABEL_46;
        }
        return (unsigned int)-2147024809;
      }
      v34 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           136LL);
      v8 = v34;
      if ( !v34 )
      {
LABEL_46:
        v8 = 0LL;
        goto LABEL_9;
      }
      CSlideOut::CSlideOut(v34);
      v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v10 = &CSlideOutLong::`vftable'{for `CBaseObject'};
    }
    else
    {
      v36 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             128LL);
      v8 = v36;
      if ( !v36 )
        goto LABEL_46;
      memset_0(v36, 0, 0x80uLL);
      CSlideIn::CSlideIn(v8);
      v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v10 = &CSlideInLong::`vftable'{for `CBaseObject'};
    }
LABEL_35:
    *((_BYTE *)v8 + 68) = 1;
    goto LABEL_8;
  }
  if ( a1 <= 78 )
  {
    if ( a1 == 78 )
    {
      v63 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             128LL);
      v8 = v63;
      if ( !v63 )
        goto LABEL_46;
      memset_0(v63, 0, 0x80uLL);
      CSlideIn::CSlideIn(v8);
      v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v10 = &CDialogSwitch::`vftable'{for `CBaseObject'};
      goto LABEL_35;
    }
    v48 = a1 - 67;
    if ( v48 )
    {
      v49 = v48 - 1;
      if ( v49 )
      {
        v50 = v49 - 1;
        if ( v50 )
        {
          v51 = v50 - 1;
          if ( !v51 )
          {
            v59 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                                   WPF::g_pProcessHeap,
                                   120LL);
            v8 = v59;
            if ( v59 )
            {
              memset_0(v59, 0, 0x78uLL);
              CFade::CFade(v8);
              v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              v10 = &CChangePanel::`vftable'{for `CBaseObject'};
              goto LABEL_8;
            }
            goto LABEL_46;
          }
          v52 = v51 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( v53 )
            {
              v54 = v53 - 3;
              if ( v54 )
              {
                if ( v54 != 2 )
                  return (unsigned int)-2147024809;
                v55 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       120LL);
                v8 = v55;
                if ( v55 )
                {
                  CStoryboard::CStoryboard(v55, 0);
                  v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                  v10 = &CInplaceResize::`vftable'{for `CBaseObject'};
                  goto LABEL_8;
                }
              }
              else
              {
                v56 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       120LL);
                v8 = v56;
                if ( v56 )
                {
                  memset_0(v56, 0, 0x78uLL);
                  CCrossFade::CCrossFade(v8);
                  v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                  v10 = &CSSCrossFade::`vftable'{for `CBaseObject'};
                  goto LABEL_8;
                }
              }
              goto LABEL_46;
            }
            v57 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       152LL);
            v8 = v57;
            if ( !v57 )
              goto LABEL_46;
            CPanelAnimation::CPanelAnimation(v57);
            v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v10 = &CShrinkPanel::`vftable'{for `CBaseObject'};
          }
          else
          {
            v58 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       152LL);
            v8 = v58;
            if ( !v58 )
              goto LABEL_46;
            CPanelAnimation::CPanelAnimation(v58);
            v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v10 = &CGrowPanel::`vftable'{for `CBaseObject'};
          }
          *((_BYTE *)v8 + 128) = 0;
          *(_QWORD *)((char *)v8 + 132) = 0LL;
          *(_QWORD *)((char *)v8 + 140) = 0LL;
          goto LABEL_8;
        }
        v60 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                               WPF::g_pProcessHeap,
                               128LL);
        v8 = v60;
        if ( !v60 )
          goto LABEL_46;
        CStoryboard::CStoryboard(v60, 0);
        v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
        v10 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
LABEL_97:
        *((_BYTE *)v8 + 120) = 0;
        goto LABEL_8;
      }
      v61 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      v8 = v61;
      if ( !v61 )
        goto LABEL_46;
      CAppArrangementBase::CAppArrangementBase(v61, 1);
      v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v10 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
    }
    else
    {
      v62 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     192LL);
      v8 = v62;
      if ( !v62 )
        goto LABEL_46;
      CAppArrangementBase::CAppArrangementBase(v62, 0);
      v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v10 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
    }
    *((_QWORD *)v8 + 23) = 0LL;
    goto LABEL_8;
  }
  v24 = a1 - 81;
  if ( !v24 )
  {
    v72 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
    v8 = v72;
    if ( v72 )
    {
      memset_0(v72, 0, 0x78uLL);
      CFadeOut::CFadeOut(v8);
      v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v10 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
      goto LABEL_8;
    }
    goto LABEL_46;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    v33 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           128LL);
    v8 = v33;
    if ( !v33 )
      goto LABEL_46;
    memset_0(v33, 0, 0x80uLL);
    CSlideIn::CSlideIn(v8);
    v9 = &CSlide::`vftable'{for `IAnimationListener'};
    v10 = &CSlideInCharm::`vftable'{for `CBaseObject'};
    goto LABEL_35;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    v27 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         136LL);
    v8 = v27;
    if ( !v27 )
      goto LABEL_46;
    CSlideOut::CSlideOut(v27);
    v9 = &CSlide::`vftable'{for `IAnimationListener'};
    v10 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
    goto LABEL_35;
  }
  v64 = v26 - 7;
  if ( !v64 )
  {
    v71 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     184LL);
    if ( !v71 )
      goto LABEL_46;
    v29 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v71);
    goto LABEL_38;
  }
  v65 = v64 - 1;
  if ( !v65 )
  {
    v70 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           128LL);
    v8 = v70;
    if ( !v70 )
      goto LABEL_46;
    CStoryboard::CStoryboard(v70, 0);
    v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
    v10 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
    goto LABEL_97;
  }
  v66 = v65 - 1;
  if ( v66 )
  {
    if ( v66 != 1 )
      return (unsigned int)-2147024809;
    v67 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           120LL);
    v8 = v67;
    if ( v67 )
    {
      CStoryboard::CStoryboard(v67, 0);
      v9 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v10 = &CTabSwitch::`vftable'{for `CBaseObject'};
      goto LABEL_8;
    }
    goto LABEL_46;
  }
  v68 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         128LL);
  v8 = v68;
  if ( !v68 )
    goto LABEL_46;
  CStoryboard::CStoryboard(v68, 0);
  *(_BYTE *)(v69 + 120) = 1;
  *(_QWORD *)v69 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v69 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
LABEL_9:
  *a3 = v8;
  if ( !v8 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x18A3u);
LABEL_120:
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return (unsigned int)v12;
  }
  v11 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)v8 + 8LL))(v8);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x18A5u);
  }
  else if ( a2 )
  {
    CStoryboard::SetParentStoryboard(*a3, a2);
  }
  if ( v12 < 0 )
    goto LABEL_120;
  return (unsigned int)v12;
}
