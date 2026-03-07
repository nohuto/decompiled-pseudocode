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
