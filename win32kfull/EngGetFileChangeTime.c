/*
 * XREFs of EngGetFileChangeTime @ 0x1C027BFB0
 * Callers:
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9BE8 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

BOOL __stdcall EngGetFileChangeTime(HANDLE h, LARGE_INTEGER *pChangeTime)
{
  BOOL v2; // ebx
  const WCHAR *v4; // rdx
  void *FileHandle; // [rsp+60h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+B8h] [rbp+1Fh] BYREF
  __int128 v11; // [rsp+C8h] [rbp+2Fh]
  __int64 v12; // [rsp+D8h] [rbp+3Fh]

  v2 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  v4 = (const WCHAR *)*((_QWORD *)h + 10);
  v12 = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v11 = 0LL;
  if ( !v4 )
  {
    pChangeTime->QuadPart = 0LL;
    return 1;
  }
  if ( (*((_DWORD *)h + 10) & 1) != 0 )
  {
    *pChangeTime = *(LARGE_INTEGER *)h;
    return 1;
  }
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 3u, 0x10u, 0LL, 0) >= 0 )
  {
    if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
    {
      v2 = 1;
      pChangeTime->QuadPart = v11;
    }
    ZwClose(FileHandle);
  }
  return v2;
}
