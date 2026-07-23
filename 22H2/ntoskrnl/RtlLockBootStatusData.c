/*
 * XREFs of RtlLockBootStatusData @ 0x14077F470
 * Callers:
 *     PopBootStatSet @ 0x14077F168 (PopBootStatSet.c)
 *     CmCompleteRegistryInitialization @ 0x14079A330 (CmCompleteRegistryInitialization.c)
 *     PoClearTransitionMarker @ 0x14079A638 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x1407C18F0 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408F2344 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408F2588 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     RtlpGetBootStatusPath @ 0x140399114 (RtlpGetBootStatusPath.c)
 *     RtlInitializeBootStatDataCache @ 0x1403C7D94 (RtlInitializeBootStatDataCache.c)
 *     RtlpAcquireBootStatusLock @ 0x1403F7D04 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1403F7D34 (RtlpReleaseBootStatusLock.c)
 *     ZwOpenFile @ 0x1403FA080 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlLockBootStatusData(PHANDLE FileHandle)
{
  WCHAR *v1; // rdi
  int v3; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandlea; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  FileHandlea = 0LL;
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
    if ( FileHandle )
    {
      *FileHandle = BootStatFileHandle;
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
  v3 = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v3 < 0 )
  {
    BootStatFileHandle = 0LL;
    BootStatReferenceCount = 0;
    BootStatFileHandleAcquired = 0;
    if ( FileHandle )
      *FileHandle = 0LL;
  }
  else
  {
    BootStatFileHandle = FileHandlea;
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    if ( !FileHandle )
    {
LABEL_4:
      BootStatKeepHandleOpen = 1;
      goto LABEL_10;
    }
    *FileHandle = FileHandlea;
  }
LABEL_10:
  RtlpReleaseBootStatusLock();
  if ( v8 )
    ExFreePoolWithTag(v1, 0);
  return v3;
}
