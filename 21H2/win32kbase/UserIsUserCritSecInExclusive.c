/*
 * XREFs of UserIsUserCritSecInExclusive @ 0x1C002A1D0
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0029368 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     NtUserReleaseDC @ 0x1C0029480 (NtUserReleaseDC.c)
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     LeaveCrit @ 0x1C0029B70 (LeaveCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C002DC3C (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     HandleInputDestDestruction @ 0x1C003ACA0 (HandleInputDestDestruction.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0042094 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C004E740 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     HMRemoveHandleForObject @ 0x1C0050440 (HMRemoveHandleForObject.c)
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     DrvEnumDisplaySettings @ 0x1C006F640 (DrvEnumDisplaySettings.c)
 *     CleanupInputDelegation @ 0x1C0097BF0 (CleanupInputDelegation.c)
 *     ChangeAcquireResourceType @ 0x1C00B4B70 (ChangeAcquireResourceType.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B8A10 (UserSessionSwitchEnterCrit.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B9600 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C3088 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     HMDestroyUnlockedObject @ 0x1C00D0380 (HMDestroyUnlockedObject.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C00E819E (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0144930 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C015322C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C015B1B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C015BD40 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C015C5F0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C015C9F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C015D580 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C015E990 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0160100 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0161000 (NtUserSetFeatureReportResponse.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0166AC0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsUserCritSecInExclusive()
{
  return ExIsResourceAcquiredExclusiveLite(gpresUser) == 1;
}
