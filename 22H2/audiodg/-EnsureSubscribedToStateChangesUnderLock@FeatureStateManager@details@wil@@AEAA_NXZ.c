/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1400224B4
 * Callers:
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x14002771C (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 * Callees:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x14002252C (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV-$unique_any_t@.c)
 *     ?wil_details_RtlRegisterFeatureConfigurationChangeNotification@@YAJP6AXPEAX@Z0PEA_KPEAPEAX@Z @ 0x14002893C (-wil_details_RtlRegisterFeatureConfigurationChangeNotification@@YAJP6AXPEAX@Z0PEA_KPEAPEAX@Z.c)
 */

char __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details::FeatureStateManager *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  void **v3; // r9
  char v4; // bl
  int v6; // eax

  v3 = (void **)((char *)this + 88);
  v4 = 0;
  if ( *((_QWORD *)this + 11) )
  {
    v6 = 0;
  }
  else
  {
    *v3 = 0LL;
    v6 = wil_details_RtlRegisterFeatureConfigurationChangeNotification(
           (void (*)(void *))_lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_,
           this,
           a3,
           v3);
  }
  if ( !v6
    && !(unsigned int)wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
                        (char *)this + 72,
                        0x418A073AA3BC7C75LL,
                        this)
    && !(unsigned int)wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
                        (char *)this + 80,
                        0x418A073AA3BC88F5LL,
                        this) )
  {
    return 1;
  }
  return v4;
}
