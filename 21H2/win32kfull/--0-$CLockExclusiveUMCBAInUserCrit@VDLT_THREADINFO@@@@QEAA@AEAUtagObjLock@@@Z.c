/*
 * XREFs of ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C0EFC
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C0022540 (NtUserSetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1C0024200 (NtUserUnhookWinEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DF44 (zzzEndDeferWinEventNotify.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 *     _GetQueueStatus @ 0x1C015C8FC (_GetQueueStatus.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

tagDomLock **__fastcall CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
        tagDomLock **a1,
        tagDomLock *a2)
{
  unsigned int DLT; // eax
  unsigned int v5; // eax

  DLT = DLT_THREADINFO::getDLT();
  *a1 = (tagDomLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  if ( a2 == (tagDomLock *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 328LL);
  v5 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v5);
  tagDomLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}
