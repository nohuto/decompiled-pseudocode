/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x180003BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())(wil::details *__hidden this, unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *)
{
  unsigned int (__fastcall *result)(wil::details *__hidden, unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *, int *); // rax

  g_wil_details_internalGetFeatureEnabledState = (__int64)wil::details::WilApiImpl_GetFeatureEnabledState;
  g_wil_details_internalRecordFeatureUsage = (__int64)wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalRecordFeatureError = (__int64)wil::details::WilApiImpl_RecordFeatureError;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  result = wil::details::WilApiImpl_GetFeatureVariant;
  g_wil_details_internalGetFeatureVariant = (__int64)wil::details::WilApiImpl_GetFeatureVariant;
  return result;
}
