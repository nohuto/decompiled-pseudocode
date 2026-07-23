/*
 * XREFs of RamdiskStart @ 0x140A96268
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     RtlStringCbPrintfA @ 0x1403AD714 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _strupr @ 0x1403D1190 (_strupr.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 *     _atoi64 @ 0x1403D1A4C (_atoi64.c)
 *     atol @ 0x1403D1A90 (atol.c)
 *     ZwDeviceIoControlFile @ 0x1403FA660 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlStringFromGUID @ 0x14066DF00 (RtlStringFromGUID.c)
 *     IoCreateSymbolicLink @ 0x14076DDE0 (IoCreateSymbolicLink.c)
 */

__int64 __fastcall RamdiskStart(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // rax
  NTSTATUS Status; // ebx
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  char *v8; // rbx
  char *v9; // rax
  char *v10; // rax
  unsigned int v11; // eax
  char *v12; // rax
  char *v13; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING GuidString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+88h] [rbp-78h] BYREF
  STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DeviceName; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD InputBuffer[8]; // [rsp+F0h] [rbp-10h] BYREF
  char pszDest[32]; // [rsp+130h] [rbp+30h] BYREF
  wchar_t SourceString[56]; // [rsp+150h] [rbp+50h] BYREF

  GuidString = 0LL;
  v2 = 0LL;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  DeviceName = 0LL;
  v16 = 0LL;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  FileHandle = 0LL;
  v3 = (__int64 *)(a1 + 32);
  v4 = *(__int64 **)(a1 + 32);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  while ( v4 != v3 )
  {
    v2 = v4;
    if ( *((_DWORD *)v4 + 4) == 25 )
      break;
    v4 = (__int64 *)*v4;
  }
  if ( v4 == v3 )
  {
    Status = -1073741811;
    v6 = 1LL;
    goto LABEL_28;
  }
  InputBuffer[3] = 0LL;
  v6 = 3LL;
  HIDWORD(InputBuffer[2]) = 3;
  *(_DWORD *)((char *)&InputBuffer[7] + 2) = 0;
  HIWORD(InputBuffer[7]) = 0;
  LODWORD(InputBuffer[0]) = 64;
  InputBuffer[6] = v2[3];
  LOWORD(InputBuffer[7]) = 0;
  InputBuffer[5] = 0LL;
  InputBuffer[3] = 2LL;
  *(GUID *)((char *)InputBuffer + 4) = RamdiskBootDiskGuid;
  v7 = v2[4];
  v8 = *(char **)(a1 + 216);
  InputBuffer[4] = v7 << 12;
  if ( v8 )
  {
    strupr(v8);
    v9 = strstr(v8, "RDIMAGEOFFSET");
    if ( v9 && (v10 = strstr(v9, "=")) != 0LL )
    {
      v11 = atol(v10 + 1);
      LODWORD(InputBuffer[5]) = v11;
    }
    else
    {
      v11 = InputBuffer[5];
    }
    InputBuffer[4] -= v11;
    v12 = strstr(v8, "RDIMAGELENGTH");
    if ( v12 )
    {
      v13 = strstr(v12, "=");
      if ( v13 )
        InputBuffer[4] = atoi64(v13 + 1);
    }
  }
  LODWORD(v16) = 2097182;
  *((_QWORD *)&v16 + 1) = L"\\Device\\Ramdisk";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
  {
    v6 = 2LL;
    goto LABEL_28;
  }
  Status = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x240000u, InputBuffer, 0x40u, 0LL, 0);
  ZwClose(FileHandle);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
LABEL_28:
    KeBugCheckEx(0xF8u, v6, Status, 0LL, 0LL);
  if ( !strstr(*(const char **)(a1 + 184), "vdisk(") )
  {
    Status = RtlStringFromGUID((const GUID *const)((char *)InputBuffer + 4), &GuidString);
    if ( Status < 0 )
    {
      v6 = 4LL;
      goto LABEL_28;
    }
    RtlStringCbPrintfA(pszDest, 0x14uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
    RtlInitAnsiString(&DestinationString, pszDest);
    Status = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &DestinationString, 1u);
    if ( Status < 0 )
    {
      v6 = 5LL;
      goto LABEL_28;
    }
    RtlStringCbPrintfW(SourceString, 0x6CuLL, L"\\Device\\Ramdisk%wZ", &GuidString);
    RtlInitUnicodeString(&DeviceName, SourceString);
    Status = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
    RtlFreeAnsiString(&GuidString);
    RtlFreeAnsiString(&SymbolicLinkName);
    if ( Status < 0 )
    {
      v6 = 6LL;
      goto LABEL_28;
    }
  }
  return 0LL;
}
