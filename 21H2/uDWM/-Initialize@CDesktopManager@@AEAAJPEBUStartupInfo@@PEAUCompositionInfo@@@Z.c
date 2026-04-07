/*
 * XREFs of ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18004A468
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x18004BAD8 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036E1C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180039C5C (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ?ReadProductType@CDesktopManager@@AEAAXXZ @ 0x18004AB20 (-ReadProductType@CDesktopManager@@AEAAXXZ.c)
 *     ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x18004AB8C (-_InitializeWnf@CDesktopManager@@AEAAJXZ.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004ACA8 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18004AF14 (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ??0CProjectionBorderManager@@QEAA@XZ @ 0x18004AFB4 (--0CProjectionBorderManager@@QEAA@XZ.c)
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18004B058 (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18004B37C (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x18004B3D8 (-Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Init@CIconicBitmapRegistry@@QEAAJXZ @ 0x18004B480 (-Init@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Init@CTextCache@@QEAAJXZ @ 0x18004B528 (-Init@CTextCache@@QEAAJXZ.c)
 *     ?Create@CCompositor@@SAJPEAUHMIL_CONNECTION__@@PEAPEAV1@@Z @ 0x18004B588 (-Create@CCompositor@@SAJPEAUHMIL_CONNECTION__@@PEAPEAV1@@Z.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18004B6E8 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x18004B71C (-SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ??0CAnimationClockCoordinator@@QEAA@XZ @ 0x18004B784 (--0CAnimationClockCoordinator@@QEAA@XZ.c)
 *     ??0CTransitionVisualController@@QEAA@XZ @ 0x18004B7CC (--0CTransitionVisualController@@QEAA@XZ.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x18004B858 (--0CContactManager@@QEAA@XZ.c)
 *     ??0CWindowList@@QEAA@XZ @ 0x18004B95C (--0CWindowList@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x18004E7B4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     memset_0 @ 0x180058192 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1800852C8 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086FB0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::Initialize(
        CDesktopManager *this,
        const struct StartupInfo *a2,
        struct CompositionInfo *a3)
{
  HANDLE EventW; // r14
  char v6; // r15
  bool v7; // bl
  CWindowList *v8; // rax
  CWindowList *v9; // rbx
  CWindowList *v10; // rax
  CContactManager *v11; // rax
  CContactManager *v12; // rax
  _QWORD *v13; // rax
  CTransitionVisualController *v14; // rax
  CTransitionVisualController *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  CAnimationClockCoordinator *v18; // rax
  CAnimationClockCoordinator *v19; // r8
  CDesktopManager *v20; // rax
  int updated; // eax
  signed int v22; // ebx
  CBaseObject *v23; // rcx
  __int64 v24; // rax
  CTextCache *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  CProjectionBorderManager *v29; // rax
  CProjectionBorderManager *v30; // rax
  CWindowList *v31; // rsi
  int RootVisual; // eax
  HANDLE Thread; // rax
  int v35; // r9d
  __int64 v36; // rdx
  signed int LastError; // eax
  signed int v38; // eax
  signed int v39; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-38h]
  unsigned int phkResulta; // [rsp+20h] [rbp-38h]
  unsigned int phkResultb; // [rsp+20h] [rbp-38h]
  _DWORD pvParam[2]; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handles; // [rsp+38h] [rbp-20h] BYREF
  HKEY v45; // [rsp+40h] [rbp-18h] BYREF
  char v46; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  DWORD cbData; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int Data; // [rsp+A8h] [rbp+50h] BYREF
  DWORD Type; // [rsp+B0h] [rbp+58h] BYREF
  HKEY hKey; // [rsp+B8h] [rbp+60h] BYREF

  *((_BYTE *)this + 20) = 0;
  *((_BYTE *)this + 24) = 0;
  EventW = 0LL;
  *((_QWORD *)this + 8) = *(_QWORD *)a2;
  *((_QWORD *)this + 6) = *(_QWORD *)a3;
  hKey = 0LL;
  Handles = &hKey;
  v45 = 0LL;
  v6 = 0;
  v46 = 1;
  v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\Dwm", 0, 0x20019u, &v45) == 0;
  if ( v46 )
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      Handles,
      v45);
  if ( v7 )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"DDisplayTestMode", 0LL, &Type, (LPBYTE)&Data, &cbData) && Data < 3 )
      *((_DWORD *)this + 202) = Data;
  }
  v8 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        640LL);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x280uLL);
    v10 = CWindowList::CWindowList(v9);
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 61) = v10;
  if ( !v10 )
  {
    phkResult = 357;
LABEL_70:
    v22 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBFC8, 1LL, -2147024882, phkResult);
    goto LABEL_62;
  }
  v11 = (CContactManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             328LL);
  if ( v11 )
    v12 = CContactManager::CContactManager(v11);
  else
    v12 = 0LL;
  *((_QWORD *)this + 24) = v12;
  if ( !v12 )
  {
    phkResult = 360;
    goto LABEL_70;
  }
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    8LL);
  if ( v13 )
    *v13 = 0LL;
  else
    v13 = 0LL;
  *((_QWORD *)this + 36) = v13;
  if ( !v13 )
  {
    phkResult = 363;
    goto LABEL_70;
  }
  v14 = (CTransitionVisualController *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
  if ( v14 )
    v15 = CTransitionVisualController::CTransitionVisualController(v14);
  else
    v15 = 0LL;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31) = v15;
  if ( !v15 )
  {
    phkResult = 366;
    goto LABEL_70;
  }
  v16 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  v17 = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v16 + 8) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_DWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_QWORD *)(v16 + 56) = 0LL;
    *(_QWORD *)(v16 + 64) = 0LL;
    *(_DWORD *)(v16 + 72) = 0;
    *(_BYTE *)(v16 + 80) = 0;
  }
  else
  {
    v17 = 0LL;
  }
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) = v17;
  if ( !v17 )
  {
    phkResult = 369;
    goto LABEL_70;
  }
  v18 = (CAnimationClockCoordinator *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                        WPF::g_pProcessHeap,
                                        88LL);
  if ( v18 )
    v19 = CAnimationClockCoordinator::CAnimationClockCoordinator(v18);
  else
    v19 = 0LL;
  v20 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25) = v19;
  if ( !v19 )
  {
    phkResult = 372;
    goto LABEL_70;
  }
  updated = CAnimationClockCoordinator::SetEventCallback(
              v19,
              (struct IAnimationClockEventListener *)((*((_QWORD *)v20 + 30) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v20 + 30) >> 64)));
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 375;
LABEL_82:
    v35 = updated;
LABEL_116:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBFC8, 1LL, v35, phkResulta);
    goto LABEL_59;
  }
  pvParam[0] = 8;
  if ( SystemParametersInfoW(0x48u, 8u, pvParam, 0) )
    CDesktopManager::SetWindowAnimation(pvParam[1] != 0);
  updated = DwmRedirectionManagerInitialize(
              a3,
              *((struct IDwmRedirectionClient **)this + 61),
              (struct IDwmRedirectionManager **)this + 7);
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 391;
    goto LABEL_82;
  }
  v6 = 1;
  v23 = (CBaseObject *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v23 )
    CBaseObject::Release(v23);
  updated = CCompositor::Create(*((struct HMIL_CONNECTION__ **)this + 6), (struct CCompositor **)this + 5);
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 395;
    goto LABEL_82;
  }
  v24 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          128LL);
  v25 = (CTextCache *)v24;
  if ( v24 )
  {
    *(_DWORD *)(v24 + 100) = 0;
    *(_QWORD *)v24 = &CTextCache::`vftable';
    memset_0((void *)(v24 + 8), 0, 0x5CuLL);
    *((_QWORD *)v25 + 13) = 0LL;
    *((_QWORD *)v25 + 14) = 0LL;
    *((_QWORD *)v25 + 15) = 0LL;
  }
  else
  {
    v25 = 0LL;
  }
  *((_QWORD *)this + 33) = v25;
  if ( !v25 )
  {
    phkResultb = 403;
LABEL_88:
    v22 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBFC8, 1LL, -2147024882, phkResultb);
LABEL_118:
    CDesktopManager::NotifyRedirectionShutdown(this);
    DwmRedirectionManagerShutdown();
    goto LABEL_60;
  }
  updated = CTextCache::Init(v25);
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 404;
    goto LABEL_82;
  }
  v26 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          112LL);
  if ( v26 )
  {
    *(_QWORD *)v26 = &CIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v26 + 16) = 0LL;
    *(_QWORD *)(v26 + 24) = 0LL;
    *(_QWORD *)(v26 + 32) = 0LL;
    *(_DWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 48) = 0LL;
    *(_QWORD *)(v26 + 56) = 0LL;
    *(_QWORD *)(v26 + 64) = 0LL;
    *(_DWORD *)(v26 + 72) = 0;
    *(_QWORD *)(v26 + 96) = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  *((_QWORD *)this + 37) = v26;
  if ( !v26 )
  {
    phkResultb = 407;
    goto LABEL_88;
  }
  updated = CIconicBitmapRegistry::Init((CIconicBitmapRegistry *)v26);
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 408;
    goto LABEL_82;
  }
  v27 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v27 )
  {
    *(_QWORD *)v27 = &CImmersiveIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v27 + 16) = 0LL;
    *(_QWORD *)(v27 + 24) = 0LL;
    *(_QWORD *)(v27 + 32) = 0LL;
    *(_DWORD *)(v27 + 40) = 0;
    *(_QWORD *)(v27 + 48) = 0LL;
    *(_QWORD *)(v27 + 56) = 0LL;
    *(_QWORD *)(v27 + 64) = 0LL;
    *(_DWORD *)(v27 + 72) = 0;
    *(_QWORD *)(v27 + 80) = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  *((_QWORD *)this + 38) = v27;
  if ( !v27 )
  {
    phkResultb = 411;
    goto LABEL_88;
  }
  updated = CImmersiveIconicBitmapRegistry::Init((CImmersiveIconicBitmapRegistry *)v27);
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 412;
    goto LABEL_82;
  }
  CDesktopManager::SetupDPIValues(this);
  *((_DWORD *)this + 132) = -1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v28, &UdwmStartup_Info, 1LL);
  CDesktopManager::UpdateRemotingMode(this);
  updated = WICCreateImagingFactory_Proxy(567LL, (char *)this + 312);
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 423;
    goto LABEL_82;
  }
  updated = CDesktopManager::UpdateSettings(this, 13);
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 436;
    goto LABEL_82;
  }
  updated = CLivePreview::Create((struct CLivePreview **)this + 64);
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 438;
    goto LABEL_82;
  }
  v29 = (CProjectionBorderManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      584LL);
  if ( v29 )
    v30 = CProjectionBorderManager::CProjectionBorderManager(v29);
  else
    v30 = 0LL;
  *((_QWORD *)this + 65) = v30;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65) )
  {
    phkResultb = 441;
    goto LABEL_88;
  }
  v31 = (CWindowList *)*((_QWORD *)this + 61);
  RootVisual = CWindowList::CreateRootVisual(v31);
  v22 = RootVisual;
  if ( RootVisual < 0 )
  {
    v36 = 1771LL;
  }
  else
  {
    RootVisual = CWindowList::RegisterTransparencySystemPolicyChangeEvent(v31);
    v22 = RootVisual;
    if ( RootVisual >= 0 )
    {
      v22 = 0;
      goto LABEL_53;
    }
    v36 = 1772LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v36,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)RootVisual);
LABEL_53:
  if ( v22 < 0 )
  {
    phkResulta = 443;
LABEL_115:
    v35 = v22;
    goto LABEL_116;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  if ( !EventW )
  {
    LastError = GetLastError();
    v22 = LastError;
    if ( LastError > 0 )
      v22 = (unsigned __int16)LastError | 0x80070000;
    phkResulta = 451;
    goto LABEL_113;
  }
  SetLastError(0);
  Thread = CreateThread(0LL, 0LL, CDesktopManager::DwmEventThreadProc, EventW, 0, (LPDWORD)this + 164);
  *((_QWORD *)this + 83) = Thread;
  if ( !Thread )
  {
    v39 = GetLastError();
    v22 = v39;
    if ( v39 > 0 )
      v22 = (unsigned __int16)v39 | 0x80070000;
    phkResulta = 460;
    goto LABEL_113;
  }
  SetThreadDescription(Thread, L"uDWM Event Thread");
  v45 = (HKEY)*((_QWORD *)this + 83);
  Handles = EventW;
  SetLastError(0);
  if ( WaitForMultipleObjects(2u, &Handles, 0, 0xFFFFFFFF) )
  {
    v38 = GetLastError();
    v22 = v38;
    if ( v38 > 0 )
      v22 = (unsigned __int16)v38 | 0x80070000;
    phkResulta = 477;
LABEL_113:
    if ( v22 >= 0 )
      v22 = -2003304445;
    goto LABEL_115;
  }
  updated = CDesktopManager::_InitializeWnf(this);
  v22 = updated;
  if ( updated < 0 )
  {
    phkResulta = 482;
    goto LABEL_82;
  }
  CDesktopManager::ReadProductType(this);
  *((_BYTE *)this + 24) = 1;
LABEL_59:
  if ( v22 < 0 && v6 )
    goto LABEL_118;
LABEL_60:
  if ( EventW )
    CloseHandle(EventW);
LABEL_62:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v22;
}
