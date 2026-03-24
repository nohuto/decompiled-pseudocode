/*
 * XREFs of ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100
 * Callers:
 *     DestroyKF @ 0x1C00087B8 (DestroyKF.c)
 *     DestroyMonitor @ 0x1C0008F50 (DestroyMonitor.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C00090AC (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     HMUnlockDestroyObject @ 0x1C0009310 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C0009350 (HMDestroyObject.c)
 *     HMFreeObject @ 0x1C0009390 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C0009810 (HMRemoveHandleForObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C00098D8 (HMRemoveHandleForObjectWorker.c)
 *     _HMPkheFromObject @ 0x1C00099B0 (_HMPkheFromObject.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0009AD8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C000A840 (xxxActivateKeyboardLayout.c)
 *     HMValidateHandle @ 0x1C0043940 (HMValidateHandle.c)
 *     HandleInputDestDestruction @ 0x1C0043C1C (HandleInputDestDestruction.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C00442C4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0046930 (HMValidateHandleNoSecure.c)
 *     HMCreateHandleForObject @ 0x1C006B090 (HMCreateHandleForObject.c)
 *     xxxEnumDisplayMonitors @ 0x1C0070940 (xxxEnumDisplayMonitors.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C007DB68 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     CleanupInputDelegation @ 0x1C0092110 (CleanupInputDelegation.c)
 *     IsHandleEntrySecure @ 0x1C00943EC (IsHandleEntrySecure.c)
 *     HMChangeOwnerProcess @ 0x1C009B620 (HMChangeOwnerProcess.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C009D05C (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009F974 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     HMChangeOwnerThread @ 0x1C00A66A0 (HMChangeOwnerThread.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00B4228 (HMValidateSharedHandleNoRip.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00B81B0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00B8370 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     HMDestroyUnlockedObject @ 0x1C00C0E40 (HMDestroyUnlockedObject.c)
 *     HMChangeOwnerPheProcess @ 0x1C0113F20 (HMChangeOwnerPheProcess.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0114D00 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C011536C (-GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z.c)
 *     ValidateHbwnd @ 0x1C0115590 (ValidateHbwnd.c)
 *     ValidateHwndMinuserEx @ 0x1C0115680 (ValidateHwndMinuserEx.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C011BA30 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     _anonymous_namespace_::lookForMatchingMinuserHwnd @ 0x1C0138F60 (_anonymous_namespace_--lookForMatchingMinuserHwnd.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C01390B0 (LookForMatchingBaseWindowPHE.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0139390 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0139564 (UserFindBaseWindowHandle.c)
 *     HMInitHandleTable @ 0x1C0298B50 (HMInitHandleTable.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
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
