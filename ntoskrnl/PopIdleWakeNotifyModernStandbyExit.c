/*
 * XREFs of PopIdleWakeNotifyModernStandbyExit @ 0x14059B664
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14059B80C (PopIdleWakeStopActiveIntervalAccounting.c)
 */

void PopIdleWakeNotifyModernStandbyExit()
{
  __int64 v0; // rsi
  KIRQL v1; // al
  char *v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  LARGE_INTEGER v9; // rbx
  LARGE_INTEGER v10; // [rsp+30h] [rbp+8h] BYREF

  v0 = PopWnfCsEnterScenarioId;
  v10.QuadPart = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v2 = (char *)PopIdleWakeContext;
  PopIdleWakeContext = 0LL;
  v3 = v1;
  KxReleaseSpinLock((volatile signed __int64 *)&PopIdleWakeContextLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v2 )
  {
    RtlGetInterruptTimePrecise(&v10);
    v9 = v10;
    PopIdleWakeStopActiveIntervalAccounting(v2);
    *((_QWORD *)v2 + 4758) = v0;
    *((LARGE_INTEGER *)v2 + 4759) = v9;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 38032), DelayedWorkQueue);
  }
}
