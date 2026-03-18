/*
 * XREFs of PopFxUpdateDeviceIRPhaseAccounting @ 0x14058C364
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x14058BAD4 (PopFxSetDripsBlockedByDeviceActivity.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x140588A90 (PopFxAccumulateDeviceIRPhaseAccounting.c)
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
  if ( byte_140C3CB58 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( a1 )
      qword_140C3CB50 = PerformanceCounter.QuadPart;
    else
      PopFxAccumulateDeviceIRPhaseAccounting(PerformanceCounter.QuadPart);
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
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
  __writecr8(v2);
  return result;
}
