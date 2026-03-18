/*
 * XREFs of IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0029368 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     RealInternalRemoveProp @ 0x1C002C720 (RealInternalRemoveProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C002DC3C (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     _HMPheFromObject @ 0x1C002FB80 (_HMPheFromObject.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     HandleInputDestDestruction @ 0x1C003ACA0 (HandleInputDestDestruction.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0042094 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     HMRemoveHandleForObject @ 0x1C0050440 (HMRemoveHandleForObject.c)
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     HMMarkObjectDestroy @ 0x1C008F060 (HMMarkObjectDestroy.c)
 *     CleanupInputDelegation @ 0x1C0097BF0 (CleanupInputDelegation.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B9600 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0144930 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0166AC0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 IS_USERCRIT_OWNED_SHARED()
{
  return ExIsResourceAcquiredSharedLite(gpresUser) != 0;
}
