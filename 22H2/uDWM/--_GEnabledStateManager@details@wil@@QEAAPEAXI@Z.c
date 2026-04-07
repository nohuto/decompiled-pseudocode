/*
 * XREFs of ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18007DE80
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005385C (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18002ED08 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180040208 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180042E24 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18007E294 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18007FCF8 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

struct _TP_TIMER **__fastcall wil::details::EnabledStateManager::`scalar deleting destructor'(struct _TP_TIMER **this)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v2; // rdx
  struct _TP_TIMER *v3; // rcx
  struct _TP_TIMER *v4; // rcx
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
    MemoryFree(v3);
  v4 = this[9];
  this[9] = 0LL;
  if ( v4 )
    MemoryFree(v4);
  v5 = this[5];
  if ( v5 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v5, v2);
  v6 = this[4];
  if ( v6 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v6, v2);
  v7 = this[2];
  if ( v7 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v7);
  return this;
}
