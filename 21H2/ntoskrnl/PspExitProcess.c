/*
 * XREFs of PspExitProcess @ 0x1406CD37C
 * Callers:
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1402D47BC (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x1402D48C8 (PfpLogApplicationEvent.c)
 *     ExCleanTimerResolutionRequest @ 0x14036CDE4 (ExCleanTimerResolutionRequest.c)
 *     EtwTraceProcess @ 0x14060330C (EtwTraceProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x14061AEAC (PspCallProcessNotifyRoutines.c)
 *     PfSnEndProcessTrace @ 0x1406BA3DC (PfSnEndProcessTrace.c)
 *     DbgkFlushErrorPort @ 0x1406CDB68 (DbgkFlushErrorPort.c)
 *     PsSetProcessTelemetryAppState @ 0x1406CDED4 (PsSetProcessTelemetryAppState.c)
 */

void __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _DMA_ADAPTER *v5; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2);
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
