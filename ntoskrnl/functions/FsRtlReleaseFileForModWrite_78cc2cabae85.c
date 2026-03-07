void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  int v3; // ebx
  _QWORD *v4; // r15
  char v5; // r12
  int v6; // edx
  int v7; // r9d
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  struct _ERESOURCE *v12; // r12
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  __int64 (__fastcall *ReleaseForModWrite)(PFILE_OBJECT, struct _ERESOURCE *, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v17; // rax
  char v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  _QWORD v22[72]; // [rsp+50h] [rbp-B0h] BYREF

  Resource = a2;
  memset(v22, 0, 0x238uLL);
  v3 = 0;
  v4 = v22;
  v19 = 0;
  v18 = 0;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x60u && *((_QWORD *)AddDevice + 11)
     || *(_DWORD *)AddDevice >= 0x68u && *((_QWORD *)AddDevice + 12)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v12 = Resource;
    v4 = 0LL;
    goto LABEL_11;
  }
  LOBYTE(v6) = -4;
  FsFilterCtrlInit((unsigned int)v22, v6, (_DWORD)RelatedDeviceObject, v7, (__int64)FileObject, 0);
  v12 = Resource;
  LOBYTE(v13) = 1;
  v22[3] = Resource;
  v14 = FsFilterPerformCallbacks(v22, 0LL, v13, &v19);
  v15 = 0;
  v3 = v14;
  if ( v14 >= 0 )
  {
    if ( v14 )
    {
      if ( v14 != 294 )
        v15 = v14;
      v3 = v15;
LABEL_23:
      if ( v3 >= 0 )
        goto LABEL_24;
      goto LABEL_36;
    }
    FileObject = (PFILE_OBJECT)v22[2];
    if ( (v22[8] & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v22[1], 1953261124LL);
      v18 = 1;
      v17 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v17->FastIoDispatch;
      AddDevice = v17->DriverExtension[1].AddDevice;
    }
LABEL_11:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x60u || !*((_QWORD *)AddDevice + 11))
      && (*(_DWORD *)AddDevice < 0x68u || !*((_QWORD *)AddDevice + 12)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0xD0
        && (ReleaseForModWrite = (__int64 (__fastcall *)(PFILE_OBJECT, struct _ERESOURCE *, PDEVICE_OBJECT))FastIoDispatch->ReleaseForModWrite) != 0LL )
      {
        v3 = ReleaseForModWrite(FileObject, v12, BaseFileSystemDeviceObject);
      }
      else
      {
        v3 = -1073741808;
      }
      v19 |= 1u;
    }
    if ( v18 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_23;
  }
LABEL_36:
  if ( (v19 & 1) != 0 )
  {
    ExReleaseResourceLite(v12);
    v3 = 0;
  }
LABEL_24:
  if ( v4 )
  {
    if ( *((_WORD *)v4 + 37) )
      FsFilterPerformCompletionCallbacks(v22, (unsigned int)v3);
    if ( (v22[8] & 1) != 0 )
      FsFilterFreeCompletionStack(v22);
  }
}
