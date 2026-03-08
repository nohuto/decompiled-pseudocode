/*
 * XREFs of ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003A360
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C000E224 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C003A418 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 *     HandleInputDestDestruction @ 0x1C0079C40 (HandleInputDestDestruction.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0086944 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     HMRemoveHandleForObject @ 0x1C00896E0 (HMRemoveHandleForObject.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C008E99C (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     HMMarkObjectDestroy @ 0x1C00A5550 (HMMarkObjectDestroy.c)
 *     CleanupInputDelegation @ 0x1C00A91F0 (CleanupInputDelegation.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00AEC48 (HMChangeOwnerThreadWorker.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0157D00 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C017C760 (UserDeleteBaseWindowHandle.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C01E3C64 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) == 1;
}
