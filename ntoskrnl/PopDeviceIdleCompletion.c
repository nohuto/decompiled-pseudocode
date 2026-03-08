/*
 * XREFs of PopDeviceIdleCompletion @ 0x140584F70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopDeviceIdleCompletion()
{
  KIRQL v0; // al
  bool v1; // zf
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v1 = dword_140D17880-- == 1;
  v2 = v0;
  if ( v1 && PopDeviceIdleSync )
  {
    KeSetEvent(PopDeviceIdleSync, 0, 0);
    PopDeviceIdleSync = 0LL;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
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
      v1 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v1 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
