/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x140290C60
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140291968 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     AlpcpQueueIoCompletion @ 0x1402927FC (AlpcpQueueIoCompletion.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // r14d
  int v6; // r15d
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  void *v16; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  while ( 1 )
  {
    v6 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &LockHandle);
    v7 = *(_DWORD *)(v2 + 16);
    if ( v7 )
    {
      *(_DWORD *)(v2 + 16) = v7 - 1;
    }
    else
    {
      v8 = *(_DWORD *)(v2 + 20);
      if ( v8 )
      {
        v6 = -1;
        *(_DWORD *)(v2 + 20) = v8 - 1;
      }
      else
      {
        v9 = *(_QWORD *)(v2 + 32);
        a1 = 0LL;
        --*(_DWORD *)(v2 + 12);
        *a2 = v9;
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v3 = 1;
      }
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !a1 )
      break;
    if ( ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40)) )
    {
      v16 = *(void **)(v2 + 40);
      AlpcpQueueIoCompletion((_DWORD)v16, *(_QWORD *)(v2 + 48), v6, a1, 0, 0);
      result = ObfDereferenceObjectWithTag(v16, 0x746C6644u);
      break;
    }
  }
  if ( v3 )
    return AlpcpDeferredFreeCompletionPacketLookaside((PVOID)v2);
  return result;
}
