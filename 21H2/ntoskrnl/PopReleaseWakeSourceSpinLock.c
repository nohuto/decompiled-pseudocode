/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x1403965EC
 * Callers:
 *     PopProcessDeviceWakeSource @ 0x140A51700 (PopProcessDeviceWakeSource.c)
 *     PopIsMostRecentWakeAttended @ 0x140A5179C (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140A517EC (PopNewWakeInfo.c)
 *     PopHandleWakeSources @ 0x140A51888 (PopHandleWakeSources.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = a1->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
