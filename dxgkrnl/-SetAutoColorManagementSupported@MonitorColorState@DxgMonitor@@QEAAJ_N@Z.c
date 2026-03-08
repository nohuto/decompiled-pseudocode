/*
 * XREFs of ?SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C0218254
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217DE8 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     Feature_EnableIddCx110__private_IsEnabledDeviceUsage @ 0x1C0024584 (Feature_EnableIddCx110__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01B0374 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetAutoColorManagementSupported(
        DxgMonitor::MonitorColorState *this,
        char a2)
{
  char v2; // r9
  __int64 v5; // r9

  v2 = a2;
  if ( a2 && DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
  {
    WdLogSingleEntry0(2LL);
    return 3221225659LL;
  }
  else if ( *((_BYTE *)this + 385) == v2 )
  {
    return 255LL;
  }
  else
  {
    *((_BYTE *)this + 385) = v2;
    if ( !(unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage()
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
    {
      LOBYTE(v5) = *((_BYTE *)this + 385);
      (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 152LL))(
        *((_QWORD *)this + 1),
        4LL,
        L"AutoColorManagementSupported",
        v5);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 5LL);
    return 0LL;
  }
}
