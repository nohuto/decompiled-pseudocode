void __fastcall wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  if ( a3 == (void (*)(void *))-1LL )
    wil::details::FeatureStateManager::SubscribeToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_featureStateManager,
      this,
      (void (*)(void *))a2);
  else
    wil::details::FeatureStateManager::SubscribeToEnabledStateChanges(
      (wil::details::FeatureStateManager *)&wil::details::g_featureStateManager,
      this,
      (void (*)(void *))a2,
      a3);
}
