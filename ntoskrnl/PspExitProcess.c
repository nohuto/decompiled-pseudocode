/*
 * XREFs of PspExitProcess @ 0x1407E7B3C
 * Callers:
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     ExCleanTimerResolutionRequest @ 0x140201AD0 (ExCleanTimerResolutionRequest.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14035BBCC (PspProcessUnbindVirtualizedTimers.c)
 *     PspCallProcessNotifyRoutines @ 0x1407D2E14 (PspCallProcessNotifyRoutines.c)
 *     PfProcessExitNotification @ 0x1407E6B80 (PfProcessExitNotification.c)
 *     DbgkFlushErrorPort @ 0x1407E7AEC (DbgkFlushErrorPort.c)
 *     PsSetProcessTelemetryAppState @ 0x1407E7C28 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x1407E93B4 (EtwTraceProcess.c)
 */

char __fastcall PspExitProcess(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v5; // eax
  void *v6; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState((PRKPROCESS)a2);
    if ( (PerfGlobalGroupMask[0] & 1) != 0 )
      EtwTraceProcess((PRKPROCESS)a2);
    v5 = *(_DWORD *)(a2 + 2172);
    if ( (v5 & 1) == 0 || *(_QWORD *)(a2 + 2240) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines((struct _EX_RUNDOWN_REF *)a2, 0LL, 0);
      LOBYTE(v5) = KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v6 = *(void **)(a2 + 1464);
  if ( !v6 )
    goto LABEL_7;
  if ( v6 != (void *)1 )
  {
    LOBYTE(v5) = ObfDereferenceObject(v6);
LABEL_7:
    *(_QWORD *)(a2 + 1464) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 1124) < 0 )
      ExCleanTimerResolutionRequest((__int64)v6);
    DbgkFlushErrorPort(a2);
    PfProcessExitNotification(a2);
    LOBYTE(v5) = PspProcessUnbindVirtualizedTimers(a2);
  }
  return v5;
}
