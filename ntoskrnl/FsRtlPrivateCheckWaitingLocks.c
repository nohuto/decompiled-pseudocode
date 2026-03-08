/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x1402C19B4
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1402C16B4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402C1DF4 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402C1F78 (FsRtlFastUnlockSingleShared.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateInsertLock @ 0x1402C247C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402C255C (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402C30F4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     IoGetRequestorProcess @ 0x1402C80C0 (IoGetRequestorProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     FsRtlCompleteLockIrpReal @ 0x140456B80 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateRemoveLock @ 0x14053B568 (FsRtlPrivateRemoveLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall FsRtlPrivateCheckWaitingLocks(__int64 a1, __int64 a2, KIRQL a3)
{
  _QWORD **v3; // rsi
  _QWORD *i; // rdi
  __int64 v7; // rbx
  __int64 v8; // r13
  char v9; // al
  char v10; // r15
  char v11; // al
  char v12; // bl
  __int64 v13; // r15
  char inserted; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+50h] [rbp-10h]
  int v24; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+58h]

  v24 = 0;
  v3 = (_QWORD **)(a2 + 24);
  for ( i = *(_QWORD **)(a2 + 24); i; i = *v3 )
  {
    v7 = i[3];
    v20 = 0LL;
    v25 = v7;
    *(_OWORD *)Object = 0LL;
    v22 = 0LL;
    v8 = *(_QWORD *)(v7 + 184);
    *(_QWORD *)&v20 = *(_QWORD *)(v8 + 24);
    *((_QWORD *)&v20 + 1) = **(_QWORD **)(v8 + 8);
    *((_QWORD *)&v22 + 1) = *((_QWORD *)&v20 + 1) + v20 - 1;
    Object[1] = *(PVOID *)(v8 + 48);
    *(_QWORD *)&v22 = IoGetRequestorProcess((PIRP)v7);
    HIDWORD(Object[0]) = *(_DWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
    {
      LOBYTE(Object[0]) = 1;
      v9 = FsRtlPrivateCheckForExclusiveLockAccess(a2, &v20);
    }
    else
    {
      LOBYTE(Object[0]) = 0;
      v9 = FsRtlPrivateCheckForSharedLockAccess(a2, &v20);
    }
    v10 = v9;
    if ( !v9 )
      goto LABEL_23;
    *(_BYTE *)(v7 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
    v11 = v10;
    v12 = 0;
    v13 = v25;
    if ( !*(_BYTE *)(v25 + 68) )
      v12 = v11;
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v25 + 69));
    if ( v12 )
    {
      inserted = FsRtlPrivateInsertLock(a1, *(_QWORD *)(v8 + 48), &v20);
      *v3 = (_QWORD *)*i;
      if ( i == *(_QWORD **)(a2 + 32) )
        *(_QWORD *)(a2 + 32) = v3;
      KxReleaseSpinLock((volatile signed __int64 *)a2);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (a3 + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(a3);
      ObfReferenceObjectWithTag(Object[1], 0x746C6644u);
      FsRtlCompleteLockIrpReal(*(_QWORD *)(a1 + 8), i[2], v13, inserted == 0 ? 0xC000009A : 0, &v24, Object[1], v20);
      if ( inserted )
      {
        if ( v24 < 0 )
          FsRtlPrivateRemoveLock(a1, &v20, 0LL);
      }
      ObfDereferenceObjectWithTag(Object[1], 0x746C6644u);
      a3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2);
      v3 = (_QWORD **)(a2 + 24);
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, i);
    }
    else
    {
LABEL_23:
      v3 = (_QWORD **)i;
    }
  }
}
