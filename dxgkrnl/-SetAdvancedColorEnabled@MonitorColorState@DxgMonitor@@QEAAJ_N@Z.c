/*
 * XREFs of ?SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C03C9658
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217DE8 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03BF7E4 (MonitorEnableDisableAdvancedColor.c)
 * Callees:
 *     Feature_EnableIddCx110__private_IsEnabledDeviceUsage @ 0x1C0024584 (Feature_EnableIddCx110__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkIsConsoleSessionDispBrokerEnabled @ 0x1C0171D70 (DxgkIsConsoleSessionDispBrokerEnabled.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(DxgMonitor::MonitorColorState *this, char a2)
{
  __int64 v5; // r9
  bool v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  DxgkIsConsoleSessionDispBrokerEnabled(&v6);
  if ( v6 )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
  else
  {
    *((_BYTE *)this + 384) = a2;
    if ( !(unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage()
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
    {
      LOBYTE(v5) = a2;
      (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 152LL))(
        *((_QWORD *)this + 1),
        4LL,
        L"AdvancedColorEnabled",
        v5);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 3LL);
    return 0LL;
  }
}
