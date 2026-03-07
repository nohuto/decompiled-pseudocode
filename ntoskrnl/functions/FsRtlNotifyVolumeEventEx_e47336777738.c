NTSTATUS __stdcall FsRtlNotifyVolumeEventEx(
        PFILE_OBJECT FileObject,
        ULONG EventCode,
        PTARGET_DEVICE_CUSTOM_NOTIFICATION Event)
{
  NTSTATUS RelatedTargetDevice; // esi
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebx
  GUID v12; // xmm0
  PDEVICE_OBJECT v13; // rbx
  struct _DEVICE_OBJECT *v14; // rcx
  GUID v16; // xmm0
  struct _DEVICE_OBJECT *v17; // rcx
  ULONG v18; // ebx
  ULONG v19; // ebx
  ULONG v20; // ebx
  ULONG v21; // ebx
  ULONG v22; // ebx
  PDEVICE_OBJECT PhysicalDeviceObject; // [rsp+48h] [rbp+20h] BYREF

  PhysicalDeviceObject = 0LL;
  RelatedTargetDevice = IoGetRelatedTargetDevice(FileObject, &PhysicalDeviceObject);
  if ( RelatedTargetDevice < 0 )
    return RelatedTargetDevice;
  if ( EventCode > 8 )
  {
    v18 = EventCode - 9;
    if ( !v18 )
    {
      v12 = GUID_IO_VOLUME_WEARING_OUT;
      goto LABEL_11;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v12 = GUID_IO_VOLUME_FORCE_CLOSED;
      goto LABEL_11;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v12 = GUID_IO_VOLUME_INFO_MAKE_COMPAT;
      goto LABEL_11;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v12 = GUID_IO_VOLUME_PREPARING_EJECT;
      goto LABEL_11;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v12 = GUID_IO_VOLUME_CHANGE_SIZE;
      goto LABEL_11;
    }
    if ( v22 == 1 )
    {
      v12 = GUID_IO_VOLUME_BACKGROUND_FORMAT;
      goto LABEL_11;
    }
    goto LABEL_30;
  }
  if ( EventCode == 8 )
  {
    v12 = GUID_IO_VOLUME_WORM_NEAR_FULL;
    goto LABEL_11;
  }
  v6 = EventCode - 1;
  if ( !v6 )
  {
    v16 = GUID_IO_VOLUME_DISMOUNT;
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v16 = GUID_IO_VOLUME_DISMOUNT_FAILED;
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v16 = GUID_IO_VOLUME_LOCK;
LABEL_15:
    v13 = PhysicalDeviceObject;
    v17 = PhysicalDeviceObject;
    Event->Event = v16;
    IoReportTargetDeviceChange(v17, Event);
    goto LABEL_12;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v16 = GUID_IO_VOLUME_LOCK_FAILED;
    goto LABEL_15;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v16 = GUID_IO_VOLUME_UNLOCK;
    goto LABEL_15;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = GUID_IO_VOLUME_MOUNT;
LABEL_11:
    v13 = PhysicalDeviceObject;
    v14 = PhysicalDeviceObject;
    Event->Event = v12;
    IoReportTargetDeviceChangeAsynchronous(v14, Event, 0LL, 0LL);
LABEL_12:
    ObfDereferenceObject(v13);
    return RelatedTargetDevice;
  }
  if ( v11 == 1 )
  {
    v12 = GUID_IO_VOLUME_NEED_CHKDSK;
    goto LABEL_11;
  }
LABEL_30:
  ObfDereferenceObject(PhysicalDeviceObject);
  return -1073741811;
}
