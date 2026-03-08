/*
 * XREFs of AlpcpFreeCompletionPacketLookaside @ 0x1402917C0
 * Callers:
 *     AlpcpAssociateIoCompletionPort @ 0x140689FD8 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpDeletePort @ 0x140714C40 (AlpcpDeletePort.c)
 *     AlpcpInitializeCompletionList @ 0x14097672C (AlpcpInitializeCompletionList.c)
 * Callees:
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140291968 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall AlpcpFreeCompletionPacketLookaside(KSPIN_LOCK *P)
{
  int v2; // edi
  __int64 result; // rax
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE v8; // [rsp+20h] [rbp-28h] BYREF

  memset(&v8, 0, sizeof(v8));
  KeAcquireInStackQueuedSpinLock(P, &v8);
  if ( *((_DWORD *)P + 3) )
  {
    v2 = 0;
    *((_DWORD *)P + 6) = 1;
  }
  else
  {
    v2 = 1;
  }
  result = KxReleaseQueuedSpinLock(&v8);
  OldIrql = v8.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v8.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v8.OldIrql + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v2 )
    return AlpcpDeferredFreeCompletionPacketLookaside(P);
  return result;
}
