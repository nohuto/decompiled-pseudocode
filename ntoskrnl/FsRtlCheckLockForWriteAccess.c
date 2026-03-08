/*
 * XREFs of FsRtlCheckLockForWriteAccess @ 0x1402C8020
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x1402C80C0 (IoGetRequestorProcess.c)
 *     FsRtlFastCheckLockForWrite @ 0x1402C8110 (FsRtlFastCheckLockForWrite.c)
 */

BOOLEAN __stdcall FsRtlCheckLockForWriteAccess(PFILE_LOCK FileLock, PIRP Irp)
{
  _QWORD *LockInformation; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  LARGE_INTEGER v6; // rax
  ULONG Options; // edi
  PFILE_OBJECT FileObject; // rbx
  PEPROCESS ProcessId; // rax
  LARGE_INTEGER Length; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER StartingByte; // [rsp+50h] [rbp+18h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation || !LockInformation[5] && !LockInformation[4] )
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
  return FsRtlFastCheckLockForWrite(FileLock, &StartingByte, &Length, Options, FileObject, ProcessId);
}
