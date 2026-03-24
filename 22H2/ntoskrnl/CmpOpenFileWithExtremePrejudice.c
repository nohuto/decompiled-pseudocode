/*
 * XREFs of CmpOpenFileWithExtremePrejudice @ 0x140873038
 * Callers:
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1403F9F00 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x1403FA080 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1403FA1C0 (ZwQueryAttributesFile.c)
 *     ZwCreateFile @ 0x1403FA4C0 (ZwCreateFile.c)
 */

NTSTATUS __fastcall CmpOpenFileWithExtremePrejudice(
        PHANDLE FileHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG CreateOptions)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE FileHandlea; // [rsp+60h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlocka; // [rsp+68h] [rbp-29h] BYREF
  _OWORD FileInformation[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v14; // [rsp+98h] [rbp+7h]

  FileHandlea = 0LL;
  *FileHandle = 0LL;
  v14 = 0LL;
  IoStatusBlocka = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  result = ZwQueryAttributesFile((__int64)ObjectAttributes, (__int64)FileInformation);
  if ( result >= 0 )
  {
    LODWORD(v14) = v14 & 0xFFFFFFFE;
    result = ZwOpenFile(&FileHandlea, 0x100u, ObjectAttributes, &IoStatusBlocka, 7u, 0x4000u);
    if ( result >= 0 )
    {
      v10 = ZwSetInformationFile(FileHandlea, &IoStatusBlocka, FileInformation, 0x28u, FileBasicInformation);
      ZwClose(FileHandlea);
      if ( v10 >= 0 )
        return ZwCreateFile(
                 FileHandle,
                 3u,
                 ObjectAttributes,
                 IoStatusBlock,
                 0LL,
                 FileAttributes,
                 0,
                 1u,
                 CreateOptions,
                 0LL,
                 0);
      else
        return v10;
    }
  }
  return result;
}
