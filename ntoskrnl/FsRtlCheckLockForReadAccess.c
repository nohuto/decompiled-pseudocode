/*
 * XREFs of FsRtlCheckLockForReadAccess @ 0x1402C7F90
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x1402C80C0 (IoGetRequestorProcess.c)
 *     FsRtlFastCheckLockForRead @ 0x1402C8270 (FsRtlFastCheckLockForRead.c)
 */

BOOLEAN __stdcall FsRtlCheckLockForReadAccess(PFILE_LOCK FileLock, PIRP Irp)
{
  _QWORD *LockInformation; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  LARGE_INTEGER v6; // rax
  ULONG Options; // edi
  struct _FILE_OBJECT *FileObject; // rbx
  PEPROCESS ProcessId; // rax
  LARGE_INTEGER Length; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER StartingByte; // [rsp+50h] [rbp+18h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6.QuadPart = CurrentStackLocation->Parameters.Read.Length;
  StartingByte = CurrentStackLocation->Parameters.Read.ByteOffset;
  Length = v6;
  if ( StartingByte.QuadPart + v6.QuadPart <= *LockInformation )
    return 1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  FileObject = CurrentStackLocation->FileObject;
  ProcessId = IoGetRequestorProcess(Irp);
  return FsRtlFastCheckLockForRead(FileLock, &StartingByte, &Length, Options, FileObject, ProcessId);
}
