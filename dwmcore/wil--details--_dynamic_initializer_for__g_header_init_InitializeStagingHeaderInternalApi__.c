/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x1800010B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())()
{
  __int64 (__fastcall *result)(); // rax

  g_wil_details_internalGetFeatureEnabledState = (__int64)wil::details::WilApiImpl_GetFeatureEnabledState;
  g_wil_details_internalRecordFeatureUsage = (__int64)wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  result = wil_StagingConfig_LogStagedFeatureUsage;
  g_wil_details_realtimeFeatureUsageHook = (__int64)wil_StagingConfig_LogStagedFeatureUsage;
  return result;
}
