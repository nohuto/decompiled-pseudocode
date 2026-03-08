/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x140780BAC
 * Callers:
 *     NtInitializeNlsFiles @ 0x140780A70 (NtInitializeNlsFiles.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x140412C50 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1, void *a2)
{
  struct _LIST_ENTRY *Flink; // rdi
  PVOID Blink; // rsi
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  struct _KTHREAD *CurrentThread; // r15
  struct _LIST_ENTRY *v8; // rbx
  char v9; // r14
  struct _LIST_ENTRY *v10; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE SectionHandle; // [rsp+D8h] [rbp+58h] BYREF

  Object = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  Flink = PsGetCurrentServerSiloGlobals()[66].Flink;
  Blink = Flink->Blink;
  if ( (unsigned __int64)Blink > 1 )
  {
    ObfReferenceObject(Flink->Blink);
LABEL_3:
    *a1 = Blink;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    ZwClose(FileHandle);
    if ( v6 < 0 )
      return v6;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    Blink = Object;
    ZwClose(SectionHandle);
    if ( v6 < 0 )
      return v6;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Flink, 0LL);
    v8 = Flink->Blink;
    if ( v8 == (struct _LIST_ENTRY *)1 )
    {
      v10 = (struct _LIST_ENTRY *)Object;
      ObfReferenceObject(Object);
      Flink->Blink = v10;
    }
    else if ( v8 )
    {
      ObfDereferenceObject(Object);
      Blink = v8;
      ObfReferenceObject(v8);
    }
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)Flink, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)Flink);
    KeAbPostRelease((ULONG_PTR)Flink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_3;
  }
  return result;
}
