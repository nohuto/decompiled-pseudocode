/*
 * XREFs of PpmParkSnapNodeIdleTime @ 0x14059AF68
 * Callers:
 *     PopAccumulateNonActivatedCpuTime @ 0x1405973F0 (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmParkGetParkNode @ 0x14040B904 (PpmParkGetParkNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1405830BC (PpmIdleSnapConcurrencyIdleTime.c)
 */

__int64 __fastcall PpmParkSnapNodeIdleTime(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rbx
  _WORD *ParkNode; // rax
  KSPIN_LOCK *v8; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  *a3 = 0LL;
  *a4 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  ParkNode = PpmParkGetParkNode(0);
  if ( ParkNode )
  {
    v8 = (KSPIN_LOCK *)*((_QWORD *)ParkNode + 6);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8, a3, a4);
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PpmParkStateLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)result >= 2u )
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
  __writecr8(v6);
  return result;
}
