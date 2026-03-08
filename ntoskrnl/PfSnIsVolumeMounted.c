/*
 * XREFs of PfSnIsVolumeMounted @ 0x14077AECC
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14077A964 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     NtCreateFile @ 0x1407CE510 (NtCreateFile.c)
 */

__int64 __fastcall PfSnIsVolumeMounted(PCWSTR SourceString, int *a2, int *a3)
{
  NTSTATUS v5; // ebx
  int v6; // eax
  __int64 FsInformation; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+1Fh] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  FsInformation = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( v5 >= 0 )
  {
    v5 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
    if ( (v5 & 0xC0000000) != 0xC0000000 )
    {
      v6 = (HIDWORD(FsInformation) >> 5) & 1;
      *a3 = BYTE4(FsInformation) & 1;
      *a2 = v6;
      v5 = 0;
    }
    NtClose(FileHandle);
  }
  return (unsigned int)v5;
}
