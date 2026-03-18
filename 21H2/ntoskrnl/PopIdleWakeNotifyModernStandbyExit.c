/*
 * XREFs of PopIdleWakeNotifyModernStandbyExit @ 0x140398B2C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x140398BE0 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void PopIdleWakeNotifyModernStandbyExit()
{
  __int64 v0; // rsi
  KIRQL v1; // al
  char *v2; // rdi
  unsigned __int64 v3; // rbx
  LARGE_INTEGER v4; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  LARGE_INTEGER v10; // [rsp+30h] [rbp+8h] BYREF

  v0 = PopWnfCsEnterScenarioId;
  v10.QuadPart = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v2 = (char *)PopIdleWakeContext;
  PopIdleWakeContext = 0LL;
  v3 = v1;
  KxReleaseSpinLock(&PopIdleWakeContextLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
  {
    RtlGetInterruptTimePrecise(&v10);
    v4 = v10;
    PopIdleWakeStopActiveIntervalAccounting(v2);
    *((_QWORD *)v2 + 2539) = v0;
    *((LARGE_INTEGER *)v2 + 2540) = v4;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 20280), DelayedWorkQueue);
  }
}
