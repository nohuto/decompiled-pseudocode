/*
 * XREFs of MiWaitForAvailablePages @ 0x1406512FC
 * Callers:
 *     MiDelayFaultingThread @ 0x140643864 (MiDelayFaultingThread.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall MiWaitForAvailablePages(__int64 a1, LARGE_INTEGER *a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v5; // rbx
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r8
  bool v8; // zf
  void *v9; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+30h] [rbp-28h] BYREF

  memset(&v15, 0, sizeof(v15));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 15872), &v15);
  if ( *(_QWORD *)(a1 + 17216) < 0x420uLL )
  {
    v9 = (void *)(a1 + 15944);
    KeResetEvent((PRKEVENT)(a1 + 15944));
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v15);
    OldIrql = v15.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v15.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (v15.OldIrql + 1));
        v8 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return KeWaitForSingleObject(v9, WrFreePage, 0, 0, a2);
  }
  else
  {
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v15);
    v5 = v15.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && v15.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v6 = KeGetCurrentPrcb();
        v7 = v6->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (v15.OldIrql + 1));
        v8 = (result & v7[5]) == 0;
        v7[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v6);
      }
    }
    __writecr8(v5);
  }
  return result;
}
