/*
 * XREFs of ?_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x180011FD4
 * Callers:
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027034 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x18008C2C0 (-Hide@SearchAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800143D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?CortanaExperienceManager_DeferredSuspensionTimerStarted@CortanaProactiveTelemetry@@SAXXZ @ 0x180020DEC (-CortanaExperienceManager_DeferredSuspensionTimerStarted@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_46969563@@@details@wil@@QEAA_NXZ @ 0x1800AB598 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_46969563@@@details@wil@@QEAA_NXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SearchAppExperienceManager::_StartDeferredSuspensionTimer(LARGE_INTEGER *this)
{
  char IsEnabled; // al
  struct _FILETIME v3; // rdx
  PTP_TIMER *v4; // rbx
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  CortanaProactiveTelemetry::CortanaExperienceManager_DeferredSuspensionTimerStarted();
  pftDueTime = (struct _FILETIME)-50000000LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_46969563>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_46969563>::GetImpl'::`2'::impl);
  v3 = pftDueTime;
  v4 = (PTP_TIMER *)&this[60];
  if ( IsEnabled )
    v3 = (struct _FILETIME)-300000000LL;
  pftDueTime = v3;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      lambda_efaffaa5f4b32d09aefa47929c9cb96f_::_lambda_invoker_cdecl_,
                      (PVOID)this[59].LowPart,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    &this[60],
    ThreadpoolTimer);
  if ( !*v4 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x86D,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
             v6);
  SetThreadpoolTimer(*v4, &pftDueTime, 0, 0);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_46969563>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_46969563>::GetImpl'::`2'::impl) )
    QueryPerformanceCounter(this + 82);
  return 0LL;
}
