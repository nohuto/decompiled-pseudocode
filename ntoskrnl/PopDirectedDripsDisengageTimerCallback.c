/*
 * XREFs of PopDirectedDripsDisengageTimerCallback @ 0x1405849F0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1402F2FE8 (PopDirectedDripsClearDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopDirectedDripsDisengageTimerCallback(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  bool v4; // zf
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
  v4 = (*(_DWORD *)(a2 + 20))-- == 1;
  v5 = v3;
  if ( v4 )
    PopDirectedDripsClearDisengageReason(*(_DWORD *)a2);
  result = KxReleaseSpinLock((volatile signed __int64 *)(a2 + 8));
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v4 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v4 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  return result;
}
