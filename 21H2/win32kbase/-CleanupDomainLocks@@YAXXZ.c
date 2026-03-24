/*
 * XREFs of ?CleanupDomainLocks@@YAXXZ @ 0x1C00AF7E4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C011B880 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1C029AC78 (InitCreateUserCrit.c)
 * Callees:
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00749C0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
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
  CInpLockGuard::Uninitialize(&gDomainHandleManagerLock);
  CInpLockGuard::Uninitialize(&gDomainClientLibLock);
  CInpLockGuard::Uninitialize(&gDomainPowerTransitionsStateLock);
  CInpLockGuard::Uninitialize(gDomainDummyLock);
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
