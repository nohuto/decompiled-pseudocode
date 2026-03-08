/*
 * XREFs of ?WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01AE058
 * Callers:
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01ADF6C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210E00 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     Feature_EnableIddCx110__private_IsEnabledDeviceUsage @ 0x1C0024584 (Feature_EnableIddCx110__private_IsEnabledDeviceUsage.c)
 *     Feature_36371531__private_IsEnabledDeviceUsage @ 0x1C0026A10 (Feature_36371531__private_IsEnabledDeviceUsage.c)
 *     Feature_WCG_Skip_WideColorSpace_Check__private_ReportDeviceUsage @ 0x1C0026C58 (Feature_WCG_Skip_WideColorSpace_Check__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DxgMonitor::MonitorColorState::WcgDriverCapsSet(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2)
{
  char v4; // bl

  v4 = 0;
  if ( (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage()
    && (unsigned int)Feature_36371531__private_IsEnabledDeviceUsage() )
  {
    if ( (*(_BYTE *)&a2->Capabilities.0 & 2) != 0
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           1LL,
           L"MicrosoftApprovedAcmSupport",
           0LL) )
    {
      return 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
      return v4;
LABEL_6:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           2LL,
           L"OverrideWCGCapabilities") )
    {
      return 1;
    }
    return v4;
  }
  if ( (unsigned int)Feature_36371531__private_IsEnabledDeviceUsage() )
  {
    if ( (*(_BYTE *)&a2->Capabilities.0 & 2) != 0
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           1LL,
           L"MicrosoftApprovedAcmSupport") )
    {
      return 1;
    }
    goto LABEL_6;
  }
  Feature_EnableIddCx110__private_IsEnabledDeviceUsage();
  if ( (*(_BYTE *)&a2->Capabilities.0 & 2) == 0 )
    Feature_WCG_Skip_WideColorSpace_Check__private_ReportDeviceUsage();
  return 1;
}
