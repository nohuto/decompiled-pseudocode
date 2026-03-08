/*
 * XREFs of ?DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z @ 0x1C0306CFC
 * Callers:
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0306E54 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkpGetFileLastWriteTime(PCWSTR SourceString, union _LARGE_INTEGER *a2)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v12; // [rsp+98h] [rbp+2Fh]
  __int64 v13; // [rsp+A8h] [rbp+3Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  FileHandle = (void *)-1LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  v3 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = 0LL;
    FileInformation = 0LL;
    v12 = 0LL;
    v5 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    v4 = v5;
    if ( v5 >= 0 )
      a2->QuadPart = v12;
    else
      WdLogSingleEntry2(3LL, v5, 611LL);
    ZwClose(FileHandle);
  }
  else
  {
    WdLogSingleEntry1(3LL, v3);
  }
  return v4;
}
