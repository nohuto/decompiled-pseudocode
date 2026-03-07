void __fastcall wil::details::EnabledStateManager::~EnabledStateManager(struct _TP_TIMER **this)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  wil::details *v6; // rcx
  struct _TP_TIMER *v7; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this);
  v3 = this[13];
  this[13] = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  v4 = this[9];
  this[9] = 0LL;
  if ( v4 )
    wil::details::FreeProcessHeap(v4, v2);
  v5 = this[5];
  if ( v5 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v5, v2);
  v6 = this[4];
  if ( v6 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v6, v2);
  v7 = this[2];
  if ( v7 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v7);
}
