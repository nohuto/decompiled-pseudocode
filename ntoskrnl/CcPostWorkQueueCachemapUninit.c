/*
 * XREFs of CcPostWorkQueueCachemapUninit @ 0x140216F94
 * Callers:
 *     CcPostWorkQueue @ 0x1402191C4 (CcPostWorkQueue.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140391D54 (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcPostWorkQueueCachemapUninit(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 *v12; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rdi
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // r11
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = a1[17];
  v5 = 0LL;
  v6 = a1[19];
  v7 = a1[18];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
  {
    LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
  v10 = *(_QWORD **)(a2 + 8);
  if ( *v10 != a2 )
    goto LABEL_22;
  a1[1] = v10;
  *a1 = a2;
  *v10 = a1;
  v11 = (_QWORD *)(v6 + 160);
  *(_QWORD *)(a2 + 8) = a1;
  v12 = *(__int64 **)(v6 + 160);
  if ( v12 == (__int64 *)(v6 + 160) )
    goto LABEL_5;
  v5 = *(_QWORD **)(v6 + 160);
  v15 = *v12;
  if ( (_QWORD *)v5[1] != v11 || *(_QWORD **)(v15 + 8) != v5 )
LABEL_22:
    __fastfail(3u);
  *v11 = v15;
  *(_QWORD *)(v15 + 8) = v11;
  ++*(_DWORD *)(v6 + 176);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1296)) <= 1 )
    __fastfail(0xEu);
  if ( v7 && _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8)) <= 1 )
    __fastfail(0xEu);
LABEL_5:
  result = KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v18 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v5 )
  {
    *v5 = 0LL;
    return ExQueueWorkItemToPartition((ULONG_PTR)v5);
  }
  return result;
}
