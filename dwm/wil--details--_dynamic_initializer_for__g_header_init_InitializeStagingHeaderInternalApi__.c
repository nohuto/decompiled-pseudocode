void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)
{
  void (__fastcall *result)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *); // rax

  g_wil_details_internalRecordFeatureUsage = (__int64)wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  result = wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  return result;
}
