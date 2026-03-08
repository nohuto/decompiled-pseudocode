/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x1403C5540
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x1403C5440 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x140607AC0 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ExpPrepareToWakeResourceShared @ 0x14033A9D0 (ExpPrepareToWakeResourceShared.c)
 *     ExpCommitWakeResourceShared @ 0x14033B220 (ExpCommitWakeResourceShared.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     KeAbCrossThreadRelease @ 0x1403C57F8 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x1403C589C (ExpRotateFastOwnerEntrySublistHead.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 *a2)
{
  char v3; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rsi
  signed __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v12; // r9
  _QWORD *v13; // r12
  KSPIN_LOCK *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned __int8 v23; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  volatile signed __int64 *v32[3]; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  int v34; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+18h] BYREF
  volatile signed __int32 *v36; // [rsp+B8h] [rbp+20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v36 = 0LL;
  v3 = 0;
  v35 = 0LL;
  v34 = 0;
  v32[2] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v12) = 4;
    else
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  v6 = a2[4];
  v32[0] = 0LL;
  v32[1] = (volatile signed __int64 *)(v6 + 1672);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v32, v6 + 1672);
  }
  else
  {
    v7 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)(v6 + 1672), (__int64)v32);
    if ( v7 )
      KxWaitForLockOwnerShip((signed __int64)v32, v7);
  }
  if ( !*((_BYTE *)a2 + 18) )
  {
LABEL_6:
    v8 = (__int64 *)*a2;
    v9 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v9 == a2 )
    {
      *v9 = v8;
      v8[1] = (__int64)v9;
      *a2 = 0LL;
      a2[1] = 0LL;
      KxReleaseQueuedSpinLock(v32);
      if ( KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      goto LABEL_10;
    }
LABEL_42:
    __fastfail(3u);
  }
  v13 = a2 + 5;
  v14 = (KSPIN_LOCK *)(a1 + 96);
  if ( (_QWORD *)*v13 != v13 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v14, &LockHandle);
    LOBYTE(v22) = 1;
    ExpRotateFastOwnerEntrySublistHead(a1, a2, v22);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    goto LABEL_6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v14, &LockHandle);
  ExpPrepareToWakeResourceShared(a1, (__int64 *)&v36, &v35, &v34);
  v15 = a2[7];
  v16 = a2 + 7;
  v17 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v15 + 8) != a2 + 7 )
    goto LABEL_42;
  if ( (_QWORD *)*v17 != v16 )
    goto LABEL_42;
  *v17 = v15;
  *(_QWORD *)(v15 + 8) = v17;
  *v16 = 0LL;
  a2[8] = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  *((_BYTE *)a2 + 18) = 0;
  v18 = (__int64 *)*a2;
  v19 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v19 != a2 )
    goto LABEL_42;
  *v19 = v18;
  v18[1] = (__int64)v19;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v13 = 0LL;
  a2[6] = 0LL;
  KxReleaseQueuedSpinLock(v32);
  if ( v35 )
    v3 = 1;
  ExpCommitWakeResourceShared(v20, &v36, v21, 0, v3);
  if ( KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v27 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
  __writecr8(CurrentIrql);
  if ( *((_BYTE *)a2 + 16) )
    KeAbCrossThreadRelease(a1, *((unsigned __int8 *)a2 + 16), v6);
  ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
LABEL_10:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  result = 16LL;
  a2[3] = 0LL;
  *((_BYTE *)a2 + 16) = 0;
  return result;
}
