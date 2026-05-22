/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003DAB0
 * Callers:
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180032D88 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 * Callees:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18003DB30 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV-$unique_any_t@.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x18003E4B8 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 */

char __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details::FeatureStateManager *this)
{
  char v1; // bl
  int v3; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 20) )
  {
    v3 = 0;
  }
  else
  {
    *((_QWORD *)this + 20) = 0LL;
    v3 = wil_details_RtlRegisterFeatureConfigurationChangeNotification(
           _lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_,
           this);
  }
  if ( !v3
    && !(unsigned int)wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
                        (char *)this + 144,
                        0x418A073AA3BC7C75LL,
                        this)
    && !(unsigned int)wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
                        (char *)this + 152,
                        0x418A073AA3BC88F5LL,
                        this) )
  {
    return 1;
  }
  return v1;
}
