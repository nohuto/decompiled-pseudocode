/*
 * XREFs of ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE940
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18007AB94 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800D03C4 (-InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?InitializeShellPreferencesHub@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800D0DA0 (-InitializeShellPreferencesHub@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800D16F4 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ??$wnf_query_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1802BB338 (--$wnf_query_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_.c)
 *     ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803B447C (--$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@De.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803B6670 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_1803B6670.c)
 *     ??1TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B78C4 (--1TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@Q.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1803BBE80 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1803BD288 (-OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Hologr.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803BED50 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?StartActivity@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803C08B8 (-StartActivity@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTeleme.c)
 *     ?Stop@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1803C0BB8 (-Stop@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C310C (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1803C3734 (-TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4128 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4318 (-UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C493C (-UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4ACC (-UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4BAC (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4ED0 (-UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateLinguisticDataAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5198 (-UpdateLinguisticDataAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5338 (-UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5724 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5804 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C59D4 (-UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5D28 (-UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803CCF68 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::PerformDelayedInitialization(TouchKeyboardExperienceManager *this)
{
  HWND Window; // rax
  TouchKeyboardExperienceManager *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  bool v7; // al
  TouchKeyboardExperienceManager *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // r9d
  const unsigned __int16 *v12; // rdx
  int BOOLWithREGSAM; // eax
  bool v14; // bl
  unsigned int v15; // r9d
  unsigned int v16; // eax
  int v17; // r14d
  const char *v18; // r9
  char v20[4]; // [rsp+60h] [rbp-1E8h] BYREF
  int v21; // [rsp+64h] [rbp-1E4h] BYREF
  int v22; // [rsp+68h] [rbp-1E0h] BYREF
  int v23; // [rsp+6Ch] [rbp-1DCh] BYREF
  struct TouchKeyboardExperienceManager *v24; // [rsp+70h] [rbp-1D8h] BYREF
  WNDCLASSEXW v25; // [rsp+80h] [rbp-1C8h] BYREF
  unsigned __int16 *v26[2]; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-168h]
  unsigned __int64 v28; // [rsp+E8h] [rbp-160h]
  _QWORD v29[40]; // [rsp+F0h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"TouchKeyboardExperienceManagerDelayedInitialization");
  v29[0] = &TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::`vftable';
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::StartActivity((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *)v29);
  memset_0(&v25, 0, sizeof(v25));
  v25.cbSize = 80;
  v25.lpfnWndProc = (WNDPROC)KBEMWndProc;
  v25.lpszClassName = L"KBEMWndClass";
  RegisterClassExW(&v25);
  Window = CreateWindowExW(0, L"KBEMWndClass", L"KBEMWnd", 0, 0, 0, 0, 0, HWND_MESSAGE, 0LL, 0LL, 0LL);
  *((_QWORD *)this + 51) = Window;
  v3 = (TouchKeyboardExperienceManager *)((char *)this - 48);
  SetWindowLongPtrW(Window, -21, (LONG_PTR)this - 48);
  v24 = (TouchKeyboardExperienceManager *)((char *)this - 48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 80);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::TabTipAdapter,KeyboardHosting::TabTipAdapter,TouchKeyboardExperienceManager *>(
         (KeyboardHosting::TabTipAdapter **)this + 80,
         &v24);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1665LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_25;
  }
  v4 = TouchKeyboardExperienceManager::InitializeTabTipAdapter((TouchKeyboardExperienceManager *)((char *)this - 48));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1666LL;
    goto LABEL_5;
  }
  v7 = IsPPIEdition();
  v8 = (TouchKeyboardExperienceManager *)((char *)this - 48);
  if ( v7 )
    TouchKeyboardExperienceManager::InitializeShellPreferencesHub(v8);
  else
    TouchKeyboardExperienceManager::InitializeShellPreferencesDesktop(v8);
  TouchKeyboardExperienceManager::UpdateFullLayoutAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateWideLayoutAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateNarrowLayoutAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateSplitLayoutAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateDockedModeAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateDictationAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateHandwritingAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateEmojiInputAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateEyeControlState((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateOobeRunningState((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::UpdateLinguisticDataAvailability((TouchKeyboardExperienceManager *)((char *)this - 48));
  TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications((TouchKeyboardExperienceManager *)((char *)this - 48));
  v23 = 0;
  v20[0] = 0;
  if ( (int)wil::wnf_query_nothrow<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(v9, v20, &v23, v10) >= 0 )
    TouchKeyboardExperienceManager::OnHolographicDisplayChanged(
      (TouchKeyboardExperienceManager *)((char *)this - 48),
      (const enum Windows::Internal::Shell::Holographic::UserDisplayContext *)&v23);
  v27 = 0LL;
  v28 = 7LL;
  LOWORD(v26[0]) = 0;
  if ( (int)KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(v26) >= 0 && v27 )
  {
    v12 = (const unsigned __int16 *)v26;
    if ( v28 >= 8 )
      v12 = v26[0];
    TouchKeyboardExperienceManager::TerminateInputApplication(
      (TouchKeyboardExperienceManager *)((char *)this - 48),
      v12);
  }
  v21 = 0;
  v22 = 0;
  BOOLWithREGSAM = SHRegGetBOOLWithREGSAM(
                     HKEY_CURRENT_USER,
                     L"Software\\Microsoft\\Input",
                     L"IsInputAppPreloadEnabled",
                     v11,
                     &v21);
  v14 = 1;
  if ( BOOLWithREGSAM < 0 )
  {
    wil::details::in1diag3::Log_IfFailedWithExpected(
      retaddr,
      (void *)0x6B2,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)BOOLWithREGSAM,
      1u,
      0x80070002);
    v16 = SHRegGetBOOLWithREGSAM(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Input",
            L"IsInputAppPreloadEnabled",
            v15,
            &v22);
    wil::details::in1diag3::Log_IfFailedWithExpected(
      retaddr,
      (void *)0x6B4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v16,
      1u,
      0x80070002);
  }
  else
  {
    *((_BYTE *)this + 768) = v21 != 0;
  }
  v17 = v21;
  if ( !v21 && !v22 )
    goto LABEL_23;
  try
  {
    TouchKeyboardExperienceManager::PreloadInputApp(v3);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6BD,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v18);
    v14 = 1;
    v17 = v21;
  }
  if ( !v22 )
LABEL_23:
    v14 = 0;
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::Stop(
    (TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *)v29,
    v17 != 0,
    v14);
  std::wstring::_Tidy_deallocate(v26);
  v5 = 0;
LABEL_25:
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::~TouchKeyboardExperienceManagerDelayedInitialization((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *)v29);
  return v5;
}
