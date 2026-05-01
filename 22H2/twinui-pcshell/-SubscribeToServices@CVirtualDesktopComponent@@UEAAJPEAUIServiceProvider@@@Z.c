/*
 * XREFs of ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804A0110
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803AF2A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@.c)
 *     ?VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AEB90 (-VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePo.c)
 *     ?VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BB564 (-VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredVi.c)
 *     ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BB94C (-CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivat.c)
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BBC98 (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBB18 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBB8C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CVirtualDesktopComponent::SubscribeToServices(
        CVirtualDesktopComponent *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v5; // rcx
  int Instance; // ebx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v8; // rcx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v10; // rcx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v12; // rcx
  __int64 v13; // rdx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v15; // rcx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v17; // rcx
  __int64 v18; // rcx
  CCriticalFailureHandler *v19; // rcx
  __int64 v20; // rdx
  CCriticalFailureHandler *v21; // rcx
  CCriticalFailureHandler *v22; // rcx
  CCriticalFailureHandler *v23; // rcx
  CCriticalFailureHandler *v24; // rcx
  CCriticalFailureHandler *v25; // rcx
  __int64 v26; // rcx
  CCriticalFailureHandler *v27; // rcx
  CCriticalFailureHandler *v28; // rcx
  __int64 v29; // rdx
  CCriticalFailureHandler *v30; // rcx
  const struct _GUID *v31; // r8
  CCriticalFailureHandler *v32; // rcx
  __int64 v33; // rdx
  CCriticalFailureHandler *v34; // rcx
  CCriticalFailureHandler *v35; // rcx
  CCriticalFailureHandler *v36; // rcx
  __int64 v37; // r8
  HRESULT (__stdcall *v38)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v39; // eax
  HRESULT (__stdcall *v40)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v41; // eax
  HRESULT (__stdcall *v42)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v43; // eax
  __int64 v44; // rdx
  const struct _GUID *v45; // r8
  CCriticalFailureHandler *v46; // rcx
  HRESULT (__stdcall *v47)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v48; // rcx
  unsigned __int64 v49; // r9
  __int64 v50; // rdx
  int v51; // eax
  unsigned __int64 *v53; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v54; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v55; // [rsp+28h] [rbp-41h]
  unsigned __int64 *v56; // [rsp+28h] [rbp-41h]
  struct IVirtualDesktopLock *v57; // [rsp+30h] [rbp-39h]
  void **v58; // [rsp+38h] [rbp-31h]
  __int64 v59; // [rsp+50h] [rbp-19h] BYREF
  void *v60; // [rsp+58h] [rbp-11h] BYREF
  struct ITabViewManager *v61; // [rsp+60h] [rbp-9h] BYREF
  __int64 v62; // [rsp+68h] [rbp-1h] BYREF
  struct IInspectable *v63; // [rsp+70h] [rbp+7h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *v64; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v65; // [rsp+80h] [rbp+17h] BYREF
  RTL_SRWLOCK *v66[7]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int64 *v68; // [rsp+D8h] [rbp+6Fh] BYREF
  void *v69; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v70; // [rsp+E8h] [rbp+7Fh] BYREF

  v59 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
  Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
               a2,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &v59);
  LODWORD(v68) = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v69) >= 0 )
  {
    switch ( (_DWORD)v69 )
    {
      case 2:
        Instance = -2023406815;
        goto LABEL_11;
      case 3:
        Instance = -2023406814;
        goto LABEL_11;
      case 4:
        Instance = -2147418094;
        goto LABEL_11;
      case 5:
        Instance = -2147022986;
LABEL_11:
        LODWORD(v68) = Instance;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_13:
  if ( Instance >= 0 )
    goto LABEL_19;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)&v68,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0xD4u,
      v53,
      v55);
    Instance = (int)v68;
  }
  if ( Instance >= 0 )
  {
LABEL_19:
    v65 = 0LL;
    v7 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v65);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v7)(
                 a2,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &v65);
    LODWORD(v68) = Instance;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_31:
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v8,
            (int *)&v68,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xD8u,
            v53,
            v55);
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD8,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_227:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v65);
          goto LABEL_228;
        }
      }
      v62 = 0LL;
      v9 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v62);
      Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v9)(
                   a2,
                   &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                   &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                   &v62);
      LODWORD(v68) = Instance;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_49:
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v10,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xDCu,
              v53,
              v55);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xDC,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_226:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v62);
            goto LABEL_227;
          }
        }
        v61 = 0LL;
        v64 = 0LL;
        v63 = 0LL;
        if ( *((_QWORD *)this + 23) )
        {
          v11 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct ITabViewManager **))v11)(
                       a2,
                       &unk_1805BE760,
                       &GUID_d1710073_c814_4a0c_9685_00e44547418f,
                       &v61);
          LODWORD(v68) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v12, (int *)&v68);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v12,
                (int *)&v68,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xE4u,
                v53,
                v55);
              Instance = (int)v68;
            }
            if ( Instance < 0 )
            {
              v13 = 228LL;
LABEL_191:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v13,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                (const char *)(unsigned int)Instance);
              goto LABEL_225;
            }
          }
          v14 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **))v14)(
                       a2,
                       &unk_1805BE740,
                       &GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8,
                       &v64);
          LODWORD(v68) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v15, (int *)&v68);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v15,
                (int *)&v68,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xE7u,
                v53,
                v55);
              Instance = (int)v68;
            }
            if ( Instance < 0 )
            {
              v13 = 231LL;
              goto LABEL_191;
            }
          }
          v16 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct IInspectable **))v16)(
                       a2,
                       &unk_1805BE750,
                       &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                       &v63);
          LODWORD(v68) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v17, (int *)&v68);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v17,
                (int *)&v68,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xEAu,
                v53,
                v55);
              Instance = (int)v68;
            }
            if ( Instance < 0 )
            {
              v13 = 234LL;
              goto LABEL_191;
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), v66);
        v18 = *((_QWORD *)this + 23);
        if ( v18 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, struct ITabViewManager *))(*(_QWORD *)v18 + 32LL))(v18, v61);
          LODWORD(v68) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v68);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v19,
                (int *)&v68,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xF1u,
                v53,
                v55);
              Instance = (int)v68;
            }
            if ( Instance < 0 )
            {
              v20 = 241LL;
LABEL_138:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v20,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                (const char *)(unsigned int)Instance);
LABEL_174:
              Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v66);
LABEL_225:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
              goto LABEL_226;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
          Instance = VirtualDesktopGroupedViewsEventListener_CreateInstance(
                       v61,
                       v64,
                       v63,
                       *((struct IVirtualDesktopManagerPrivate **)this + 15),
                       *((struct IVirtualDesktopPinnedAppsPrivate **)this + 20),
                       *((struct IVirtualDesktopGroupedViewsPolicy **)this + 25),
                       *((struct IVirtualDesktopLock **)this + 13),
                       (const struct _GUID *)v58,
                       (void **)this + 24);
          LODWORD(v68) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v21, (int *)&v68);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v21,
                (int *)&v68,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xFAu,
                v53,
                v55);
              Instance = (int)v68;
            }
            if ( Instance < 0 )
            {
              v20 = 250LL;
              goto LABEL_138;
            }
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 152LL))(
                     *((_QWORD *)this + 15),
                     v59);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v22, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v22,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFCu,
              v53,
              v55);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v20 = 252LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 48LL))(
                     *((_QWORD *)this + 14),
                     v59);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v23, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v23,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFDu,
              v53,
              v55);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v20 = 253LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 24LL))(
                     *((_QWORD *)this + 18),
                     v59);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v24, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v24,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFEu,
              v53,
              v55);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v20 = 254LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 24LL))(
                     *((_QWORD *)this + 17),
                     v59);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v25, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v25,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFFu,
              v53,
              v55);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v20 = 255LL;
            goto LABEL_138;
          }
        }
        v26 = *((_QWORD *)this + 20);
        if ( v26 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 72LL))(v26, v59);
          LODWORD(v68) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v27, (int *)&v68);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v27,
                (int *)&v68,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0x103u,
                v53,
                v55);
              Instance = (int)v68;
            }
            if ( Instance < 0 )
            {
              v20 = 259LL;
              goto LABEL_138;
            }
          }
        }
        v60 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
        Instance = CVirtualDesktopApplicationViewEventListener_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopSwitchAnimator **)this + 16),
                     *((struct IVirtualDesktopForegroundPolicy **)this + 14),
                     *((struct IVirtualDesktopWindowMoveManager **)this + 17),
                     *((struct IVirtualDesktopPinnedAppsPrivate **)this + 20),
                     *((struct IVirtualDesktopLock **)this + 13),
                     (const struct _GUID *)v57,
                     &v60);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v28, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v28,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x10Eu,
              v54,
              v56);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v29 = 270LL;
LABEL_155:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v29,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_173:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
            goto LABEL_174;
          }
        }
        Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v65 + 24LL))(
                     v65,
                     v60,
                     (char *)this + 208);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v30, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v30,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x111u,
              v54,
              v56);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v29 = 273LL;
            goto LABEL_155;
          }
        }
        v69 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
        Instance = VirtualDesktopTabletModeNotificationListener_CreateInstance(
                     *((struct IVirtualDesktopTabletModePolicy **)this + 19),
                     a2,
                     v31,
                     &v69);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v32, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v32,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x117u,
              v54,
              v56);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v33 = 279LL;
LABEL_172:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v33,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
            goto LABEL_173;
          }
        }
        Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v62 + 72LL))(
                     v62,
                     v69,
                     (char *)this + 212);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v34, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v34,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x119u,
              v54,
              v56);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v33 = 281LL;
            goto LABEL_172;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v66);
        Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v62 + 24LL))(v62, &v70);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v35, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v35,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x11Eu,
              v54,
              v56);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v13 = 286LL;
            goto LABEL_191;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 19) + 32LL))(
                     *((_QWORD *)this + 19),
                     v70,
                     0LL);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v36, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v36,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x11Fu,
              v54,
              v56);
            Instance = (int)v68;
          }
          if ( Instance < 0 )
          {
            v13 = 287LL;
            goto LABEL_191;
          }
        }
        if ( *((_QWORD *)this + 21) )
        {
          v60 = 0LL;
          v38 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
          v39 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, void **))v38)(
                  a2,
                  &unk_1805BE730,
                  &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                  &v60);
          Instance = v39;
          if ( v39 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x124,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v39);
LABEL_203:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
            goto LABEL_225;
          }
          v69 = 0LL;
          v40 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
          v41 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, void **))v40)(
                  a2,
                  &unk_1805BE720,
                  &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
                  &v69);
          Instance = v41;
          if ( v41 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x127,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v41);
LABEL_202:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
            goto LABEL_203;
          }
          v68 = 0LL;
          v42 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v68);
          v43 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, unsigned __int64 **))v42)(
                  a2,
                  &SID_IImmersiveMonitorService,
                  &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                  &v68);
          Instance = v43;
          if ( v43 < 0 )
          {
            v44 = 298LL;
LABEL_201:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v44,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v43);
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v68);
            goto LABEL_202;
          }
          v54 = v68;
          v43 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, void *))(**((_QWORD **)this + 21) + 24LL))(
                  *((_QWORD *)this + 21),
                  v60,
                  v59,
                  v69);
          Instance = v43;
          if ( v43 < 0 )
          {
            v44 = 300LL;
            goto LABEL_201;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v68);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
        }
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::GetImpl'::`2'::impl,
          1u,
          v37);
        v60 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
        Instance = CVirtualDesktopHolographicViewTransitionNotification_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopLock **)this + 13),
                     v45,
                     &v60);
        LODWORD(v68) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v46, (int *)&v68);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v68;
        }
        if ( Instance >= 0 )
          goto LABEL_213;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v46,
            (int *)&v68,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x135u,
            v54,
            v56);
          Instance = (int)v68;
        }
        if ( Instance >= 0 )
        {
LABEL_213:
          v69 = 0LL;
          v47 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, void **))v47)(
                       a2,
                       &GUID_5090de35_ed23_43be_9714_586c5041026a,
                       &GUID_5090de35_ed23_43be_9714_586c5041026a,
                       &v69);
          LODWORD(v68) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v48, (int *)&v68);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v68;
          }
          if ( Instance >= 0 )
            goto LABEL_221;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v48,
              (int *)&v68,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x139u,
              v54,
              v56);
            Instance = (int)v68;
          }
          if ( Instance >= 0 )
          {
LABEL_221:
            v51 = (*(__int64 (__fastcall **)(void *, void *, char *))(*(_QWORD *)v69 + 24LL))(
                    v69,
                    v60,
                    (char *)this + 216);
            Instance = v51;
            if ( v51 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
              Instance = 0;
              goto LABEL_225;
            }
            v49 = (unsigned int)v51;
            v50 = 314LL;
          }
          else
          {
            v49 = (unsigned int)Instance;
            v50 = 313LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v50,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)v49);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x135,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
        }
        goto LABEL_203;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v69) >= 0 )
      {
        switch ( (_DWORD)v69 )
        {
          case 2:
            Instance = -2023406815;
            goto LABEL_47;
          case 3:
            Instance = -2023406814;
            goto LABEL_47;
          case 4:
            Instance = -2147418094;
            goto LABEL_47;
          case 5:
            Instance = -2147022986;
LABEL_47:
            LODWORD(v68) = Instance;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_49;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v69) >= 0 )
    {
      switch ( (_DWORD)v69 )
      {
        case 2:
          Instance = -2023406815;
          goto LABEL_29;
        case 3:
          Instance = -2023406814;
          goto LABEL_29;
        case 4:
          Instance = -2147418094;
          goto LABEL_29;
        case 5:
          Instance = -2147022986;
LABEL_29:
          LODWORD(v68) = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
    (const char *)(unsigned int)Instance);
LABEL_228:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
  return (unsigned int)Instance;
}
