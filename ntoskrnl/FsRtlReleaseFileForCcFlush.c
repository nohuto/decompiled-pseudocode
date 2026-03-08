/*
 * XREFs of FsRtlReleaseFileForCcFlush @ 0x14075F248
 * Callers:
 *     MiDestroySection @ 0x1402017AC (MiDestroySection.c)
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1406220F4 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1402409C0 (IoGetDeviceAttachmentBaseRef.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140343B10 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterCtrlInit @ 0x140343B50 (FsFilterCtrlInit.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140343BE0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140343C70 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x140343F88 (FsFilterCtrlFree.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall FsRtlReleaseFileForCcFlush(PFILE_OBJECT FileObject)
{
  unsigned int v2; // ebx
  PDEVICE_OBJECT *v3; // r12
  char v4; // r13
  __int64 v5; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  int v10; // eax
  char v11; // r13
  __int64 (__fastcall *ReleaseForCcFlush)(PFILE_OBJECT, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v13; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v19[72]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v19, 0, 0x238uLL);
  v2 = 0;
  v3 = v19;
  HIDWORD(v17) = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x40u && *((_QWORD *)AddDevice + 7)
     || *(_DWORD *)AddDevice >= 0x48u && *((_QWORD *)AddDevice + 8)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v4 )
  {
    v3 = 0LL;
    goto LABEL_10;
  }
  FsFilterCtrlInit((__int64)v19, 250, (__int64)RelatedDeviceObject, v5, (__int64)FileObject, 0);
  v10 = FsFilterPerformCallbacks((__int64)v19, 0, 1, (_DWORD *)&v17 + 1);
  v2 = v10;
  if ( v10 < 0 )
    goto LABEL_23;
  if ( !v10 )
  {
    FileObject = (PFILE_OBJECT)v19[2];
    if ( ((__int64)v19[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v19[1]);
      v11 = 1;
      v13 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v13->FastIoDispatch;
      AddDevice = v13->DriverExtension[1].AddDevice;
LABEL_11:
      if ( !AddDevice
        || (*(_DWORD *)AddDevice < 0x40u || !*((_QWORD *)AddDevice + 7))
        && (*(_DWORD *)AddDevice < 0x48u || !*((_QWORD *)AddDevice + 8)) )
      {
        if ( FastIoDispatch
          && FastIoDispatch->SizeOfFastIoDispatch >= 0xE0
          && (ReleaseForCcFlush = (__int64 (__fastcall *)(PFILE_OBJECT, PDEVICE_OBJECT))FastIoDispatch->ReleaseForCcFlush) != 0LL )
        {
          v2 = ReleaseForCcFlush(FileObject, BaseFileSystemDeviceObject);
        }
        else
        {
          v2 = -1073741808;
        }
        HIDWORD(v17) |= 1u;
      }
      if ( v11 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
      goto LABEL_23;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  v2 = 0;
  if ( v10 != 294 )
    v2 = v10;
LABEL_23:
  if ( v2 == -1073741808 && (v17 & 0x100000000LL) != 0 )
  {
    FsContext = FileObject->FsContext;
    v15 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v15 )
      ExReleaseResourceLite(v15);
    v16 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v16 )
      ExReleaseResourceLite(v16);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v19, v2);
    FsFilterCtrlFree((__int64)v19);
  }
  KeLeaveCriticalRegion();
}
