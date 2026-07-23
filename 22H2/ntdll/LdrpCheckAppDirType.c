/*
 * XREFs of LdrpCheckAppDirType @ 0x1800D054C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800608B4 (RtlDosPathNameToRelativeNtPathName.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenFile @ 0x18009DB40 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009DE00 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall LdrpCheckAppDirType(_UNICODE_STRING *a1, __int64 a2)
{
  int v2; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE FsInformation[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v5; // [rsp+4Ch] [rbp-B4h]
  _UNICODE_STRING *v6; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING v7; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char v11; // [rsp+C0h] [rbp-40h] BYREF

  *(_DWORD *)&v7.Length = 0x1000000;
  v5 = 0;
  v7.Buffer = (wchar_t *)&v11;
  UnicodeString.Buffer = 0LL;
  FileHandle = 0LL;
  if ( (int)RtlDosPathNameToRelativeNtPathName(0, a2, a1, &v7, &UnicodeString, &v6) >= 0 )
  {
    ObjectAttributes.ObjectName = v6;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation) >= 0 )
    {
      v2 = LdrpIllegalCWDDevices;
      if ( (LdrpIllegalCWDDevices & v5) != 0 )
        v2 = 0;
      LdrpIllegalCWDDevices = v2;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
