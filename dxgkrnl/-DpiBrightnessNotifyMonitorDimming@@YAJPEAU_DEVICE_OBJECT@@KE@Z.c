__int64 __fastcall DpiBrightnessNotifyMonitorDimming(struct _DEVICE_OBJECT *a1, int a2)
{
  char *DeviceExtension; // rsi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  int v4; // ebx
  unsigned int Status; // ebx
  struct _ERESOURCE *v6; // r14
  _QWORD **v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  struct _DEVICE_OBJECT *v10; // rcx
  IRP *v11; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  __int64 InputBuffer; // [rsp+A0h] [rbp+20h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  AttachedDeviceReference = 0LL;
  InputBuffer = 0LL;
  v4 = a2;
  if ( a2 == -1 )
  {
    v4 = *((_DWORD *)DeviceExtension + 875);
    if ( v4 == -1 )
      return (unsigned int)-1073741637;
  }
  KeEnterCriticalRegion();
  v6 = (struct _ERESOURCE *)(DeviceExtension + 3320);
  ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3320), 1u);
  v7 = (_QWORD **)(DeviceExtension + 3480);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = v8 - 4;
    v8 = (_QWORD *)*v8;
    if ( *(_DWORD *)v9 == 1 && *((_DWORD *)v9 + 6) == v4 )
    {
      v10 = (struct _DEVICE_OBJECT *)v9[6];
      if ( v10 )
        AttachedDeviceReference = IoGetAttachedDeviceReference(v10);
      break;
    }
  }
  ExReleaseResourceLite(v6);
  KeLeaveCriticalRegion();
  if ( !AttachedDeviceReference )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    LODWORD(InputBuffer) = InputBuffer | 1;
    BYTE4(InputBuffer) = 1;
    memset(&Event, 0, sizeof(Event));
    IoStatusBlock = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = IoBuildDeviceIoControlRequest(
            0x2324CFu,
            AttachedDeviceReference,
            &InputBuffer,
            8u,
            0LL,
            0,
            1u,
            &Event,
            &IoStatusBlock);
    if ( v11 )
    {
      Status = IofCallDriver(AttachedDeviceReference, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741801;
    }
    ObfDereferenceObject(AttachedDeviceReference);
  }
  return Status;
}
