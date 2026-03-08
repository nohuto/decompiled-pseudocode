/*
 * XREFs of KeUpdateGroupSchedulingConstants @ 0x1403AA794
 * Callers:
 *     KiEnableGroupScheduling @ 0x1403AA6A4 (KiEnableGroupScheduling.c)
 *     PspReadDfssConfigurationValues @ 0x1405A12D4 (PspReadDfssConfigurationValues.c)
 * Callees:
 *     KiAssignSchedulingGroupWeights @ 0x1402F1A84 (KiAssignSchedulingGroupWeights.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeUpdateGroupSchedulingConstants(char a1)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a1 )
    KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = 1000000 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[0] + 68) / 0x3E8;
  KiCycleDivisorShortTerm = v2 * (unsigned int)PsDfssShortTermSharingMS;
  KiCycleDivisorLongTerm = v2 * (unsigned int)PsDfssLongTermSharingMS;
  KiCyclesPerGeneration = v2 * (unsigned int)PsDfssGenerationLengthMS;
  KiGroupSchedulingNumerator = PsDfssLongTermFraction1024;
  KiGenerationTicks = 10000
                    * (unsigned __int64)(unsigned int)PsDfssGenerationLengthMS
                    / (unsigned int)KeMaximumIncrement;
  result = KiAssignSchedulingGroupWeights(0, 1, 0LL);
  if ( !a1 )
  {
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
