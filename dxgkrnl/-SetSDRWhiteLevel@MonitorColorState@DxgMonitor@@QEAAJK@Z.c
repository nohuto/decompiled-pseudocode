/*
 * XREFs of ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03C987C
 * Callers:
 *     MonitorSetSDRWhiteLevel @ 0x1C03C08CC (MonitorSetSDRWhiteLevel.c)
 *     MonitorSetSDRWhiteLevelOverride @ 0x1C03C0994 (MonitorSetSDRWhiteLevelOverride.c)
 * Callees:
 *     Feature_EnableIddCx110__private_IsEnabledDeviceUsage @ 0x1C0024584 (Feature_EnableIddCx110__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C0167CA8 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C0169354 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01F89F4 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetSDRWhiteLevel(
        DxgMonitor::MonitorColorState *this,
        unsigned int a2)
{
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  DxgMonitor::MonitorColorState *v8; // rcx

  if ( *((_DWORD *)this + 98) == a2 )
    return 255LL;
  *((_DWORD *)this + 98) = a2;
  if ( !(unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage()
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 136LL))(
      *((_QWORD *)this + 1),
      4LL,
      L"SDRWhiteLevel",
      a2);
  }
  v5 = DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
  v6 = v5;
  if ( v5 < 0 || (v7 = DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1, 0), v6 = v7, v7 < 0) )
  {
    WdLogSingleEntry1(2LL, v6);
    return (unsigned int)v6;
  }
  else
  {
    DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v8);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 4LL);
    return 0LL;
  }
}
