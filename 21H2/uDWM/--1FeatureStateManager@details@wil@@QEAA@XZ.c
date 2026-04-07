/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18007DDBC
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180053964 (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800402B8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180042ED4 (-MemoryFree@@YAXPEAX@Z.c)
 *     ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18007DEC4 (--1SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18007E504 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18007F410 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x18007FCC8 (-UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z.c)
 *     ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18007FDBC (-UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x18007FDEC (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v2; // rdx
  void *v3; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v4; // rcx
  void *v5; // rcx
  void *v6; // rdx
  wil::details *v7; // rcx
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  struct _TP_TIMER *v10; // rcx
  struct _TP_TIMER *v11; // rcx
  void *v12; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 6,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 7,
    0LL);
  v3 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v3 )
    MemoryFree(v3);
  v4 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 30);
  if ( v4 )
    wil::details::UnsubscribeProcessWideUsageFlush(v4, v2);
  v5 = (void *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  if ( v5 )
    MemoryFree(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v7 = (wil::details *)*((_QWORD *)this + 20);
  if ( v7 )
    wil::details::UnregisterWilFeatureConfigurationChange(v7, v6);
  v8 = (wil::details *)*((_QWORD *)this + 19);
  if ( v8 )
    wil::details::UnsubscribeWilWnf(v8, (struct __WIL__WNF_USER_SUBSCRIPTION *)v6);
  v9 = (wil::details *)*((_QWORD *)this + 18);
  if ( v9 )
    wil::details::UnsubscribeWilWnf(v9, (struct __WIL__WNF_USER_SUBSCRIPTION *)v6);
  wil::details_abi::SubscriptionList::~SubscriptionList((wil::details::FeatureStateManager *)((char *)this + 72));
  v10 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v10 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v10);
  v11 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v11 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v11);
  v12 = (void *)*((_QWORD *)this + 2);
  if ( v12 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v12);
}
