/*
 * XREFs of IopErrorLogQueueRequest @ 0x14094E654
 * Callers:
 *     IopErrorLogThread @ 0x1408704E0 (IopErrorLogThread.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x140250440 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *Pool2; // rax
  struct _KDPC *Dpc; // rdi

  Pool2 = (struct _KDPC *)ExAllocatePool2(64LL, 128LL, 1279618889LL);
  Dpc = Pool2;
  if ( Pool2 )
  {
    KeInitializeDpc(Pool2, (PKDEFERRED_ROUTINE)IopErrorLogDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)&Dpc[1], NotificationTimer);
    LOBYTE(Pool2) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)-300000000LL, 0, 0x7D0u, Dpc);
  }
  else
  {
    IopErrorLogSessionPending = 0;
  }
  return (char)Pool2;
}
