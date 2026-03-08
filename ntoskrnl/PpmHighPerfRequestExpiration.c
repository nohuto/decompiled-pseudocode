/*
 * XREFs of PpmHighPerfRequestExpiration @ 0x1403B01E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPowerRequestReferenceRelease @ 0x1402BA084 (PopPowerRequestReferenceRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PpmHighPerfRequestExpiration()
{
  unsigned __int64 v0; // rdi
  unsigned int i; // ebx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( MEMORY[0xFFFFF78000000008] >= (unsigned __int64)PpmHighPerfDeferredEndTime )
  {
    for ( i = 0; i < PpmHighPerfDeferredEndCount; ++i )
      PopPowerRequestReferenceRelease(PpmHighPerfPowerRequest, 4u);
    PpmHighPerfDeferredEndCount = 0;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PpmHighPerfRequestLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v0 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v5 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v0);
  return result;
}
