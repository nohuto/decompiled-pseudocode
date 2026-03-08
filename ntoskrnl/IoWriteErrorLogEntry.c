/*
 * XREFs of IoWriteErrorLogEntry @ 0x1403C13F0
 * Callers:
 *     IopDisassociateThreadIrp @ 0x140552D34 (IopDisassociateThreadIrp.c)
 *     DifIoWriteErrorLogEntryWrapper @ 0x1405DF860 (DifIoWriteErrorLogEntryWrapper.c)
 *     FsRtlLogCcFlushError @ 0x14093A170 (FsRtlLogCcFlushError.c)
 *     IopLogBlockedDriverEvent @ 0x1409422E4 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140955B40 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140A2D5B4 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140A40210 (MiBadMemoryLogger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  bool v5; // zf
  void *v6; // rcx
  void *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax

  v1 = (char *)ElEntry - 48;
  if ( IopErrorLogDisabledThisBoot )
  {
    v6 = (void *)*((_QWORD *)v1 + 3);
    if ( v6 )
      ObfDereferenceObject(v6);
    v7 = (void *)*((_QWORD *)v1 + 4);
    if ( v7 )
      ObfDereferenceObject(v7);
    _InterlockedExchangeAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    v3 = (_QWORD *)qword_140C5D6C8;
    v4 = v1 + 8;
    if ( *(__int64 **)qword_140C5D6C8 != &IopErrorLogListHead )
      __fastfail(3u);
    v5 = IopErrorLogSessionPending == 0;
    *v4 = &IopErrorLogListHead;
    v4[1] = v3;
    *v3 = v4;
    qword_140C5D6C8 = (__int64)v4;
    if ( v5 )
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.List.Flink = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogSessionPending = 1;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KxReleaseSpinLock((volatile signed __int64 *)&IopErrorLogLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v5 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
}
