/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x14058C200
 * Callers:
 *     PopHandleWakeSources @ 0x140A9DD6C (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140A9DFB8 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140A9E094 (PopProcessDeviceWakeSource.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopReleaseWakeSourceSpinLock(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)a1);
  v3 = *(unsigned __int8 *)(a1 + 16);
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
      v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v6 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
