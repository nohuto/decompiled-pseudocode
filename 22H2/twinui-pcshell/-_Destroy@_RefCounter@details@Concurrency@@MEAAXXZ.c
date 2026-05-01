/*
 * XREFs of ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801B1CA0
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFAEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x1801AFFEC (--_GAcrylicPolicyManager@@UEAAPEAXI@Z.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1801B0ABC (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1801B1F08 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x1801FCF8C (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x1801FEE7C (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ??_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z @ 0x18020814C (--_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z.c)
 *     ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x1802090F8 (-SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18021D8B8 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x180221374 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x1802229BC (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x1802249F8 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1802519AC (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180254110 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1802569D4 (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180259038 (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x18026112C (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x180263EB4 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1802AEBA0 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802B3120 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x18031AB60 (-_Destroy@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x180338774 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C2E3C (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x1803DE638 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1803DFEF4 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Concurrency::details::_RefCounter::_Destroy(Concurrency::details::_RefCounter *this)
{
  if ( this )
    (**(void (__fastcall ***)(Concurrency::details::_RefCounter *, __int64))this)(this, 1LL);
}
