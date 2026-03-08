/*
 * XREFs of MiFreeCombineBlock @ 0x14029DDE0
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiDecrementCombinedPteEx @ 0x14029DAF4 (MiDecrementCombinedPteEx.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeCombineBlock(unsigned __int64 a1)
{
  __int64 v1; // r13
  unsigned __int64 v2; // r14
  __int64 v4; // rsi
  bool v5; // zf
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  _QWORD *v10; // rax
  unsigned int i; // ecx
  __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rbx
  unsigned __int64 v16; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( v1 )
  {
    v14 = v1 & 0xF;
    v15 = 16LL * (unsigned int)v14;
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v15 + v4 + 104));
    RtlAvlRemoveNode(v4 + 16 * (v14 + 6), a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + v4 + 104));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v5 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v16);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_QWORD *)(a1 + 48) &= 0xF07FFFFFFFFFFFFFuLL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 88), &LockHandle);
  v5 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v5 )
  {
    v10 = (_QWORD *)(v2 + 72);
    for ( i = 0; i < 0x37; ++i )
    {
      if ( v10 != (_QWORD *)a1 )
      {
        v12 = *v10;
        v13 = (_QWORD *)v10[1];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v13 != v10 )
          goto LABEL_23;
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
      }
      v10 += 9;
    }
    *(_QWORD *)v2 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 24) = v2;
    if ( !*(_QWORD *)v2 )
    {
      *(_QWORD *)(v4 + 32) = 0LL;
      *(_QWORD *)(v4 + 48) = MiFreeCombinePool;
      *(_QWORD *)(v4 + 56) = v4;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v6 = (unsigned __int64 *)(v4 + 72);
    v7 = *(_QWORD *)(v4 + 72);
    if ( *(_QWORD *)(v7 + 8) != v4 + 72 )
LABEL_23:
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(v7 + 8) = a1;
    *v6 = a1;
  }
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
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v5 = ((unsigned int)result & v22[5]) == 0;
      v22[5] &= result;
      if ( v5 )
        result = KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  __writecr8(OldIrql);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 388), 0xFFFFFFFF);
  return result;
}
