/*
 * XREFs of PopCoalescingNotify @ 0x1408E6900
 * Callers:
 *     PopPolicyWorkerThread @ 0x14031E2A0 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x14025FAA0 (KeCancelTimer.c)
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x140364318 (PopPrintEx.c)
 *     PopCoalescingSetTimer @ 0x14056EBA4 (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14056EC30 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCoalescingNotify(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  PopAcquirePolicyLock(a1);
  if ( (PopCoalescingState & 2) != 0 )
  {
    KeCancelTimer(&PopCoalescingTimer);
    PopCoalescingState |= 4u;
    PopEnsureCoalescingWorkerWillRun();
    PopPrintEx(3u, (__int64)"PopCoalescing: FLUSH notification sent.\n");
    PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_FLUSH);
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCoalescingSetTimer();
  }
  PopReleasePolicyLock(v2, v1);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
