/*
 * XREFs of PopFxEndDeviceIRPhaseAccounting @ 0x1405CC220
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1409971BC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1405CAD68 (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

__int64 __fastcall PopFxEndDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( qword_140C224F0 )
    PopFxAccumulateDeviceIRPhaseAccounting(a1);
  byte_140C224F8 = 0;
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
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
