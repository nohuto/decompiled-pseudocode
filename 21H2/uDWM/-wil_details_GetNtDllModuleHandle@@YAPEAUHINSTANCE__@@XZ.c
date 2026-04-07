/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800533EC
 * Callers:
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180041950 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x1800427F0 (-RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x180054F90 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x1800550B0 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_NtQueryWnfStateData @ 0x180055264 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x1800552EC (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x18005552C (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     wil_details_RtlSubscribeWnfStateChangeNotification @ 0x1800555A8 (wil_details_RtlSubscribeWnfStateChangeNotification.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x18007F7F0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x18007FCC8 (-UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x18007FDEC (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
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
