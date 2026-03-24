/*
 * XREFs of PopHaltDeviceIdle @ 0x1403886C8
 * Callers:
 *     PoInitializeBroadcast @ 0x140778138 (PoInitializeBroadcast.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS PopHaltDeviceIdle()
{
  __int128 *v0; // rbx
  unsigned __int64 v1; // rdi
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf
  __int128 v6; // [rsp+30h] [rbp-20h] BYREF
  char *v7; // [rsp+40h] [rbp-10h]

  v0 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140C505B4 = 1;
  if ( dword_140C505B0 )
  {
    DWORD1(v6) = 0;
    v7 = (char *)&v6 + 8;
    v0 = &v6;
    LOWORD(v6) = 1;
    *((_QWORD *)&v6 + 1) = (char *)&v6 + 8;
    PopDeviceIdleSync = (PRKEVENT)&v6;
    BYTE2(v6) = 6;
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  result = KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v1 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v5 = (result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v5 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  if ( v0 )
    return KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
  return result;
}
