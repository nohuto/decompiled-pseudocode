/*
 * XREFs of ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18004C72C
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18004C5F4 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D52C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@details@wil@@QEAAX_NW4.c)
 *     ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x18004E694 (-GetControlMode@PerceptionSimulationSettings@@SA-AW4SimulationControlMode@@XZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008131C (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180081360 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected(void)
{
  char v0; // di
  CONFIGRET Device_Interface_List_SizeW; // eax
  DWORD v2; // eax
  unsigned int v3; // r8d
  CONFIGRET Device_Interface_ListW; // eax
  DWORD v5; // eax
  unsigned int v6; // r8d
  int ControlMode; // eax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v11; // rdx
  WCHAR *v12; // rax
  void *v13; // rdx
  unsigned int v14; // r8d
  const char *v15; // r9
  WCHAR *v16; // rbx
  ULONG ulFlags; // [rsp+20h] [rbp-38h]
  ULONG pulLen; // [rsp+30h] [rbp-28h] BYREF
  GUID InterfaceClassGuid; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v0 = 0;
  InterfaceClassGuid = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  while ( 1 )
  {
    pulLen = 0;
    Device_Interface_List_SizeW = CM_Get_Device_Interface_List_SizeW(&pulLen, &InterfaceClassGuid, 0LL, 0);
    v2 = CM_MapCrToWin32Err(Device_Interface_List_SizeW, 0x507u);
    if ( v2 )
    {
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x8F, v3, (const char *)v2, ulFlags);
      JUMPOUT(0x180074620LL);
    }
    v11 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v11 = -1LL;
    v12 = (WCHAR *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     v11);
    v16 = v12;
    if ( !v12 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(retaddr, v13, v14, v15);
      __debugbreak();
    }
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(&InterfaceClassGuid, 0LL, v12, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
    {
      v5 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
      if ( v5 )
      {
        wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x9D, v6, (const char *)v5, ulFlags);
        __debugbreak();
      }
      v0 = 1;
      if ( *v16 )
        break;
    }
    (*(void (__fastcall **)(WPF::HeapBase *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v16);
    if ( v0 )
    {
      ControlMode = PerceptionSimulationSettings::GetControlMode();
      LOBYTE(v8) = 1;
      v9 = ControlMode;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SimulationDriver>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::GetImpl'::`2'::impl,
        v8);
      return v9 == 2;
    }
  }
  (*(void (__fastcall **)(WPF::HeapBase *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v16);
  return 1;
}
