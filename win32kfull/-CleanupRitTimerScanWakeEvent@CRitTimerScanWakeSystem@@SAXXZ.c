void CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(void)
{
  __int64 v0; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx(
    (CAutoPushLockEx *)&v0,
    (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
  if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
  {
    Win32FreePool(CRitTimerScanWakeSystem::ritTimerScanWakeEvent);
    CRitTimerScanWakeSystem::ritTimerScanWakeEvent = 0LL;
  }
  ExReleasePushLockExclusiveEx(v0, 0LL);
  KeLeaveCriticalRegion();
}
