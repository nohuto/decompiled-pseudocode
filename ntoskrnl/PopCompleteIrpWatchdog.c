/*
 * XREFs of PopCompleteIrpWatchdog @ 0x1402BB9F4
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x1402BB70C (PopDequeueQuerySetIrp.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIrpWatchdogBugcheck @ 0x140580EF4 (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopCompleteIrpWatchdog(__int64 a1)
{
  bool v1; // si
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 288));
  if ( *(_DWORD *)(v2 + 296) == 1 && !KeCancelTimer((PKTIMER)(v2 + 56)) )
    v1 = *(_DWORD *)(v2 + 296) == 1;
  *(_DWORD *)(v2 + 296) = 2;
  result = KxReleaseSpinLock((volatile signed __int64 *)(v2 + 288));
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v1 )
    PopIrpWatchdogBugcheck(v2);
  return result;
}
