__int64 __fastcall IoVolumeDeviceToGuidPath(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned __int64 DeviceType; // rax
  __int64 v5; // rcx
  IRP *v6; // rax
  NTSTATUS Status; // ecx
  __int16 v8; // ax
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int128 v12; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  __int16 OutputBuffer; // [rsp+98h] [rbp-68h] BYREF
  char v16; // [rsp+9Ah] [rbp-66h] BYREF

  DeviceType = DeviceObject->DeviceType;
  v10 = 0LL;
  v11 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v12 = 0LL;
  if ( (unsigned int)DeviceType <= 0x24 && (v5 = 0x1080000084LL, _bittest64(&v5, DeviceType)) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(
           0x4D0008u,
           DeviceObject,
           0LL,
           0,
           &OutputBuffer,
           0x200u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v6 )
    {
      Status = IofCallDriver(DeviceObject, v6);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v8 = OutputBuffer;
        if ( (unsigned __int16)OutputBuffer >= 0x1FEu )
        {
          v8 = 510;
          LOWORD(v12) = 510;
        }
        else
        {
          LOWORD(v12) = OutputBuffer;
        }
        WORD1(v12) = v8;
        *((_QWORD *)&v12 + 1) = &v16;
        Status = IoVolumeDeviceNameToGuidPath(&v12, &v10);
        if ( Status >= 0 )
        {
          *(_DWORD *)a2 = v10;
          *(_QWORD *)(a2 + 8) = v11;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Status;
}
