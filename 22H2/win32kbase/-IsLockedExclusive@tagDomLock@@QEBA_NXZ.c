/*
 * XREFs of ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     HMFreeObject @ 0x1C004F310 (HMFreeObject.c)
 *     HandleInputDestDestruction @ 0x1C0052E4C (HandleInputDestDestruction.c)
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C005CC48 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0064D44 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     HMMarkObjectDestroy @ 0x1C0096FE0 (HMMarkObjectDestroy.c)
 *     CleanupInputDelegation @ 0x1C009AF40 (CleanupInputDelegation.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00A1CD8 (HMChangeOwnerThreadWorker.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B2974 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     HMRemoveHandleForObject @ 0x1C00B3CF0 (HMRemoveHandleForObject.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0130400 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C01B5A44 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) == 1;
}
