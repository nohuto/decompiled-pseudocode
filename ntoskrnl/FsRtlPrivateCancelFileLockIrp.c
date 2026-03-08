/*
 * XREFs of FsRtlPrivateCancelFileLockIrp @ 0x14053B390
 * Callers:
 *     FsRtlPrivateLock @ 0x1402C21B0 (FsRtlPrivateLock.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     FsRtlCompleteLockIrpReal @ 0x140456B80 (FsRtlCompleteLockIrpReal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall FsRtlPrivateCancelFileLockIrp(__int64 a1, IRP *a2)
{
  ULONG_PTR Information; // rdi
  char v3; // bp
  ULONG_PTR v4; // rdi
  KIRQL CancelIrql; // bl
  void **i; // rax
  IRP *v8; // rsi
  IRP *v9; // rcx
  volatile signed __int64 *v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  NTSTATUS v20; // [rsp+50h] [rbp+8h] BYREF

  Information = a2->IoStatus.Information;
  v3 = 0;
  v20 = 0;
  v4 = Information + 24;
  CancelIrql = a2->CancelIrql;
  if ( !a1 )
    goto LABEL_3;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CancelIrql = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
  v3 = 1;
  for ( i = (void **)&FsRtlFileLockCancelCollideList; ; i = (void **)(v4 + 24) )
  {
    v8 = (IRP *)*i;
    if ( *i )
      break;
LABEL_7:
    if ( !v3 )
    {
      KxReleaseSpinLock((volatile signed __int64 *)v4);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && CancelIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CancelIrql + 1));
          v15 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CancelIrql);
      return;
    }
    v3 = 0;
    KxAcquireSpinLock((PKSPIN_LOCK)v4);
    KxReleaseSpinLock((volatile signed __int64 *)&FsRtlFileLockCancelCollideLock);
LABEL_3:
    ;
  }
  while ( 1 )
  {
    v9 = *(IRP **)&v8->Type;
    if ( v8->AssociatedIrp.MasterIrp == a2 )
      break;
    i = (void **)v8;
    v8 = *(IRP **)&v8->Type;
    if ( !v9 )
      goto LABEL_7;
  }
  *i = v9;
  if ( v3 || v8 != *(IRP **)(v4 + 32) )
  {
    a2->IoStatus.Information = 0LL;
    v10 = (volatile signed __int64 *)&FsRtlFileLockCancelCollideLock;
    if ( v3 )
      goto LABEL_14;
  }
  else
  {
    *(_QWORD *)(v4 + 32) = i;
    a2->IoStatus.Information = 0LL;
  }
  v10 = (volatile signed __int64 *)v4;
LABEL_14:
  KxReleaseSpinLock(v10);
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CancelIrql <= 0xFu && v11 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CancelIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  __writecr8(CancelIrql);
  FsRtlCompleteLockIrpReal(
    (__int64 (__fastcall *)(__int64, IRP *))v8->MdlAddress,
    *(_QWORD *)&v8->Flags,
    a2,
    -1073741536,
    &v20,
    0LL);
  ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v8);
}
