/*
 * XREFs of ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0031C90
 * Callers:
 *     DestroyKF @ 0x1C0007338 (DestroyKF.c)
 *     DestroyMonitor @ 0x1C0007AD0 (DestroyMonitor.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0007C2C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     HMUnlockDestroyObject @ 0x1C0007E90 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C0007ED0 (HMDestroyObject.c)
 *     HMFreeObject @ 0x1C0007F10 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C0008390 (HMRemoveHandleForObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0008458 (HMRemoveHandleForObjectWorker.c)
 *     _HMPkheFromObject @ 0x1C0008530 (_HMPkheFromObject.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0008658 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C00093C0 (xxxActivateKeyboardLayout.c)
 *     HMValidateHandle @ 0x1C00424D0 (HMValidateHandle.c)
 *     HandleInputDestDestruction @ 0x1C00427AC (HandleInputDestDestruction.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0042E54 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00454C0 (HMValidateHandleNoSecure.c)
 *     HMCreateHandleForObject @ 0x1C006A5E0 (HMCreateHandleForObject.c)
 *     xxxEnumDisplayMonitors @ 0x1C006FE90 (xxxEnumDisplayMonitors.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C007C488 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     CleanupInputDelegation @ 0x1C0091270 (CleanupInputDelegation.c)
 *     IsHandleEntrySecure @ 0x1C009362C (IsHandleEntrySecure.c)
 *     HMChangeOwnerProcess @ 0x1C009A860 (HMChangeOwnerProcess.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C009C29C (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009EBB4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     HMChangeOwnerThread @ 0x1C00A58E0 (HMChangeOwnerThread.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00B3EE8 (HMValidateSharedHandleNoRip.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00B7E90 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00B8050 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     HMDestroyUnlockedObject @ 0x1C00C0AB0 (HMDestroyUnlockedObject.c)
 *     HMChangeOwnerPheProcess @ 0x1C0113C50 (HMChangeOwnerPheProcess.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0114A30 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C011509C (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 *     ValidateHbwnd @ 0x1C01152C0 (ValidateHbwnd.c)
 *     ValidateHwndMinuserEx @ 0x1C01153B0 (ValidateHwndMinuserEx.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C011B760 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     _anonymous_namespace_::lookForMatchingMinuserHwnd @ 0x1C0138C90 (_anonymous_namespace_--lookForMatchingMinuserHwnd.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C0138DE0 (LookForMatchingBaseWindowPHE.c)
 *     UserDeleteBaseWindowHandle @ 0x1C01390C0 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0139294 (UserFindBaseWindowHandle.c)
 *     HMInitHandleTable @ 0x1C0299B50 (HMInitHandleTable.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(14);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
