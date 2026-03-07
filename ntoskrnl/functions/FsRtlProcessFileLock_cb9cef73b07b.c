NTSTATUS __stdcall FsRtlProcessFileLock(PFILE_LOCK FileLock, PIRP Irp, PVOID Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _KPROCESS *v7; // rax
  NTSTATUS v8; // eax
  struct _KPROCESS *v9; // rax
  struct _KPROCESS *ProcessId; // rax
  __int64 (__fastcall *CompleteLockIrpRoutine)(__int64, IRP *); // rcx
  BOOLEAN v12; // di
  BOOLEAN v13; // bl
  struct _KPROCESS *RequestorProcess; // rax
  struct _IO_STATUS_BLOCK Iosb; // [rsp+60h] [rbp-10h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+A8h] [rbp+38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Iosb.Pointer = 0LL;
  Iosb.Information = 0LL;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 1u:
      v12 = CurrentStackLocation->Flags & 1;
      v13 = (CurrentStackLocation->Flags & 2) != 0;
      FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      RequestorProcess = IoGetRequestorProcess(Irp);
      FsRtlPrivateLock(
        FileLock,
        CurrentStackLocation->FileObject,
        &FileOffset,
        CurrentStackLocation->Parameters.LockControl.Length,
        RequestorProcess,
        CurrentStackLocation->Parameters.Create.Options,
        v12,
        v13,
        &Iosb,
        Irp,
        Context,
        0);
      return Iosb.Status;
    case 2u:
      FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      ProcessId = IoGetRequestorProcess(Irp);
      v8 = FsRtlFastUnlockSingle(
             FileLock,
             CurrentStackLocation->FileObject,
             &FileOffset,
             CurrentStackLocation->Parameters.LockControl.Length,
             ProcessId,
             CurrentStackLocation->Parameters.Create.Options,
             Context,
             0);
      goto LABEL_10;
    case 3u:
      v9 = IoGetRequestorProcess(Irp);
      v8 = FsRtlPrivateFastUnlockAll(
             (__int64)FileLock,
             (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
             v9,
             0,
             0,
             (__int64)Context);
      goto LABEL_10;
    case 4u:
      v7 = IoGetRequestorProcess(Irp);
      v8 = FsRtlPrivateFastUnlockAll(
             (__int64)FileLock,
             (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
             v7,
             CurrentStackLocation->Parameters.Create.Options,
             1,
             (__int64)Context);
LABEL_10:
      CompleteLockIrpRoutine = (__int64 (__fastcall *)(__int64, IRP *))FileLock->CompleteLockIrpRoutine;
      Iosb.Status = v8;
      FsRtlCompleteLockIrpReal(CompleteLockIrpRoutine, (__int64)Context, Irp, v8, (NTSTATUS *)&Iosb.0, 0LL);
      return Iosb.Status;
  }
  Irp->IoStatus.Status = -1073741808;
  IofCompleteRequest(Irp, 1);
  Iosb.Status = -1073741808;
  return Iosb.Status;
}
