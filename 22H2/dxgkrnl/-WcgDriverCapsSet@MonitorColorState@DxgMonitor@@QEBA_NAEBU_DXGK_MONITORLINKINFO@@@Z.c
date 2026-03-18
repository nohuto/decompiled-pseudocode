/*
 * XREFs of ?WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z @ 0x1C019DCFC
 * Callers:
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C019DC10 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021F3E0 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     Feature_36371531__private_IsEnabledDeviceUsage @ 0x1C0027128 (Feature_36371531__private_IsEnabledDeviceUsage.c)
 *     Feature_WCG_Skip_WideColorSpace_Check__private_ReportDeviceUsage @ 0x1C00273C4 (Feature_WCG_Skip_WideColorSpace_Check__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DxgMonitor::MonitorColorState::WcgDriverCapsSet(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2)
{
  char v4; // di
  bool v5; // zf
  DXGK_MONITORLINKINFO_CAPABILITIES v6; // eax

  v4 = 0;
  v5 = (unsigned int)Feature_36371531__private_IsEnabledDeviceUsage() == 0;
  v6.0 = (struct _DXGK_MONITORLINKINFO_CAPABILITIES::$9E3BB2B9C51DA1466203AB97776F201E)a2->Capabilities;
  if ( v5 )
  {
    if ( (*(_BYTE *)&v6.0 & 2) == 0 )
      Feature_WCG_Skip_WideColorSpace_Check__private_ReportDeviceUsage();
    return 1;
  }
  else
  {
    if ( (*(_BYTE *)&v6.0 & 2) != 0
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           1LL,
           L"MicrosoftApprovedAcmSupport",
           0LL)
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this)
      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           2LL,
           L"OverrideWCGCapabilities",
           0LL) )
    {
      return 1;
    }
    return v4;
  }
}
