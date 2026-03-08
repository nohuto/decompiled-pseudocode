/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180194940
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18010E134 (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180100B20 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1801023F4 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180103C70 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180194FA4 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180196A20 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180197150 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v4; // r8
  wil::details *v5; // rcx
  void *v6; // rdx
  __int64 v7; // rdi
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  wil::details *v10; // rcx
  struct _TP_TIMER *v11; // rcx
  struct _TP_TIMER *v12; // rcx
  void *v13; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 6,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 7,
    0LL);
  v3 = (wil::details *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  v4 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 28);
  if ( v4 )
  {
    v2 = (void *)*((_QWORD *)&xmmword_1803E2CE8 + 1);
    if ( *((_QWORD *)&xmmword_1803E2CE8 + 1) )
      wil::details_abi::SubscriptionList::Unsubscribe(
        (LPCRITICAL_SECTION)(*((_QWORD *)&xmmword_1803E2CE8 + 1) + 200LL),
        *((PSRWLOCK *)&xmmword_1803E2CE8 + 1),
        v4);
  }
  v5 = (wil::details *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = 0LL;
  if ( v5 )
    wil::details::FreeProcessHeap(v5, v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v7 = *((_QWORD *)this + 18);
  if ( v7 )
  {
    ProcAddress = (FARPROC)g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification;
    if ( g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification
      || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlUnregisterFeatureConfigurationChangeNotification"),
          (g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification = (__int64)ProcAddress) != 0) )
    {
      ((void (__fastcall *)(__int64))ProcAddress)(v7);
    }
  }
  v10 = (wil::details *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v10 )
    wil::details::FreeProcessHeap(v10, v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v11 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v11 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v11);
  v12 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v12 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v12);
  v13 = (void *)*((_QWORD *)this + 2);
  if ( v13 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v13);
}
