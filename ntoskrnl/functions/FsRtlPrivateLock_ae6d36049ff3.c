BOOLEAN __stdcall FsRtlPrivateLock(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock,
        PIO_STATUS_BLOCK Iosb,
        PIRP Irp,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  PFILE_OBJECT v14; // r15
  volatile signed __int64 *v16; // rsi
  char *LockInformation; // r14
  LONGLONG QuadPart; // r8
  char *v19; // rcx
  char v20; // al
  PIO_STATUS_BLOCK v21; // rbx
  _QWORD *v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  __int64 v29; // r8
  NTSTATUS v30; // edi
  int NewIrql; // [rsp+40h] [rbp-78h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+48h] [rbp-70h] BYREF
  char *v33; // [rsp+50h] [rbp-68h]
  volatile signed __int64 *v34; // [rsp+58h] [rbp-60h]
  __int128 v35; // [rsp+60h] [rbp-58h] BYREF
  __int128 v36; // [rsp+70h] [rbp-48h]
  __int128 v37; // [rsp+80h] [rbp-38h]

  v14 = FileObject;
  BYTE2(NewIrql) = 0;
  v33 = 0LL;
  v16 = 0LL;
  v34 = 0LL;
  LOBYTE(NewIrql) = -1;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  LockInformation = (char *)FileLock->LockInformation;
  v33 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
      goto LABEL_14;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (char *)FileLock->LockInformation;
    v33 = LockInformation;
  }
  *(LARGE_INTEGER *)&v35 = *FileOffset;
  QuadPart = Length->QuadPart;
  *((_QWORD *)&v35 + 1) = QuadPart;
  *((_QWORD *)&v37 + 1) = QuadPart + v35 - 1;
  DWORD1(v36) = Key;
  *((_QWORD *)&v36 + 1) = v14;
  *(_QWORD *)&v37 = ProcessId;
  LOBYTE(v36) = ExclusiveLock;
  v16 = (volatile signed __int64 *)(LockInformation + 24);
  v34 = (volatile signed __int64 *)(LockInformation + 24);
  if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)v35 && QuadPart )
  {
    v21 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  BYTE2(NewIrql) = 1;
  LOBYTE(NewIrql) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)LockInformation + 3);
  v19 = LockInformation + 24;
  if ( ExclusiveLock )
    v20 = FsRtlPrivateCheckForExclusiveLockAccess(v19, &v35);
  else
    v20 = FsRtlPrivateCheckForSharedLockAccess(v19, &v35);
  HIBYTE(NewIrql) = v20;
  if ( v20 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, v14, &v35) )
    {
      v21 = Iosb;
      Iosb->Status = 0;
LABEL_10:
      BYTE1(NewIrql) = 1;
      goto LABEL_29;
    }
    if ( Irp )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, NewIrql);
      RtlRaiseStatus(-1073741670);
    }
  }
  else
  {
    if ( FailImmediately )
    {
      v21 = Iosb;
      Iosb->Status = -1073741739;
      goto LABEL_10;
    }
    if ( Irp )
    {
      v22 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
      if ( !v22 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, NewIrql);
        RtlRaiseStatus(-1073741670);
      }
      v22[3] = Irp;
      v22[2] = Context;
      v22[1] = *((_QWORD *)LockInformation + 1);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->Control |= 1u;
      *v22 = 0LL;
      if ( *((_QWORD *)LockInformation + 6) )
        **((_QWORD **)LockInformation + 7) = v22;
      else
        *((_QWORD *)LockInformation + 6) = v22;
      *((_QWORD *)LockInformation + 7) = v22;
      Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
      _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
      if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
      {
        Irp->CancelIrql = NewIrql;
        FsRtlPrivateCancelFileLockIrp(0LL, Irp);
        BYTE2(NewIrql) = 0;
      }
      v21 = Iosb;
      Iosb->Status = 259;
      LockInformation = v33;
      v16 = v34;
      goto LABEL_10;
    }
  }
LABEL_14:
  BYTE1(NewIrql) = 0;
  v21 = Iosb;
LABEL_29:
  if ( BYTE2(NewIrql) )
  {
    KxReleaseSpinLock(v16);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)NewIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)NewIrql + 1));
        v28 = (v27 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        LockInformation = v33;
      }
    }
    __writecr8((unsigned __int8)NewIrql);
  }
  if ( Irp && v21->Status != 259 )
  {
    LODWORD(CurrentStackLocation) = 0;
    ObfReferenceObjectWithTag(v14, 0x746C6644u);
    FsRtlCompleteLockIrpReal(
      *((_QWORD *)LockInformation + 1),
      Context,
      Irp,
      (unsigned int)v21->Status,
      &CurrentStackLocation,
      v14,
      NewIrql);
    v30 = (int)CurrentStackLocation;
    if ( (int)CurrentStackLocation < 0 && v21->Status >= 0 )
    {
      LOBYTE(v29) = 1;
      FsRtlPrivateRemoveLock(LockInformation, &v35, v29);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v21->Status = v30;
  }
  return BYTE1(NewIrql);
}
