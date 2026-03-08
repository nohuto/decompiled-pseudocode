/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive @ 0x1406082E4
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x1403C5440 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x1406079A0 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x140607AC0 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAbCrossThreadRelease @ 0x1403C57F8 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x1403C589C (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpCommitWakeResourceExclusive @ 0x1403C60E0 (ExpCommitWakeResourceExclusive.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x1403C611C (ExpPrepareToWakeResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseDisownedFastResourceExclusive(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  char v5; // r14
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  __int64 v8; // r13
  _QWORD *v9; // r14
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  int v32; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+50h] BYREF
  volatile signed __int32 *v34; // [rsp+B8h] [rbp+58h] BYREF

  v34 = 0LL;
  v33 = 0LL;
  v32 = 0;
  memset(&v30, 0, sizeof(v30));
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = v30.OldIrql + 1;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v7 = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (v5 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v7;
  }
  v8 = *(_QWORD *)(a2 + 32);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1672), &LockHandle);
  if ( !*(_BYTE *)(a2 + 18) )
  {
LABEL_10:
    v11 = *(_QWORD *)a2;
    v12 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v12 == a2 )
    {
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      if ( KiIrqlFlags )
      {
        v13 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0
          && v13 <= 0xFu
          && CurrentIrql <= 0xFu
          && v13 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (v5 + CurrentIrql));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      goto LABEL_34;
    }
LABEL_35:
    __fastfail(3u);
  }
  v9 = (_QWORD *)(a2 + 40);
  v10 = (KSPIN_LOCK *)(a1 + 96);
  if ( (_QWORD *)*v9 != v9 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v10, &v30);
    v5 = 1;
    ExpRotateFastOwnerEntrySublistHead(a1, a2, 1);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v30);
    goto LABEL_10;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v10, &v30);
  ExpPrepareToWakeResourceExclusive(a1, (__int64 *)&v34, &v33, &v32);
  v18 = (_QWORD *)(a2 + 56);
  v19 = *(_QWORD *)(a2 + 56);
  v20 = *(_QWORD **)(a2 + 64);
  if ( *(_QWORD *)(v19 + 8) != a2 + 56 )
    goto LABEL_35;
  if ( (_QWORD *)*v20 != v18 )
    goto LABEL_35;
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  *v18 = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v30);
  *(_BYTE *)(a2 + 18) = 0;
  v21 = *(_QWORD *)a2;
  v22 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v22 != a2 )
    goto LABEL_35;
  *v22 = v21;
  *(_QWORD *)(v21 + 8) = v22;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v9 = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  ExpCommitWakeResourceExclusive(v23, &v34, v24, 0, v33 != 0);
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)v26);
    }
  }
  __writecr8(CurrentIrql);
  if ( *(_BYTE *)(a2 + 16) )
    KeAbCrossThreadRelease(a1, *(unsigned __int8 *)(a2 + 16), v8);
  ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 32), 0x746C6644u);
LABEL_34:
  result = 16LL;
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
