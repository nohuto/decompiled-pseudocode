/*
 * XREFs of PopFxUpdateDeviceIRPhaseAccounting @ 0x1405CE584
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1405CE144 (PopFxSetDripsBlockedByDeviceActivity.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1405CAD68 (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

__int64 __fastcall PopFxUpdateDeviceIRPhaseAccounting(char a1)
{
  unsigned __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( byte_140C224F8 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( a1 )
      qword_140C224F0 = PerformanceCounter.QuadPart;
    else
      PopFxAccumulateDeviceIRPhaseAccounting(PerformanceCounter.QuadPart);
  }
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
