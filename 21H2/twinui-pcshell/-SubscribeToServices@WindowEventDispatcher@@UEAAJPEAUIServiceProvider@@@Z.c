/*
 * XREFs of ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803289C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180097500 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18028649C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x18030F6F8 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1803389E4 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBEA8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBF1C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowEventDispatcher::SubscribeToServices(WindowEventDispatcher *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v5; // rbx
  int v6; // ebx
  __int64 v7; // r8
  CCriticalFailureHandler *v8; // rcx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v10; // eax
  CCriticalFailureHandler *v11; // rcx
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v13; // rcx
  int v14; // eax
  CCriticalFailureHandler *v15; // rcx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v17; // rcx
  int v18; // eax
  CCriticalFailureHandler *v19; // rcx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v21; // rcx
  int v22; // ebx
  const char *v23; // r9
  __int64 result; // rax
  CCriticalFailureHandler *v25; // rcx
  int v26; // ebx
  HRESULT (__stdcall *v27)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v28; // eax
  CCriticalFailureHandler *v29; // rcx
  int v30; // eax
  CCriticalFailureHandler *v31; // rcx
  __int64 *v32; // rax
  ConnectedStandbyHelper **v33; // rbx
  const char *v34; // r9
  CCriticalFailureHandler *v35; // rcx
  int v36; // ebx
  unsigned __int64 *v37; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v38; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v39; // [rsp+28h] [rbp-60h]
  int v40; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v41; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-48h] BYREF
  __int64 v44; // [rsp+48h] [rbp-40h] BYREF
  __int64 v45; // [rsp+50h] [rbp-38h] BYREF
  std::_Ref_count_base *v46; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v48; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v49; // [rsp+A8h] [rbp+20h] BYREF

  try
  {
    QueryService = a2->lpVtbl->QueryService;
    v5 = (char *)this + 192;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 24);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
           a2,
           &SID_ProcessLifetimeManagerControl,
           &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
           v5);
    v48 = v6;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
      0,
      v7);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v8, (int *)&v48);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v6 = v48;
    }
    if ( v6 < 0 && v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v8,
        (int *)&v48,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x5Du,
        v37,
        v39);
      v6 = v48;
    }
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        94LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
    v9 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 25);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
            a2,
            &CLSID_ImmersivePlaybackManager,
            &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
            (char *)this + 200);
    v48 = v10;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v11, (int *)&v48);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v10 = v48;
    }
    if ( v10 < 0 && v10 != -2147024882 && v10 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        (int *)&v48,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x65u,
        v37,
        v39);
      v10 = v48;
    }
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        102LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v10);
    v12 = a2->lpVtbl->QueryService;
    v13 = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v12)(
            a2,
            &SID_VirtualDesktopManager,
            &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
            (char *)this + 208);
    v48 = v14;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v15, (int *)&v48);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v14 = v48;
    }
    if ( v14 < 0 && v14 != -2147024882 && v14 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v15,
        (int *)&v48,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x6Cu,
        v37,
        v39);
      v14 = v48;
    }
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        109LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    v16 = a2->lpVtbl->QueryService;
    v17 = *((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
            a2,
            &IID_IApplicationPositionPersistence,
            &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
            (char *)this + 216);
    v48 = v18;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v48);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v18 = v48;
    }
    if ( v18 < 0 && v18 != -2147024882 && v18 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v19,
        (int *)&v48,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x72u,
        v37,
        v39);
      v18 = v48;
    }
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        115LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v18);
    v43 = 0LL;
    v20 = a2->lpVtbl->QueryService;
    v43 = 0LL;
    v22 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v20)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            &v43);
    v49 = v22;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_50:
      if ( v22 < 0 )
      {
        if ( v22 != -2147024882 && v22 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v21,
            (int *)&v49,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x78u,
            v37,
            v39);
          v22 = v49;
        }
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x78,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v22);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
          return (unsigned int)v22;
        }
      }
      v26 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v43 + 32LL))(
              v43,
              ((unsigned __int64)this + 72) & -(__int64)(this != (WindowEventDispatcher *)128),
              (char *)this + 340);
      v40 = v26;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_68:
        if ( v26 < 0 )
        {
          if ( v26 != -2147024882 && v26 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v25,
              &v40,
              L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              0x7Au,
              v37,
              v39);
            v26 = v40;
          }
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7A,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v26);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
            return (unsigned int)v26;
          }
        }
        v44 = 0LL;
        v27 = a2->lpVtbl->QueryService;
        v44 = 0LL;
        v28 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v27)(
                a2,
                &SID_ImmersiveShellHookService,
                &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                &v44);
        v48 = v28;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v29, (int *)&v48);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v28 = v48;
        }
        if ( v28 < 0 && v28 != -2147024882 && v28 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v29,
            (int *)&v48,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x85u,
            v37,
            v39);
          v28 = v48;
        }
        if ( v28 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            134LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v28);
        v38 = (unsigned __int64 *)((char *)this + 336);
        v30 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v44 + 24LL))(
                v44,
                &unk_1805B3030,
                11LL,
                ((unsigned __int64)this - 48) & -(__int64)(this != (WindowEventDispatcher *)128));
        v48 = v30;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v31, (int *)&v48);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v30 = v48;
        }
        if ( v30 < 0 && v30 != -2147024882 && v30 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v31,
            (int *)&v48,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x9Eu,
            v38,
            v39);
          v30 = v48;
        }
        if ( v30 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            159LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v30);
        try
        {
          v32 = std::make_shared<ConnectedStandbyHelper,>(&v45);
          v33 = (ConnectedStandbyHelper **)((char *)this + 224);
          std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 28, v32);
          if ( v46 )
            std::_Ref_count_base::_Decref(v46);
        }
        catch ( ... )
        {
          v42 = wil::details::in1diag3::Return_CaughtException(
                  retaddr,
                  (void *)0xA5,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  v34);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
          return v42;
        }
        v36 = ConnectedStandbyHelper::Initialize(
                *v33,
                (struct IWindowDispatcherConnectedStandby *)(((unsigned __int64)this - 88) & -(__int64)(this != (WindowEventDispatcher *)128)));
        v41 = v36;
        if ( CRVPrivate::cfhImmersiveShellStartup )
          goto LABEL_104;
        if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v48) >= 0 )
        {
          switch ( v48 )
          {
            case 2u:
              v36 = -2023406815;
              goto LABEL_102;
            case 3u:
              v36 = -2023406814;
              goto LABEL_102;
            case 4u:
              v36 = -2147418094;
              goto LABEL_102;
            case 5u:
              v36 = -2147022986;
LABEL_102:
              v41 = v36;
              break;
          }
        }
        CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_104:
        if ( v36 >= 0 )
          goto LABEL_110;
        if ( v36 != -2147024882 && v36 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v35,
            (int *)&v41,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0xA6u,
            v38,
            v39);
          v36 = v41;
        }
        if ( v36 >= 0 )
        {
LABEL_110:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA6,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v36);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
          return (unsigned int)v36;
        }
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v49) >= 0 )
      {
        switch ( v49 )
        {
          case 2u:
            v26 = -2023406815;
            goto LABEL_66;
          case 3u:
            v26 = -2023406814;
            goto LABEL_66;
          case 4u:
            v26 = -2147418094;
            goto LABEL_66;
          case 5u:
            v26 = -2147022986;
LABEL_66:
            v40 = v26;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_68;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v41) >= 0 )
    {
      switch ( v41 )
      {
        case 2u:
          v22 = -2023406815;
          goto LABEL_48;
        case 3u:
          v22 = -2023406814;
          goto LABEL_48;
        case 4u:
          v22 = -2147418094;
          goto LABEL_48;
        case 5u:
          v22 = -2147022986;
LABEL_48:
          v49 = v22;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_50;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAA,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v23);
  }
  return result;
}
