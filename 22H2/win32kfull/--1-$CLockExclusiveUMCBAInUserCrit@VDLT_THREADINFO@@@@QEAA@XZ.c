/*
 * XREFs of ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00C0DC8
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00224A0 (NtUserSetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1C0024160 (NtUserUnhookWinEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 *     _GetQueueStatus @ 0x1C015C33C (_GetQueueStatus.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
        tagDomLock **a1)
{
  unsigned int DLT; // eax

  DLT = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(DLT);
  tagObjLock::UnLockExclusive(a1[1]);
  tagDomLock::UnLockShared(*a1);
}
