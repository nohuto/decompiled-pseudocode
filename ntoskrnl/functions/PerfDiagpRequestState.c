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
