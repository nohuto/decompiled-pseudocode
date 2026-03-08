/*
 * XREFs of ?_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor@@AEAA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@XZ @ 0x1C02144A4
 * Callers:
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1C0214408 (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsageState::_ReadUsageOverridesFromRegistry(__int64 a1)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**(_QWORD **)(a1 + 8) + 56LL))(
         *(_QWORD *)(a1 + 8),
         3LL,
         L"HMDDevicePresent") )
  {
    return 1LL;
  }
  else
  {
    return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**(_QWORD **)(a1 + 8) + 56LL))(
             *(_QWORD *)(a1 + 8),
             3LL,
             L"SpecialUseDevicePresent") != 0
         ? 2
         : 0;
  }
}
