/*
 * XREFs of PpmParkSnapNodeIdleTime @ 0x1405DD4C0
 * Callers:
 *     PopAccumulateNonActivatedCpuTime @ 0x1405D6B94 (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1405C850C (PpmIdleSnapConcurrencyIdleTime.c)
 */

__int64 __fastcall PpmParkSnapNodeIdleTime(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  KSPIN_LOCK *v8; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
  if ( (unsigned int)v7 < PpmParkNumNodes )
  {
    v8 = *(KSPIN_LOCK **)(PpmParkNodes + 336 * v7 + 72);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8, a2, a3);
  }
  KxReleaseSpinLock(&PpmParkStateLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
