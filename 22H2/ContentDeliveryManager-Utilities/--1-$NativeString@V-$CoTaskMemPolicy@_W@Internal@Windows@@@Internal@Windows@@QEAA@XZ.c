/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180016520
 * Callers:
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$0 @ 0x1800D0ED6 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$0.c)
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$1 @ 0x1800D0EE8 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$15 @ 0x1800D1E0F (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$15.c)
 *     _ContentManagement::CreativeEventReportedCache::SetEventReported_::_1_::dtor$0 @ 0x1800D2405 (_ContentManagement--CreativeEventReportedCache--SetEventReported_--_1_--dtor$0.c)
 *     _ContentManagement::CreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$1 @ 0x1800D2429 (_ContentManagement--CreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$1.c)
 *     _ContentManagement::CreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$2 @ 0x1800D243B (_ContentManagement--CreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$2.c)
 *     _CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed_::_1_::dtor$2 @ 0x1800D2DCE (_CreativeFramework--SubscribedContentStore--RefreshSubscriptionLastAccessed_--_1_--dtor$2.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$5 @ 0x1800D2E04 (_CreativeFramework--SubscribedContentStore--GetSubscriptionState_--_1_--dtor$5.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$1 @ 0x1800D2E4C (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$12 @ 0x1800D2FA2 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$12.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$8 @ 0x1800D330A (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_1800D330A.c)
 *     _Windows::Services::TargetedContent::Internal::ResolveCDMTaskName_::_1_::dtor$0 @ 0x1800D52E2 (_Windows--Services--TargetedContent--Internal--ResolveCDMTaskName_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger_::_1_::dtor$4 @ 0x1800D538D (_Windows--Services--TargetedContent--Internal--GetTaskNameForTrigger_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger_::_1_::dtor$5 @ 0x1800D539F (_Windows--Services--TargetedContent--Internal--GetTaskNameForTrigger_--_1_--dtor$5.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType_::_1_::dtor$2 @ 0x1800D53D5 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--SetLayoutType_--_1_--dtor$2.c)
 *     _Windows::Services::TargetedContent::Internal::CreateTriggerKey_::_1_::dtor$4 @ 0x1800D5943 (_Windows--Services--TargetedContent--Internal--CreateTriggerKey_--_1_--dtor$4.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage_::_1_::dtor$0 @ 0x1800D8CA5 (_CreativeFramework--NotificationManager--ToastHelpers--ResolveRatingImage_--_1_--dtor$0.c)
 *     _ShellMRTHelper::MRTHelperBase::Resolve_::_1_::dtor$0 @ 0x1800D8F83 (_ShellMRTHelper--MRTHelperBase--Resolve_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  a1[2] = 0LL;
}
