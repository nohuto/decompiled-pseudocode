/*
 * XREFs of PspExitProcess @ 0x14062FC1C
 * Callers:
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14026DF04 (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x14026E010 (PfpLogApplicationEvent.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExCleanTimerResolutionRequest @ 0x14036C734 (ExCleanTimerResolutionRequest.c)
 *     EtwTraceProcess @ 0x14060330C (EtwTraceProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x14061B30C (PspCallProcessNotifyRoutines.c)
 *     PsSetProcessTelemetryAppState @ 0x14062B6D8 (PsSetProcessTelemetryAppState.c)
 *     PfSnEndProcessTrace @ 0x14062E760 (PfSnEndProcessTrace.c)
 *     DbgkFlushErrorPort @ 0x140630408 (DbgkFlushErrorPort.c)
 */

void __fastcall PspExitProcess(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _DMA_ADAPTER *v5; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState((_QWORD *)a2, 3);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((PEPROCESS)a2, 770);
    if ( (*(_DWORD *)(a2 + 2172) & 1) == 0 || *(_QWORD *)(a2 + 2240) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines((struct _EX_RUNDOWN_REF *)a2, 0LL, 0);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v5 = *(struct _DMA_ADAPTER **)(a2 + 1464);
  if ( !v5 )
    goto LABEL_7;
  if ( v5 != (struct _DMA_ADAPTER *)1 )
  {
    HalPutDmaAdapter(v5);
LABEL_7:
    *(_QWORD *)(a2 + 1464) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 1124) < 0 )
      ExCleanTimerResolutionRequest((__int64)v5);
    DbgkFlushErrorPort(a2);
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2, 0LL);
    PspProcessUnbindVirtualizedTimers(a2);
  }
}
