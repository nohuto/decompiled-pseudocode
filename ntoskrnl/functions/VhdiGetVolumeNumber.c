__int64 __fastcall VhdiGetVolumeNumber(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  HANDLE v4; // rax
  NTSTATUS inited; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  __int128 OutputBuffer; // [rsp+A8h] [rbp-58h] BYREF
  int v13; // [rsp+B8h] [rbp-48h]
  wchar_t pszDest[56]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v13 = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  OutputBuffer = 0LL;
  DestinationString = 0LL;
  if ( a1 && a4 )
  {
    inited = RtlStringCbPrintfW(pszDest, 0x64uLL, L"\\Device\\Harddisk%d\\Partition%d", a2, a3);
    if ( inited >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
      if ( inited >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
        if ( inited >= 0 )
        {
          inited = ZwDeviceIoControlFile(
                     FileHandle,
                     0LL,
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     0x56001Cu,
                     0LL,
                     0,
                     &OutputBuffer,
                     0x14u);
          if ( inited >= 0 )
            *a4 = OutputBuffer;
        }
      }
    }
    v4 = FileHandle;
  }
  else
  {
    inited = -1073741811;
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)inited;
}
