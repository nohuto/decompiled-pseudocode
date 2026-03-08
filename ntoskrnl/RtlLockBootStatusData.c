/*
 * XREFs of RtlLockBootStatusData @ 0x14073DD00
 * Callers:
 *     PopBootStatGet @ 0x14073D308 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x14073D9E0 (PopBootStatSet.c)
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 *     PopBootStatCheckIntegrity @ 0x14084B00C (PopBootStatCheckIntegrity.c)
 *     PoClearTransitionMarker @ 0x14085A768 (PoClearTransitionMarker.c)
 *     PopBootStatRestoreDefaults @ 0x1409940B0 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlInitializeBootStatDataCache @ 0x1403A4724 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x1403C03F4 (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlLockBootStatusData(HANDLE *a1)
{
  NTSTATUS v2; // esi
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  FileHandle = 0LL;
  SourceString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v8 = 0;
  v2 = 0;
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
      goto LABEL_7;
    }
    goto LABEL_14;
  }
  RtlpGetBootStatusPath(&SourceString, &v8);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v2 >= 0 )
  {
    BootStatFileHandle = FileHandle;
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    if ( a1 )
    {
      *a1 = FileHandle;
      goto LABEL_7;
    }
LABEL_14:
    BootStatKeepHandleOpen = 1;
    goto LABEL_7;
  }
  BootStatFileHandle = 0LL;
  BootStatReferenceCount = 0;
  BootStatFileHandleAcquired = 0;
  if ( a1 )
    *a1 = 0LL;
LABEL_7:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock);
  KeAbPostRelease((ULONG_PTR)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
  if ( v8 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return (unsigned int)v2;
}
