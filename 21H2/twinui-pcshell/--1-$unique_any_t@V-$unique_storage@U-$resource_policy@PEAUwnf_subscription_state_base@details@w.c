/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFC9C
 * Callers:
 *     ?RegisterAppDeploymentListeners@SearchAppExperienceManager@@AEAAXXZ @ 0x1800A8510 (-RegisterAppDeploymentListeners@SearchAppExperienceManager@@AEAAXXZ.c)
 *     ??1ShellFeedsExperienceManagerImpl@@UEAA@XZ @ 0x1800B1498 (--1ShellFeedsExperienceManagerImpl@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800B78D4 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800D16F4 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x1802652B4 (--1SearchAppExperienceManager@@UEAA@XZ.c)
 *     _ConnectedStandbyHelper::Initialize_::_1_::dtor$3 @ 0x180338B1B (_ConnectedStandbyHelper--Initialize_--_1_--dtor$3.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$4 @ 0x1803B6F14 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$4.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$5 @ 0x1803B6F27 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$5.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$22 @ 0x1803B706A (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$22.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$23 @ 0x1803B707D (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$23.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$24 @ 0x1803B7090 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$24.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$25 @ 0x1803B70A3 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$25.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$26 @ 0x1803B70B6 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$26.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$27 @ 0x1803B70C9 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$27.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$28 @ 0x1803B70DC (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$28.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$29 @ 0x1803B70EF (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$29.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$30 @ 0x1803B7102 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$30.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$31 @ 0x1803B7115 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$31.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$32 @ 0x1803B7128 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$32.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$33 @ 0x1803B713B (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$33.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$34 @ 0x1803B714E (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$34.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$35 @ 0x1803B7161 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$35.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x1803B758C (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C310C (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801B1E50 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>(
        Concurrency::details::_RefCounter **a1)
{
  Concurrency::details::_RefCounter *v1; // rcx

  v1 = *a1;
  if ( v1 )
    Concurrency::details::_RefCounter::_Destroy(v1);
}
