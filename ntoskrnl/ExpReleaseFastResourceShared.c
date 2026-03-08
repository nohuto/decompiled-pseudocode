/*
 * XREFs of ExpReleaseFastResourceShared @ 0x1403C5A70
 * Callers:
 *     ExReleaseFastResource @ 0x1403C5940 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceShared @ 0x140607D40 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ExpPrepareToWakeResourceShared @ 0x14033A9D0 (ExpPrepareToWakeResourceShared.c)
 *     ExpCommitWakeResourceShared @ 0x14033B220 (ExpCommitWakeResourceShared.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     ExpReplaceListEntry @ 0x1403C5D60 (ExpReplaceListEntry.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseFastResourceShared(ULONG_PTR BugCheckParameter2, __int64 *a2)
{
  char v3; // si
  unsigned __int8 CurrentIrql; // r14
  _QWORD **v6; // rdi
  volatile __int64 *v7; // rbp
  signed __int64 *v8; // rdx
  _QWORD *v9; // r9
  _QWORD *v10; // rax
  char v11; // al
  _BYTE *v12; // rsi
  __int64 v13; // r9
  __int64 *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // rcx
  __int64 **v28; // rax
  unsigned __int8 v29; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v31; // r8
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // cl
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v39; // [rsp+98h] [rbp+10h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+18h] BYREF
  volatile signed __int32 *v41; // [rsp+A8h] [rbp+20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v41 = 0LL;
  v3 = 0;
  v40 = 0LL;
  v39 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v21) = 4;
    else
      v21 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v21;
  }
  if ( !*((_BYTE *)a2 + 18) )
  {
    v17 = (__int64 *)*a2;
    v18 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v18 == a2 )
    {
      v12 = a2 + 2;
LABEL_12:
      *v18 = v17;
      v17[1] = (__int64)v18;
      *a2 = 0LL;
      a2[1] = 0LL;
      if ( KiIrqlFlags )
      {
        v29 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v33 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_14;
    }
LABEL_46:
    __fastfail(3u);
  }
  v6 = (_QWORD **)(a2 + 5);
  if ( *v6 != v6 )
  {
    v7 = (volatile __int64 *)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7);
    }
    else
    {
      v8 = (signed __int64 *)_InterlockedExchange64(v7, (__int64)&LockHandle);
      if ( v8 )
        KxWaitForLockOwnerShip((signed __int64)&LockHandle, v8);
    }
    v9 = *v6;
    v10 = (_QWORD *)**v6;
    if ( (_QWORD **)(*v6)[1] == v6 && (_QWORD *)v10[1] == v9 )
    {
      *v6 = v10;
      v10[1] = v6;
      *((_BYTE *)v9 + 18) = 1;
      v11 = *((_BYTE *)a2 + 16);
      *((_BYTE *)a2 + 18) = 0;
      v12 = a2 + 2;
      *((_BYTE *)v9 + 16) = v11;
      *((_BYTE *)a2 + 16) = 0;
      ExpReplaceListEntry(a2, v9);
      ExpReplaceListEntry(a2 + 5, v13 + 40);
      v16 = *v14;
      if ( *(__int64 **)(*v14 + 8) == v14 )
      {
        a2[1] = (__int64)v14;
        *a2 = v16;
        *(_QWORD *)(v16 + 8) = a2;
        *v14 = (__int64)a2;
        ExpReplaceListEntry(a2 + 7, v15 + 56);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v17 = (__int64 *)*a2;
        v18 = (__int64 **)a2[1];
        if ( *(__int64 **)(*a2 + 8) == a2 && *v18 == a2 )
          goto LABEL_12;
      }
    }
    goto LABEL_46;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 96), &LockHandle);
  ExpPrepareToWakeResourceShared(BugCheckParameter2, (__int64 *)&v41, &v40, &v39);
  v22 = a2[7];
  v23 = a2 + 7;
  v24 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v22 + 8) != a2 + 7 || (_QWORD *)*v24 != v23 )
    goto LABEL_46;
  *v24 = v22;
  *(_QWORD *)(v22 + 8) = v24;
  *v23 = 0LL;
  a2[8] = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  if ( v40 )
    v3 = 1;
  ExpCommitWakeResourceShared(v25, &v41, v26, 0, v3);
  *((_BYTE *)a2 + 18) = 0;
  v27 = (__int64 *)*a2;
  v28 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v28 != a2 )
    goto LABEL_46;
  *v28 = v27;
  v27[1] = (__int64)v28;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v6 = 0LL;
  a2[6] = 0LL;
  if ( KiIrqlFlags )
  {
    v34 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
    {
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v33 = (v37 & v36[5]) == 0;
      v36[5] &= v37;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(v35);
    }
  }
  __writecr8(CurrentIrql);
  result = *((unsigned __int8 *)a2 + 16);
  v12 = a2 + 2;
  if ( (_BYTE)result )
    result = KeAbPostReleaseEx(BugCheckParameter2, *((unsigned __int8 *)a2 + 16));
LABEL_14:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *v12 = 0;
  a2[3] = 0LL;
  return result;
}
