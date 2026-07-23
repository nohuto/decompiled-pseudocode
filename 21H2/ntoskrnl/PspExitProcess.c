/*
 * XREFs of PspExitProcess @ 0x14067C00C
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14027349C (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x1402735A8 (PfpLogApplicationEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExCleanTimerResolutionRequest @ 0x14036CF94 (ExCleanTimerResolutionRequest.c)
 *     PfSnEndProcessTrace @ 0x14061954C (PfSnEndProcessTrace.c)
 *     DbgkFlushErrorPort @ 0x14067C7F8 (DbgkFlushErrorPort.c)
 *     PspCallProcessNotifyRoutines @ 0x140684B0C (PspCallProcessNotifyRoutines.c)
 *     PsSetProcessTelemetryAppState @ 0x1406A51B8 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x1406F2A40 (EtwTraceProcess.c)
 */

void __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _DMA_ADAPTER *v8; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((PEPROCESS)a2);
    if ( (*(_DWORD *)(a2 + 2172) & 1) == 0 || *(_QWORD *)(a2 + 2240) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines(a2, 0LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6, v7);
    }
  }
  v8 = *(struct _DMA_ADAPTER **)(a2 + 1464);
  if ( !v8 )
    goto LABEL_7;
  if ( v8 != (struct _DMA_ADAPTER *)1 )
  {
    HalPutDmaAdapter(v8);
LABEL_7:
    *(_QWORD *)(a2 + 1464) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 1124) < 0 )
      ExCleanTimerResolutionRequest((__int64)v8);
    DbgkFlushErrorPort(a2);
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2, 0LL);
    PspProcessUnbindVirtualizedTimers(a2);
  }
}
