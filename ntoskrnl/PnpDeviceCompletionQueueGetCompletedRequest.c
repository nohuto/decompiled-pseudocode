/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x1403A0050
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1406CD318 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  KeWaitForSingleObject(&byte_140C5C688, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C5C6A8);
  v1 = qword_140C5C678;
  v2 = v0;
  v3 = *(_QWORD *)qword_140C5C678;
  if ( *(__int64 **)(qword_140C5C678 + 8) != &qword_140C5C678 || *(_QWORD *)(v3 + 8) != qword_140C5C678 )
    __fastfail(3u);
  qword_140C5C678 = *(_QWORD *)qword_140C5C678;
  *(_QWORD *)(v3 + 8) = &qword_140C5C678;
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C5C6A8);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return v1;
}
