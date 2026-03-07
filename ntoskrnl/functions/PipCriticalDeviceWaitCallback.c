__int64 __fastcall PipCriticalDeviceWaitCallback(__int64 a1, const char *a2, UNICODE_STRING *a3)
{
  NTSTATUS v4; // ebx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  char pszDest[256]; // [rsp+90h] [rbp-70h] BYREF

  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( a2 )
  {
    v4 = RtlStringCchPrintfA(pszDest, 0x100uLL, "\\ArcName\\%s", a2);
    if ( v4 >= 0 )
    {
      RtlInitAnsiString(&DestinationString, pszDest);
      v4 = RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
      if ( v4 >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.ObjectName = a3;
        v4 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
