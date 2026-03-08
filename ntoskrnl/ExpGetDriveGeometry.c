/*
 * XREFs of ExpGetDriveGeometry @ 0x1409F9C60
 * Callers:
 *     ExpTranslateEfiPath @ 0x14083EF60 (ExpTranslateEfiPath.c)
 *     ExpCreateOutputEFI @ 0x1409F91B8 (ExpCreateOutputEFI.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     ZwDeviceIoControlFile @ 0x1404123F0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetDriveGeometry(unsigned int a1, _DWORD *a2)
{
  wchar_t *Pool2; // rax
  WCHAR *v5; // rdi
  NTSTATUS v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+77h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, 76LL, 1920364101LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    swprintf_s(Pool2, 0x26uLL, L"\\Device\\Harddisk%lu\\Partition0", a1);
    RtlInitUnicodeString(&DestinationString, v5);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    IoStatusBlock = 0LL;
    v6 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( v6 >= 0 )
    {
      v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70000u, 0LL, 0, a2, 0x18u);
      ZwClose(FileHandle);
      if ( v6 >= 0 && a2[5] < 0x200u )
        v6 = -1073741823;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
