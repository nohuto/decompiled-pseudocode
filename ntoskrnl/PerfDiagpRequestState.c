/*
 * XREFs of PerfDiagpRequestState @ 0x14085B4AC
 * Callers:
 *     PerfDiagpBootSystemProxyCallback @ 0x14085B450 (PerfDiagpBootSystemProxyCallback.c)
 *     PerfDiagpBootUserProxyCallback @ 0x14085B480 (PerfDiagpBootUserProxyCallback.c)
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x1409DAD40 (PerfDiagpSecondaryLogonProxyCallback.c)
 *     PerfDiagpShutdownProxyCallback @ 0x1409DAD70 (PerfDiagpShutdownProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
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
