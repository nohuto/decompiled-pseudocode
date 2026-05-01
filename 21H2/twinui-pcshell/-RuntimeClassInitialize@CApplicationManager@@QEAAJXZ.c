/*
 * XREFs of ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1801C0450
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801B3D8C (--$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x1800910E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180091150 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0CIAMGlobals@@QEAA@XZ @ 0x1801B6700 (--0CIAMGlobals@@QEAA@XZ.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801BD1B4 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801BF384 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1801C7D34 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x1801CC8C4 (--$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Micros.c)
 *     ?InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18029A674 (-InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1804DBEA8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBF1C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RuntimeClassInitialize(CApplicationManager *this)
{
  CIAMGlobals *v2; // rax
  CCriticalFailureHandler *v3; // rcx
  RTL_SRWLOCK *v4; // rax
  signed int inited; // ebx
  HWND v6; // rsi
  CIAMGlobals *v7; // rax
  unsigned __int64 *v9; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-28h]
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+40h] [rbp-10h]
  CIAMGlobals *v13; // [rsp+98h] [rbp+48h] BYREF
  _QWORD *v14; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (CIAMGlobals *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v2;
  if ( v2 )
    v4 = (RTL_SRWLOCK *)CIAMGlobals::CIAMGlobals(v2);
  else
    v4 = 0LL;
  CApplicationManagerUtility::g_pIAMGlobals = v4;
  inited = v4 == 0LL ? 0x8007000E : 0;
  LODWORD(v13) = inited;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v13);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v13;
  }
  if ( inited >= 0 )
    goto LABEL_11;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v13,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x12F0u,
      v9,
      v10);
    inited = (int)v13;
  }
  if ( inited >= 0 )
  {
LABEL_11:
    inited = InitializePrivilegedOperationsForIam((struct IPrivilegedOperationsConsumer *)(((unsigned __int64)this + 320) & -(__int64)(this != 0LL)));
    LODWORD(v13) = inited;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      inited = (int)v13;
    }
    if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        (int *)&v13,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x12F3u,
        v9,
        v10);
      inited = (int)v13;
    }
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v13);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v13;
  }
  if ( inited >= 0 )
    goto LABEL_24;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v13,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x12F6u,
      v9,
      v10);
    inited = (int)v13;
  }
  if ( inited >= 0 )
  {
LABEL_24:
    inited = CObjectWithThreadUseDetection::InitApartmentId((CApplicationManager *)((char *)this + 392));
    LODWORD(v13) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v13);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v13;
  }
  if ( inited >= 0 )
    goto LABEL_32;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v13,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x12FEu,
      v9,
      v10);
    inited = (int)v13;
  }
  if ( inited >= 0 )
  {
LABEL_32:
    v11[0] = L"ApplicationManager_DesktopShellWindow";
    v11[1] = ((unsigned __int64)this + 200) & -(__int64)(this != 0LL);
    v12 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 94);
    v14 = v11;
    *((_QWORD *)this + 94) = 0LL;
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    inited = Microsoft::WRL::Details::MakeAndInitialize<CIAMSpecialWindow,CIAMSpecialWindow,SPECIAL_WINDOW_INIT_DATA const * const &>(
               &v13,
               &v14);
    if ( inited >= 0 )
      inited = (**(__int64 (__fastcall ***)(CIAMGlobals *, GUID *, char *))v13)(
                 v13,
                 &GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee,
                 (char *)this + 752);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    LODWORD(v13) = inited;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      inited = (int)v13;
    }
    if ( inited >= 0 )
      goto LABEL_41;
    if ( inited != -2147024882 && inited != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        (int *)&v13,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x130Du,
        v9,
        v10);
      inited = (int)v13;
    }
    if ( inited >= 0 )
    {
LABEL_41:
      v6 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94));
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
        v6,
        1LL);
      v7 = (CIAMGlobals *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v13 = v7;
      if ( v7 )
      {
        *(_DWORD *)v7 = 1;
        *((_QWORD *)v7 + 1) = 0LL;
        *((_QWORD *)v7 + 2) = v6;
        *((_QWORD *)v7 + 3) = 0LL;
        *((_QWORD *)v7 + 4) = 0LL;
        *((_QWORD *)v7 + 5) = 0LL;
        *((_QWORD *)v7 + 6) = 0LL;
        *((_DWORD *)v7 + 14) = 0;
      }
      else
      {
        v7 = 0LL;
      }
      *((_QWORD *)this + 100) = v7;
      inited = v7 == 0LL ? 0x8007000E : 0;
      LODWORD(v13) = inited;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v13);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        inited = (int)v13;
      }
      if ( inited >= 0 )
        goto LABEL_51;
      if ( inited != -2147024882 && inited != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v3,
          (int *)&v13,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1316u,
          v9,
          v10);
        inited = (int)v13;
      }
      if ( inited >= 0 )
      {
LABEL_51:
        CApplicationManager::_uMsgWindowServiceRegister = RegisterWindowMessageW(L"WindowServiceRegistered");
        if ( CApplicationManager::_uMsgWindowServiceRegister )
        {
          CApplicationManager::_uMsgWindowServiceUnregister = RegisterWindowMessageW(L"WindowServiceUnregistered");
          if ( CApplicationManager::_uMsgWindowServiceUnregister )
          {
            ChangeWindowMessageFilterEx(v6, CApplicationManager::_uMsgWindowServiceRegister, 1u, 0LL);
            ChangeWindowMessageFilterEx(v6, CApplicationManager::_uMsgWindowServiceUnregister, 1u, 0LL);
          }
        }
        SetPropW(v6, L"AllowConsentToStealFocus", HANDLE_FLAG_INHERIT);
      }
    }
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v13);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v13;
  }
  if ( inited >= 0 )
    goto LABEL_62;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v13,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1336u,
      v9,
      v10);
    inited = (int)v13;
  }
  if ( inited >= 0 )
  {
LABEL_62:
    inited = CApplicationManager::_InitializeIAMSubcomponents((IUnknown *)this);
    LODWORD(v13) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v13);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v13;
  }
  if ( inited >= 0 )
    goto LABEL_83;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v13,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x133Cu,
      v9,
      v10);
    inited = (int)v13;
  }
  if ( inited >= 0 )
  {
LABEL_83:
    if ( dword_18065337C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_18065337C);
      if ( dword_18065337C == -1 )
      {
        xmmword_180652490 = IID_IImmersiveApplicationManager;
        xmmword_1806524A0 = 0LL;
        xmmword_1806524B0 = *(_OWORD *)&SID_ImmersiveApplicationArrayService.Revision;
        xmmword_1806524C0 = 0LL;
        xmmword_1806524D0 = (__int128)IID_IImmersiveApplicationNotificationService;
        xmmword_1806524E0 = 0LL;
        xmmword_1806524F0 = (__int128)IID_IRequestTrustedComponentForegroundControlInitialization;
        xmmword_180652500 = 0LL;
        xmmword_180652510 = (__int128)IID_IImmersiveApplicationVisibilityOverride;
        xmmword_180652520 = 0LL;
        xmmword_180652530 = (__int128)IID_IAppSwitchingTestability;
        xmmword_180652540 = 0LL;
        xmmword_180652550 = xmmword_1805A6958;
        xmmword_180652560 = 0LL;
        xmmword_180652570 = xmmword_1805A6948;
        xmmword_180652580 = 0LL;
        xmmword_180652590 = xmmword_1805A6938;
        xmmword_1806525A0 = 0LL;
        xmmword_1806525B0 = (__int128)IID_IClassicWindowManager;
        qword_1806525C0 = *((_QWORD *)this + 67);
        qword_1806525C8 = 0LL;
        xmmword_1806525D0 = (__int128)IID_IImmersiveSystemMode;
        qword_1806525E0 = *((_QWORD *)this + 66);
        qword_1806525E8 = 0LL;
        xmmword_1806525F0 = (__int128)IID_IActiveZBand;
        qword_180652600 = *((_QWORD *)this + 66);
        qword_180652608 = 0LL;
        xmmword_180652610 = *(_OWORD *)&SID_GlobalDesktopVisibilityService.Revision;
        qword_180652620 = *((_QWORD *)this + 66);
        qword_180652628 = 0LL;
        xmmword_180652630 = (__int128)IID_IImmersiveCharmsWindowManager;
        qword_180652640 = *((_QWORD *)this + 74);
        qword_180652648 = 0LL;
        xmmword_180652650 = (__int128)IID_IAppViewManager;
        qword_180652660 = *((_QWORD *)this + 75);
        qword_180652668 = 0LL;
        xmmword_180652670 = (__int128)GUID_4b2a4af0_50dc_4266_b0ae_1d4013d069b7;
        qword_180652680 = *((_QWORD *)this + 75);
        qword_180652688 = 0LL;
        xmmword_180652690 = (__int128)IID_IRealmActivationHistory;
        qword_1806526A0 = *((_QWORD *)this + 65);
        qword_1806526A8 = 0LL;
        xmmword_1806526B0 = (__int128)GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e;
        qword_1806526C0 = *((_QWORD *)this + 77);
        qword_1806526C8 = 0LL;
        xmmword_1806526D0 = (__int128)GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425;
        qword_1806526E0 = *((_QWORD *)this + 68);
        qword_1806526E8 = 0LL;
        Init_thread_footer(&dword_18065337C);
      }
    }
    inited = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationManager *)((char *)this + 88),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_180652490,
               19LL);
    LODWORD(v13) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v13);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v13;
  }
  if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v13,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1359u,
      v9,
      v10);
    return (unsigned int)v13;
  }
  return (unsigned int)inited;
}
