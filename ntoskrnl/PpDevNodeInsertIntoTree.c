/*
 * XREFs of PpDevNodeInsertIntoTree @ 0x1402FB13C
 * Callers:
 *     PipProcessEnumeratedChildDevice @ 0x14068571C (PipProcessEnumeratedChildDevice.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpDevNodeInsertIntoTree(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  *(_DWORD *)(a2 + 152) = *(_DWORD *)(a1 + 152) + 1;
  *(_QWORD *)(a2 + 16) = a1;
  _InterlockedOr(v10, 0);
  v5 = *(_QWORD **)(a1 + 24);
  if ( v5 )
    *v5 = a2;
  else
    *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
