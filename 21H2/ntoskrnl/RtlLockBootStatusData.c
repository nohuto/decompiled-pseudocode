/*
 * XREFs of RtlLockBootStatusData @ 0x14077F570
 * Callers:
 *     PopBootStatSet @ 0x14077F268 (PopBootStatSet.c)
 *     CmCompleteRegistryInitialization @ 0x1407900CC (CmCompleteRegistryInitialization.c)
 *     PoClearTransitionMarker @ 0x1407903D4 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x1407C1130 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408F22F4 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408F2538 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     RtlpGetBootStatusPath @ 0x140399814 (RtlpGetBootStatusPath.c)
 *     RtlInitializeBootStatDataCache @ 0x1403C83C4 (RtlInitializeBootStatDataCache.c)
 *     RtlpAcquireBootStatusLock @ 0x1403F8678 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1403F86A8 (RtlpReleaseBootStatusLock.c)
 *     ZwOpenFile @ 0x1403FAA00 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlLockBootStatusData(HANDLE *a1)
{
  WCHAR *v1; // rdi
  NTSTATUS v3; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  FileHandle = 0LL;
  v1 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SourceString = 0LL;
  v3 = 0;
  v8 = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlpAcquireBootStatusLock();
  ++BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    if ( a1 )
    {
      *a1 = BootStatFileHandle;
      goto LABEL_10;
    }
    goto LABEL_4;
  }
  RtlpGetBootStatusPath(&SourceString, &v8);
  v1 = (WCHAR *)SourceString;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v3 < 0 )
  {
    BootStatFileHandle = 0LL;
    BootStatReferenceCount = 0;
    BootStatFileHandleAcquired = 0;
    if ( a1 )
      *a1 = 0LL;
  }
  else
  {
    BootStatFileHandle = FileHandle;
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    if ( !a1 )
    {
LABEL_4:
      BootStatKeepHandleOpen = 1;
      goto LABEL_10;
    }
    *a1 = FileHandle;
  }
LABEL_10:
  RtlpReleaseBootStatusLock();
  if ( v8 )
    ExFreePoolWithTag(v1, 0);
  return (unsigned int)v3;
}
