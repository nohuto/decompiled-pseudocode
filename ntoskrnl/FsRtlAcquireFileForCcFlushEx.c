/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x14075EFA8
 * Callers:
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1406220F4 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1402409C0 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140336990 (ExIsResourceAcquiredSharedLite.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140343B10 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterCtrlInit @ 0x140343B50 (FsFilterCtrlInit.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140343BE0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140343C70 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x140343F88 (FsFilterCtrlFree.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall FsRtlAcquireFileForCcFlushEx(PFILE_OBJECT FileObject)
{
  signed int v2; // ebx
  PDEVICE_OBJECT *v3; // rsi
  char v4; // r12
  __int64 v5; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r15
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  int v12; // eax
  __int64 (__fastcall *AcquireForCcFlush)(PFILE_OBJECT, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v14; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v16; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  struct _ERESOURCE *v18; // rcx
  struct _ERESOURCE *v19; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v21; // [rsp+38h] [rbp-D0h]
  int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v24[72]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v24, 0, 0x238uLL);
  v2 = 0;
  v3 = v24;
  v22 = 0;
  v21 = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x30u && *((_QWORD *)AddDevice + 5)
     || *(_DWORD *)AddDevice >= 0x38u && *((_QWORD *)AddDevice + 6)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v4 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --CurrentThread->KernelApcDisable;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x30u || !*((_QWORD *)AddDevice + 5))
      && (*(_DWORD *)AddDevice < 0x38u || !*((_QWORD *)AddDevice + 6)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0xD8
        && (AcquireForCcFlush = (__int64 (__fastcall *)(PFILE_OBJECT, PDEVICE_OBJECT))FastIoDispatch->AcquireForCcFlush) != 0LL )
      {
        v2 = AcquireForCcFlush(FileObject, BaseFileSystemDeviceObject);
      }
      else
      {
        v2 = -1073741808;
      }
      v22 |= 1u;
    }
    if ( v21 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_24;
  }
  result = FsFilterCtrlInit((__int64)v24, 251, (__int64)RelatedDeviceObject, v5, (__int64)FileObject, 1u);
  if ( (int)result < 0 )
    return result;
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  v12 = FsFilterPerformCallbacks((__int64)v24, 1, 1, &v22);
  v2 = v12;
  if ( v12 >= 0 )
  {
    if ( v12 )
    {
      v2 = 0;
      if ( v12 != 294 )
        v2 = v12;
      goto LABEL_24;
    }
    FileObject = (PFILE_OBJECT)v24[2];
    if ( ((__int64)v24[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v24[1]);
      v21 = 1;
      v14 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v14->FastIoDispatch;
      AddDevice = v14->DriverExtension[1].AddDevice;
    }
    goto LABEL_12;
  }
LABEL_24:
  if ( v2 == -1073741808 && (v22 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    v16 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v16 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v16);
      v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( IsResourceAcquiredSharedLite )
        ExAcquireResourceSharedLite(v18, 1u);
      else
        ExAcquireResourceExclusiveLite(v18, 1u);
    }
    v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v19 )
      ExAcquireResourceSharedLite(v19, 1u);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v24, v2);
    FsFilterCtrlFree((__int64)v24);
  }
  if ( v2 < 0 )
    KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
