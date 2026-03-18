/*
 * XREFs of ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     RealGetProp @ 0x1C0045D80 (RealGetProp.c)
 *     _HMPheFromObject @ 0x1C00481A0 (_HMPheFromObject.c)
 *     NtUserGetHDevName @ 0x1C004C950 (NtUserGetHDevName.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     LeaveCrit @ 0x1C004CFE0 (LeaveCrit.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     HMFreeObject @ 0x1C004F310 (HMFreeObject.c)
 *     HandleInputDestDestruction @ 0x1C0052E4C (HandleInputDestDestruction.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0056F4C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0056F9C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0064CAC (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0064D44 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     RealInternalSetProp @ 0x1C0090860 (RealInternalSetProp.c)
 *     CreateProp @ 0x1C00909F8 (CreateProp.c)
 *     RealInternalRemoveProp @ 0x1C0090B90 (RealInternalRemoveProp.c)
 *     HMMarkObjectDestroy @ 0x1C0096FE0 (HMMarkObjectDestroy.c)
 *     CleanupInputDelegation @ 0x1C009AF40 (CleanupInputDelegation.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00A1CD8 (HMChangeOwnerThreadWorker.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B2974 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     HMRemoveHandleForObject @ 0x1C00B3CF0 (HMRemoveHandleForObject.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B4DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00B84C0 (ChangeAcquireResourceType.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C16A4 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C00E4292 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     HMDestroyUnlockedObject @ 0x1C012C9D0 (HMDestroyUnlockedObject.c)
 *     UserIsUserCritSecInExclusive @ 0x1C012F890 (UserIsUserCritSecInExclusive.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0130400 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C01404B0 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0146140 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0146880 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0146E70 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0147250 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0147BA0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148360 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148D00 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0149F80 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C014AF30 (NtUserSetFeatureReportResponse.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C01B5A44 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IS_USERCRIT_OWNED_EXCLUSIVE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  return ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 8)) == 1;
}
