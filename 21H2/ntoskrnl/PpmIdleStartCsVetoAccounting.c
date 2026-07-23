/*
 * XREFs of PpmIdleStartCsVetoAccounting @ 0x1405670DC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140566B9C (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 PpmIdleStartCsVetoAccounting()
{
  __int64 result; // rax
  KIRQL v1; // al
  __int64 v2; // r8
  __int64 v3; // rdi
  unsigned __int64 i; // rbx
  __int64 v5; // rcx
  unsigned int j; // edx
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  result = PpmPlatformStates;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v2 = PpmPlatformStates;
    v3 = 0LL;
    for ( i = v1; (unsigned int)v3 < *(_DWORD *)PpmPlatformStates; v3 = (unsigned int)(v3 + 1) )
    {
      v5 = 384 * v3 + v2 + 80;
      for ( j = 0; j < *(_DWORD *)(v5 + 28); *(_QWORD *)(*(_QWORD *)(v5 + 32) + (v7 << 6) + 56) = 0LL )
        v7 = j++;
      PpmIdleCsVetoAccountingUpdateBlock(v5, 4, 1);
      v2 = PpmPlatformStates;
    }
    KxReleaseSpinLock(&PpmIdleVetoLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)i <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
          v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v10 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(i);
  }
  return result;
}
