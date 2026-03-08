/*
 * XREFs of ?CleanupDomainLocks@@YAXXZ @ 0x1C00CB204
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1C031F55C (InitCreateUserCrit.c)
 * Callees:
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0094C10 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 */

void CleanupDomainLocks(void)
{
  CInpLockGuard::Uninitialize(&gDomainProcessInfoLock);
  CInpLockGuard::Uninitialize(&gDomainThreadInfoLock);
  CInpLockGuard::Uninitialize(&gDomainPostLock);
  CInpLockGuard::Uninitialize(&gDomainQueueLock);
  CInpLockGuard::Uninitialize(&gDomainHookLock);
  CInpLockGuard::Uninitialize(&gDomainWinEventLock);
  CInpLockGuard::Uninitialize(&gDomainWindowLock);
  CInpLockGuard::Uninitialize((PVOID *)&gDomainHandleManagerLock);
  CInpLockGuard::Uninitialize(&gDomainClientLibLock);
  CInpLockGuard::Uninitialize(&gDomainPowerTransitionsStateLock);
  CInpLockGuard::Uninitialize(&gDomainDummyLock);
  CInpLockGuard::Uninitialize(&gDomainTlLock);
  CInpLockGuard::Uninitialize(&gDomainRawInputLock);
  CInpLockGuard::Uninitialize(&gDomainAsyncKeyStateLock);
  CInpLockGuard::Uninitialize(&gDomainDesktopLock);
  CInpLockGuard::Uninitialize(&gDomainJobLock);
  CInpLockGuard::Uninitialize(&gDomainForegroundLock);
  CInpLockGuard::Uninitialize(&gDomainActiveLock);
  CInpLockGuard::Uninitialize(&gDomainInputDelegationLock);
  CInpLockGuard::Uninitialize(&gDomainQueueMgmtLock);
  CInpLockGuard::Uninitialize(&gDomainThreadRundownLock);
  CInpLockGuard::Uninitialize(&gDomainEtwLock);
}
