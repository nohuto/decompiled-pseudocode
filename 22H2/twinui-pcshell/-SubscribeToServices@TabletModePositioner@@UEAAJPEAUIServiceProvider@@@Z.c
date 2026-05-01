/*
 * XREFs of ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18046E170
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180022A98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800974E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800D5348 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800D6ED0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::SubscribeToServices(TabletModePositioner *this, struct IServiceProvider *a2)
{
  char *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r15
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v10; // rax
  char *v11; // r14
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-59h] BYREF
  __int64 v23; // [rsp+38h] [rbp-51h] BYREF
  int v24; // [rsp+40h] [rbp-49h] BYREF
  __int64 v25; // [rsp+48h] [rbp-41h] BYREF
  __int64 v26; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v27[3]; // [rsp+58h] [rbp-31h] BYREF
  char *v28; // [rsp+70h] [rbp-19h]
  __int128 v29; // [rsp+80h] [rbp-9h] BYREF
  __int128 v30; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v26 = 0LL;
  v25 = 0LL;
  v4 = (char *)this + 312;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 351LL;
LABEL_72:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_74;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
         &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
         (char *)this + 320);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 352LL;
    goto LABEL_72;
  }
  v8 = (_QWORD *)((char *)this + 328);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (char *)this + 328);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 353LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         (char *)this + 336);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 354LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
         &GUID_2010122c_468a_480f_8cd1_b85e76f5882e,
         (char *)this + 344);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 355LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_VirtualDesktopManager,
         &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
         (char *)this + 352);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 356LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
         &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
         (char *)this + 360);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 357LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &unk_180564490,
         &GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714,
         (char *)this + 368);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 358LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 359LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         (char *)this + 376);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 360LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_MultitaskingViewVisibilityService,
         &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
         (char *)this + 384);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 361LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_ShellTargetingTracker,
         &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
         &v25);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 362LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         (char *)this + 392);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 363LL;
    goto LABEL_72;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 52);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         (char *)this + 416);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 364LL;
    goto LABEL_72;
  }
  if ( IsSurfaceHubWithWin32VtcEnabled() )
  {
    lpVtbl = a2->lpVtbl;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)this + 54);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
           a2,
           &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
           &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
           v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 368LL;
      goto LABEL_72;
    }
  }
  v11 = (char *)this - 24;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 40) + 24LL))(
         *((_QWORD *)this + 40),
         ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64),
         (char *)this + 468);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 371LL;
    goto LABEL_72;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v8 + 72LL))(
         *v8,
         ((unsigned __int64)this + 120) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
         (char *)this + 472);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 373LL;
    goto LABEL_72;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v8 + 24LL))(*v8, (char *)this + 212);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 51);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_TransitionCoordinator,
         &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
         (char *)this + 408);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 376LL;
    goto LABEL_72;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 51) + 24LL))(
         *((_QWORD *)this + 51),
         ((unsigned __int64)this + 176) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
         (char *)this + 492);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 377LL;
    goto LABEL_72;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
         *((_QWORD *)this + 47),
         &unk_180564478,
         1LL,
         ((unsigned __int64)this + 144) & -(__int64)(this != (TabletModePositioner *)24),
         (char *)this + 480);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 383LL;
    goto LABEL_72;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 48) + 32LL))(
         *((_QWORD *)this + 48),
         ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
         (char *)this + 484);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 384LL;
    goto LABEL_72;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v25 + 24LL))(
         v25,
         ((unsigned __int64)this + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
         (char *)this + 488);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 385LL;
    goto LABEL_72;
  }
  v27[0] = *((_QWORD *)this + 39);
  v27[1] = *v8;
  v27[2] = *((_QWORD *)this + 43);
  if ( this == (TabletModePositioner *)24 )
    v28 = 0LL;
  else
    v28 = (char *)this + 64;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 35) + 24LL))(*((_QWORD *)this + 35), v27);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 394LL;
    goto LABEL_72;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u,
    v12);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
    0,
    v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         (char *)this + 424);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 405LL;
    goto LABEL_72;
  }
  if ( !*((_QWORD *)this + 53) )
    goto LABEL_70;
  v23 = 0LL;
  v14 = *((_QWORD *)this + 53);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, 2LL, &v23);
  v6 = v15;
  if ( v15 >= 0 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    if ( ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v22) >= 0 )
    {
      v24 = 0;
      v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 48LL))(v22, &v24);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1A3,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v16);
      if ( v24 )
      {
        v30 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v22 + 88LL))(v22, &v30);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1A8,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v17);
        v29 = v30;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)v23 + 56LL))(
                v23,
                v22,
                &v29,
                1LL);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1A9,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v18);
      }
    }
    v19 = 3LL;
    if ( *((_DWORD *)this + 53) != 1 )
      v19 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 40LL))(v23, v19);
    v6 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B2,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_68;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v23);
LABEL_70:
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v26 + 24LL))(
           v26,
           ((unsigned __int64)this + 128) & -(__int64)(this != (TabletModePositioner *)24),
           (char *)this + 476);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_74;
    }
    v7 = 439LL;
    goto LABEL_72;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19B,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v15);
LABEL_68:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v23);
LABEL_74:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v25);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v26);
  return v6;
}
