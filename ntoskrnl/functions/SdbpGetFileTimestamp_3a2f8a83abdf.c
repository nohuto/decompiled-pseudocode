__int64 __fastcall SdbpGetFileTimestamp(_QWORD *a1, const WCHAR *a2)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  __int128 FileInformation; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v12; // [rsp+C8h] [rbp-38h]
  __int64 v13; // [rsp+D8h] [rbp-28h]
  _QWORD v14[9]; // [rsp+E0h] [rbp-20h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v13 = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v12 = 0LL;
  memset(v14, 0, sizeof(v14));
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  if ( (int)ZwQueryInformationByName((__int64)&ObjectAttributes, (__int64)&IoStatusBlock) >= 0 )
  {
    v5 = v14[4];
  }
  else
  {
    v4 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x60u, 0LL, 0);
    if ( v4 < 0
      || (v4 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation), v4 < 0) )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_8;
    }
    v5 = *((_QWORD *)&v12 + 1);
    *(_OWORD *)&v14[3] = v12;
  }
  *a1 = v5;
  v4 = 0;
LABEL_8:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
