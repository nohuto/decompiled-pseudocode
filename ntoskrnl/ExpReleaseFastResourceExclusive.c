/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x1403C5EA4
 * Callers:
 *     ExReleaseFastResource @ 0x1403C5940 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceExclusive @ 0x140607BF0 (ExReleaseFastResourceExclusive.c)
 *     ExReleaseFastResourceShared @ 0x140607D40 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x1403C589C (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpCommitWakeResourceExclusive @ 0x1403C60E0 (ExpCommitWakeResourceExclusive.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x1403C611C (ExpPrepareToWakeResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  int v5; // r13d
  _QWORD *v6; // r14
  KSPIN_LOCK *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _BYTE *v16; // rdi
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  int v32; // [rsp+98h] [rbp+48h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+58h] BYREF

  v34 = 0LL;
  v33 = 0LL;
  v32 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = LockHandle.OldIrql + 1;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v19) = 4;
    if ( CurrentIrql != 2 )
      v19 = (-1LL << ((unsigned __int8)v5 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v19;
  }
  if ( *(_BYTE *)(a2 + 18) )
  {
    v6 = (_QWORD *)(a2 + 40);
    v7 = (KSPIN_LOCK *)(BugCheckParameter2 + 96);
    if ( (_QWORD *)*v6 == v6 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v7, &LockHandle);
      ExpPrepareToWakeResourceExclusive(BugCheckParameter2, &v34, &v33, &v32);
      v8 = (_QWORD *)(a2 + 56);
      v9 = *(_QWORD *)(a2 + 56);
      v10 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v9 + 8) == a2 + 56 && (_QWORD *)*v10 == v8 )
      {
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        *v8 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v13 = 0;
        if ( v33 )
          v13 = v5;
        ExpCommitWakeResourceExclusive(v11, (unsigned int)&v34, v12, 0, v13);
        *(_BYTE *)(a2 + 18) = 0;
        v14 = *(_QWORD *)a2;
        v15 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v15 == a2 )
        {
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *v6 = 0LL;
          *(_QWORD *)(a2 + 48) = 0LL;
          if ( KiIrqlFlags )
          {
            v27 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0
              && v27 <= 0xFu
              && CurrentIrql <= 0xFu
              && v27 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v29 = CurrentPrcb->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + CurrentIrql));
              v26 = (v30 & v29[5]) == 0;
              v29[5] &= v30;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(CurrentIrql);
          v16 = (_BYTE *)(a2 + 16);
          result = *(unsigned __int8 *)(a2 + 16);
          if ( (_BYTE)result )
            result = KeAbPostReleaseEx(BugCheckParameter2, *(unsigned __int8 *)(a2 + 16));
          goto LABEL_13;
        }
      }
LABEL_25:
      __fastfail(3u);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v7, &LockHandle);
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, v5);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v20 = *(_QWORD *)a2;
    v21 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v21 != a2 )
      goto LABEL_25;
  }
  else
  {
    v20 = *(_QWORD *)a2;
    v21 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v21 != a2 )
      goto LABEL_25;
  }
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + CurrentIrql));
      v26 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  v16 = (_BYTE *)(a2 + 16);
LABEL_13:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_QWORD *)(a2 + 24) = 0LL;
  *v16 = 0;
  return result;
}
