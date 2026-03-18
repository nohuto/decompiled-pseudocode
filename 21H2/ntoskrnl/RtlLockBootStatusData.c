/*
 * XREFs of RtlLockBootStatusData @ 0x1406D6540
 * Callers:
 *     PopBootStatGet @ 0x1406D5F3C (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1406D6228 (PopBootStatSet.c)
 *     CmCompleteRegistryInitialization @ 0x14082830C (CmCompleteRegistryInitialization.c)
 *     PoClearTransitionMarker @ 0x1408285B0 (PoClearTransitionMarker.c)
 *     PopBootStatCheckIntegrity @ 0x140998CC4 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140998F18 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpGetBootStatusPath @ 0x1403A6B24 (RtlpGetBootStatusPath.c)
 *     RtlInitializeBootStatDataCache @ 0x1403D8BC0 (RtlInitializeBootStatDataCache.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlLockBootStatusData(HANDLE *a1)
{
  NTSTATUS v1; // esi
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  FileHandle = 0LL;
  v1 = 0;
  SourceString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v8 = 0;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
  ++BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    if ( a1 )
    {
      *a1 = BootStatFileHandle;
      goto LABEL_4;
    }
LABEL_14:
    BootStatKeepHandleOpen = 1;
    goto LABEL_4;
  }
  RtlpGetBootStatusPath(&SourceString, &v8);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v1 >= 0 )
  {
    BootStatFileHandle = FileHandle;
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    if ( a1 )
    {
      *a1 = FileHandle;
      goto LABEL_4;
    }
    goto LABEL_14;
  }
  BootStatFileHandle = 0LL;
  BootStatReferenceCount = 0;
  BootStatFileHandleAcquired = 0;
  if ( a1 )
    *a1 = 0LL;
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
  if ( v8 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return (unsigned int)v1;
}
