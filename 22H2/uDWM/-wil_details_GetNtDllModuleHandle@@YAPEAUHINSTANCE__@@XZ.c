/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18005333C
 * Callers:
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x1800418A0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x180042740 (-RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x180054EE0 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x180055000 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_NtQueryWnfStateData @ 0x1800551B4 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18005523C (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x18005547C (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     wil_details_RtlSubscribeWnfStateChangeNotification @ 0x1800554F8 (wil_details_RtlSubscribeWnfStateChangeNotification.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x18007F580 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x18007FA58 (-UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x18007FB7C (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 * Callees:
 *     <none>
 */

HINSTANCE wil_details_GetNtDllModuleHandle(void)
{
  HINSTANCE result; // rax

  result = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = result;
  }
  return result;
}
