/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1406C89B0
 * Callers:
 *     NtQueryDirectoryFile @ 0x1406C76D0 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1406C8A70 (BuildQueryDirectoryIrp.c)
 */

NTSTATUS __cdecl NtQueryDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  NTSTATUS result; // eax
  _DWORD *v11; // r9
  SIZE_T v12; // [rsp+38h] [rbp-49h]
  __int64 v13; // [rsp+40h] [rbp-41h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char v15; // [rsp+88h] [rbp+7h] BYREF
  char v16; // [rsp+89h] [rbp+8h] BYREF
  __int64 v17; // [rsp+90h] [rbp+Fh] BYREF
  PIRP Irp; // [rsp+98h] [rbp+17h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+1Fh] BYREF

  DeviceObject = 0LL;
  Irp = 0LL;
  v17 = 0LL;
  LODWORD(v13) = FileInformationClass;
  LODWORD(v12) = Length;
  v15 = 0;
  v16 = 0;
  result = BuildQueryDirectoryIrp(
             (int)FileHandle,
             (int)Event,
             (int)ApcRoutine,
             (int)ApcContext,
             (__int64)IoStatusBlock,
             FileInformation,
             v12,
             v13,
             QueryFlags,
             (__int64)FileName,
             v14,
             (__int64)&v15,
             (__int64)&DeviceObject,
             (__int64)&Irp,
             (__int64)&v17,
             (PIRP)&v16);
  if ( !result )
  {
    LOBYTE(v11) = 1;
    return IopSynchronousServiceTail(DeviceObject, Irp, v17, v11, v16, v15, 2u);
  }
  return result;
}
