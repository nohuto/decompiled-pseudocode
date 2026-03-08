/*
 * XREFs of ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C0077C24
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 *     EditionBaseDriverUnloadUninitialize @ 0x1C00E23C0 (EditionBaseDriverUnloadUninitialize.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0022210 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

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
