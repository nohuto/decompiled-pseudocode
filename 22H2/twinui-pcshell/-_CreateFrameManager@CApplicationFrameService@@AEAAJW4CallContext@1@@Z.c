/*
 * XREFs of ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1801E6AEC
 * Callers:
 *     _lambda_86e5fad454e1f42def22d3aa1faf1060_::operator() @ 0x180097F8C (_lambda_86e5fad454e1f42def22d3aa1faf1060_--operator().c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800300EC (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x1800585A8 (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007F418 (--4-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___ @ 0x1801E3990 (CCrashDetector--TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801E3BE0 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_1801E3BE0.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801E3E18 (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1801E52C8 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ @ 0x1801E5B90 (-StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E6008 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x1801E6A04 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804DBB8C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::_CreateFrameManager(__int64 a1, int a2)
{
  char *v4; // rdi
  int Instance; // ebx
  CCriticalFailureHandler *v6; // rcx
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  HANDLE v9; // rdx
  CCriticalFailureHandler *v10; // rcx
  unsigned __int64 *ppv; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *ppva; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *ppvb; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *ppvc; // [rsp+28h] [rbp-E0h]
  const char *v16; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v17; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v18; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v19; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v20; // [rsp+30h] [rbp-D8h]
  int v21[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct IUnknown *v22; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v26[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v27[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v28[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"AppFrameHostStartup");
  v28[0] = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  CAppManagerTelemetry::AppFrameHostStartup::StartActivity((CAppManagerTelemetry::AppFrameHostStartup *)v28);
  CCrashDetector::StopMonitoring((CCrashDetector *)(a1 + 200));
  v21[1] = 0;
  v22 = 0LL;
  v4 = 0LL;
  hObject = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v22);
  Instance = CoCreateInstance(
               &GUID_b9b05098_3e30_483f_87f7_027ca78da287,
               0LL,
               0x404u,
               &GUID_d6defab3_dbb9_4413_8af9_554586fdff94,
               (LPVOID *)&v22);
  v21[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    1280LL,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to connect to the application frame host server",
    v16);
  if ( a2 )
    goto LABEL_18;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v24) >= 0 )
    {
      switch ( v24 )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_12;
        case 3u:
          Instance = -2023406814;
          goto LABEL_12;
        case 4u:
          Instance = -2147418094;
          goto LABEL_12;
        case 5u:
          Instance = -2147022986;
LABEL_12:
          v21[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_19;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v6,
      v21,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x501u,
      ppv,
      v17);
    Instance = v21[0];
  }
LABEL_18:
  if ( Instance < 0 )
    goto LABEL_75;
LABEL_19:
  Instance = ((__int64 (__fastcall *)(struct IUnknown *, __int64, int *))v22->lpVtbl[2].QueryInterface)(
               v22,
               (a1 + 48) & -(__int64)(a1 != 0),
               &v21[1]);
  v21[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    1288LL,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to register for application frame events",
    (const char *)v17);
  if ( a2 )
    goto LABEL_36;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v25) >= 0 )
    {
      switch ( v25 )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_30;
        case 3u:
          Instance = -2023406814;
          goto LABEL_30;
        case 4u:
          Instance = -2147418094;
          goto LABEL_30;
        case 5u:
          Instance = -2147022986;
LABEL_30:
          v21[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_37;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v7,
      v21,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x509u,
      ppva,
      v18);
    Instance = v21[0];
  }
LABEL_36:
  if ( Instance < 0 )
    goto LABEL_75;
LABEL_37:
  Instance = IUnknown_GetServerProcessHandle(v22, 0x100000u, &hObject);
  v21[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    1295LL,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to open a handle on the application frame host server for waiting purposes",
    (const char *)v18);
  if ( a2 )
    goto LABEL_54;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v26) >= 0 )
    {
      switch ( v26[0] )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_48;
        case 3u:
          Instance = -2023406814;
          goto LABEL_48;
        case 4u:
          Instance = -2147418094;
          goto LABEL_48;
        case 5u:
          Instance = -2147022986;
LABEL_48:
          v21[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_55;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v8,
      v21,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x510u,
      ppvb,
      v19);
    Instance = v21[0];
  }
LABEL_54:
  if ( Instance < 0 )
  {
    v4 = (char *)hObject;
    goto LABEL_75;
  }
LABEL_55:
  *(_QWORD *)v27 = a1;
  v9 = hObject;
  v4 = 0LL;
  hObject = 0LL;
  Instance = CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___(
               (PVOID)(a1 + 200),
               v9,
               v27);
  v21[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    1307LL,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to monitor the frame process for crash recovery purposes",
    (const char *)v19);
  if ( !a2 )
  {
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_68:
      if ( Instance >= 0 )
      {
LABEL_73:
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::operator=(
          (__int64 *)(a1 + 176),
          (__int64 *)&v22);
        *(_DWORD *)(a1 + 192) = v21[1];
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        goto LABEL_77;
      }
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v10,
          v21,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x51Cu,
          ppvc,
          v20);
        Instance = v21[0];
      }
      goto LABEL_72;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v27) >= 0 )
    {
      switch ( v27[0] )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_66;
        case 3u:
          Instance = -2023406814;
          goto LABEL_66;
        case 4u:
          Instance = -2147418094;
          goto LABEL_66;
        case 5u:
          Instance = -2147022986;
LABEL_66:
          v21[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_68;
  }
LABEL_72:
  if ( Instance >= 0 )
    goto LABEL_73;
LABEL_75:
  if ( v21[1] )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl[2].AddRef)(v22);
LABEL_77:
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v28,
    Instance);
  hObject = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v22);
  v28[0] = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
  return (unsigned int)Instance;
}
