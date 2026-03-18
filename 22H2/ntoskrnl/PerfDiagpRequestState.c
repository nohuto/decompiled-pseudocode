/*
 * XREFs of PerfDiagpRequestState @ 0x14085F3AC
 * Callers:
 *     PerfDiagpBootSystemProxyCallback @ 0x14085F350 (PerfDiagpBootSystemProxyCallback.c)
 *     PerfDiagpBootUserProxyCallback @ 0x14085F380 (PerfDiagpBootUserProxyCallback.c)
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x1409DDBE0 (PerfDiagpSecondaryLogonProxyCallback.c)
 *     PerfDiagpShutdownProxyCallback @ 0x1409DDC10 (PerfDiagpShutdownProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void __fastcall PerfDiagpRequestState(int a1)
{
  __int64 Pool2; // rax

  if ( a1 < 8 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1682330192LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = PerfDiagpProxyWorker;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_DWORD *)(Pool2 + 32) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
    }
  }
}
