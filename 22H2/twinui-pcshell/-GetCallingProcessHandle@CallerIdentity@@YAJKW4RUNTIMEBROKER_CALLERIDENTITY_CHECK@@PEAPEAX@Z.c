/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1804D9B5C
 * Callers:
 *     ?UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1801C3EA0 (-UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x180282B40 (-TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ.c)
 *     ?MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z @ 0x1804B9D70 (-MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z.c)
 *     ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z @ 0x1804D97A4 (-GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1804D9AB4 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1804DAF94 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x1804F5D80 (-v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ @ 0x1804D9F88 (-_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessHandle(__int64 a1, int a2, HANDLE *a3)
{
  unsigned int v3; // edi
  HRESULT v6; // eax
  int v7; // ebx
  CallerIdentity *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppInterface; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  ppInterface = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppInterface);
  v6 = CoGetCallContext(&GUID_68c6a1b9_de39_42c3_8d28_bf40a5126541, &ppInterface);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( v6 != -2147417833 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_10;
    }
    *a3 = GetCurrentProcess();
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(void *, __int64, HANDLE *))(*(_QWORD *)ppInterface + 24LL))(ppInterface, 4096LL, a3);
    if ( v7 < 0 )
      goto LABEL_10;
  }
  if ( a2 == 1 )
  {
    CallerIdentity::_EnsureRuntimeBrokerPID(v8);
    if ( GetProcessId(*a3) == CallerIdentity::g_dwRuntimeBrokerProcessId )
    {
      CloseHandle(*a3);
      *a3 = 0LL;
      v7 = -2147467259;
LABEL_10:
      v3 = v7;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppInterface);
  return v3;
}
