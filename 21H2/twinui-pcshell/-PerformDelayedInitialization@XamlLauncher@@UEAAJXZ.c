/*
 * XREFs of ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18039D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180018198 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180018468 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180018EE0 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?IsStartMenuSuppressedByShellLauncher@@YA_NXZ @ 0x1800CC0A4 (-IsStartMenuSuppressedByShellLauncher@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18021EFDC (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x180269AD0 (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___ @ 0x18039A584 (Windows--Internal--ComTaskPool--QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x18039B0E4 (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18039BB14 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x18039BFFC (-InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ.c)
 *     ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18039C0A0 (-InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Exper.c)
 *     ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18039C1E0 (-InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experien.c)
 *     ?StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ @ 0x18039DE70 (-StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1803A08B0 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     IsUserAssignedAccessSingleApp @ 0x1804E8004 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PerformDelayedInitialization(XamlLauncher *this)
{
  PerSessionState *v2; // rcx
  bool v3; // al
  int v4; // eax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  int Service; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  WINBOOL v12; // edx
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v14; // [rsp+48h] [rbp-C0h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v16[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v17[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"PerformDelayedInitialization");
  v17[0] = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  StartWindowTelemetry::PerformDelayedInitialization::StartActivity((StartWindowTelemetry::PerformDelayedInitialization *)v17);
  v3 = IsUserOOBEOrCredentialReset()
    || (unsigned int)IsUserAssignedAccessSingleApp(-4LL)
    || IsShellLauncherEnabledForCurrentUser((__int64)v2) && IsStartMenuSuppressedByShellLauncher((__int64)v2);
  *((_BYTE *)this + 200) = v3;
  v4 = `IsRemoteAppSession'::`2'::s_stSessionType;
  if ( !`IsRemoteAppSession'::`2'::s_stSessionType )
  {
    v16[0] = 0;
    WinStationQueryCurrentSessionInformation(39LL, &`IsRemoteAppSession'::`2'::s_stSessionType, 4LL, v16);
    v4 = 0;
    `IsRemoteAppSession'::`2'::s_stSessionType = 0;
  }
  *((_BYTE *)this + 202) = v4 == 5;
  if ( !PerSessionState::HasLoginCompleted(v2) )
    SetWinEventHook(0x20u, 0x20u, 0LL, XamlLauncher::s_LauncherDesktopSwitchEventProc, 0, 0, 0);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         *((IUnknown **)this - 5),
         &IID_IRealmActivationHistory,
         &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
         &ppvOut);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    Service = XamlLauncher::QueryService(
                (XamlLauncher *)((char *)this - 8),
                &stru_1805B75F8,
                &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                (void **)&v14);
    v6 = Service;
    if ( Service >= 0 )
    {
      Service = XamlLauncher::InitializeStartExperienceManager((XamlLauncher *)((char *)this - 56), v14, v8);
      v6 = Service;
      if ( Service >= 0 )
      {
        Service = XamlLauncher::InitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56), v14, v10);
        v6 = Service;
        if ( Service >= 0 )
        {
          Service = XamlLauncher::InitializeJumpViewExperienceManager((XamlLauncher *)((char *)this - 56), v14);
          v6 = Service;
          if ( Service >= 0 )
          {
            v11 = XamlLauncher::InitializeHolographicContextIdentifier((XamlLauncher *)((char *)this - 56));
            if ( v11 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1B1,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                (const char *)(unsigned int)v11);
            Service = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, unsigned __int64))(**((_QWORD **)this + 27)
                                                                                                  + 24LL))(
                        *((_QWORD *)this + 27),
                        *((_QWORD *)this + 8),
                        *((_QWORD *)this + 9),
                        ppvOut,
                        ((unsigned __int64)this + 16) & -(__int64)(this != (XamlLauncher *)56));
            v6 = Service;
            if ( Service >= 0 )
            {
              Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___();
              wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
                (__int64)v17,
                v12);
              v6 = 0;
              goto LABEL_27;
            }
            v9 = 435LL;
          }
          else
          {
            v9 = 430LL;
          }
        }
        else
        {
          v9 = 427LL;
        }
      }
      else
      {
        v9 = 424LL;
      }
    }
    else
    {
      v9 = 422LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Service);
LABEL_27:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A1,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization((StartWindowTelemetry::PerformDelayedInitialization *)v17);
  return v6;
}
