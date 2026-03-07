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
