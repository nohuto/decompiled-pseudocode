/*
 * XREFs of PopCoalescingNotify @ 0x140987090
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361740 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     PopPrintEx @ 0x14032A4CC (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 *     PopCoalescingSetTimer @ 0x14058DA10 (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DA90 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCoalescingNotify(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  PopAcquirePolicyLock(a1);
  if ( (PopCoalescingState & 2) != 0 )
  {
    KeCancelTimer(&PopCoalescingTimer);
    PopCoalescingState |= 4u;
    PopEnsureCoalescingWorkerWillRun();
    PopPrintEx(3LL, (__int64)"PopCoalescing: FLUSH notification sent.\n");
    PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_FLUSH);
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCoalescingSetTimer();
  }
  PopReleasePolicyLock(v2, v1, v3);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
