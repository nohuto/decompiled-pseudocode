/*
 * XREFs of PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140202C70
 * Callers:
 *     PipEnumerateDevice @ 0x140688710 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140793334 (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall PnpDeviceCompletionQueueAddDispatchedRequest(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rax
  BOOL v5; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C5C6A8);
  v4 = (_QWORD *)qword_140C5C668;
  v5 = *(_QWORD *)&PnpDeviceCompletionQueue == (_QWORD)&PnpDeviceCompletionQueue;
  if ( *(ULONG **)qword_140C5C668 != &PnpDeviceCompletionQueue )
    __fastfail(3u);
  *a2 = &PnpDeviceCompletionQueue;
  a2[1] = v4;
  *v4 = a2;
  ++dword_140C5C670;
  qword_140C5C668 = (__int64)a2;
  KxReleaseSpinLock(&qword_140C5C6A8);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return v5;
}
