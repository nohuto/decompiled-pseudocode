/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x1407D1AF0
 * Callers:
 *     FsRtlAcquireToCreateMappedSection @ 0x1407D17DC (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlAcquireFileExclusive @ 0x1407D18B0 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1402409C0 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
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

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(
        PFILE_OBJECT FileObject,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct _DEVICE_OBJECT *a6)
{
  int v8; // ebx
  PDEVICE_OBJECT *v9; // rdi
  char v10; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rax
  __int64 v13; // r9
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  PDRIVER_EXTENSION DriverExtension; // rcx
  PDRIVER_ADD_DEVICE AddDevice; // r14
  __int64 result; // rax
  struct _KTHREAD *v20; // rax
  int v21; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v23; // bp
  struct _DRIVER_OBJECT *v24; // rax
  void (__fastcall *AcquireFileForNtCreateSection)(PFILE_OBJECT); // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v27; // rcx
  int v28; // [rsp+30h] [rbp-2B8h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-2B4h]
  unsigned int v30; // [rsp+38h] [rbp-2B0h]
  struct _DEVICE_OBJECT *v31; // [rsp+40h] [rbp-2A8h]
  struct _FAST_IO_DISPATCH *v32; // [rsp+48h] [rbp-2A0h]
  PDEVICE_OBJECT v33[72]; // [rsp+50h] [rbp-298h] BYREF

  v29 = a3;
  v31 = a6;
  v30 = a4;
  memset(v33, 0, 0x238uLL);
  v8 = 0;
  v9 = v33;
  v28 = 0;
  v10 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DeviceAttachmentBaseRef = BaseFileSystemDeviceObject;
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  DriverExtension = DriverObject->DriverExtension;
  v32 = FastIoDispatch;
  AddDevice = DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
     || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
  {
    v10 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v10 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    --CurrentThread->KernelApcDisable;
    goto LABEL_30;
  }
  if ( a2 == 1 )
    LOBYTE(v8) = 1;
  result = FsFilterCtrlInit((__int64)v33, 255, (__int64)RelatedDeviceObject, v13, (__int64)FileObject, v8);
  if ( (int)result >= 0 )
  {
    v33[4] = v31;
    v33[5] = (PDEVICE_OBJECT)__PAIR64__(a5, v30);
    v33[3] = (PDEVICE_OBJECT)__PAIR64__(v29, a2);
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = FsFilterPerformCallbacks((__int64)v33, v8, v8, &v28);
    v8 = v21;
    if ( v21 < 0 )
    {
LABEL_13:
      if ( v8 == -1073741808 && (v28 & 1) != 0 )
      {
        FsContext = FileObject->FsContext;
        if ( FsContext )
        {
          v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
          if ( v27 )
            ExAcquireResourceExclusiveLite(v27, 1u);
        }
        v8 = 0;
      }
      if ( v9 )
      {
        if ( *((_WORD *)v9 + 37) )
          FsFilterPerformCompletionCallbacks((__int64)v33, v8);
        FsFilterCtrlFree((__int64)v33);
      }
      if ( v8 < 0 )
        KeLeaveCriticalRegion();
      return (unsigned int)v8;
    }
    if ( v21 )
    {
      v8 = 0;
      if ( v21 != 294 )
        v8 = v21;
      goto LABEL_13;
    }
    FileObject = (PFILE_OBJECT)v33[2];
    if ( ((__int64)v33[8] & 4) != 0 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v33[1]);
      v23 = 1;
      v24 = DeviceAttachmentBaseRef->DriverObject;
      FastIoDispatch = v24->FastIoDispatch;
      AddDevice = v24->DriverExtension[1].AddDevice;
      goto LABEL_31;
    }
    FastIoDispatch = v32;
LABEL_30:
    v23 = 0;
LABEL_31:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x10u || !*((_QWORD *)AddDevice + 1))
      && (*(_DWORD *)AddDevice < 0x18u || !*((_QWORD *)AddDevice + 2)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x60
        && (AcquireFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->AcquireFileForNtCreateSection) != 0LL )
      {
        AcquireFileForNtCreateSection(FileObject);
      }
      else
      {
        v8 = -1073741808;
      }
      v28 |= 1u;
    }
    if ( v23 )
      ObfDereferenceObject(DeviceAttachmentBaseRef);
    goto LABEL_13;
  }
  return result;
}
