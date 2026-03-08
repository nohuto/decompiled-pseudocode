/*
 * XREFs of ExpDeleteWorkerFactory @ 0x1402918A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     IoFreeMiniCompletionPacket @ 0x1406F4D80 (IoFreeMiniCompletionPacket.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDeleteWorkerFactory(PVOID *a1)
{
  KSPIN_LOCK *v2; // rcx
  _QWORD *v3; // rax
  void *v4; // rsi
  char v5; // bp
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)a1[2];
  memset(&v12, 0, sizeof(v12));
  KeAcquireInStackQueuedSpinLock(v2, &v12);
  *((_BYTE *)a1[2] + 34) = 1;
  v3 = a1[2];
  v4 = (void *)v3[1];
  v5 = *((_BYTE *)v3 + 32);
  KxReleaseQueuedSpinLock(&v12);
  OldIrql = v12.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v12.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (v12.OldIrql + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(a1[6], 0x66577845u);
  ObCloseHandle(a1[5], 0);
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  if ( !v5 )
  {
    IoFreeMiniCompletionPacket(*((_QWORD *)a1[2] + 2));
    ExFreePoolWithTag(a1[2], 0);
  }
}
