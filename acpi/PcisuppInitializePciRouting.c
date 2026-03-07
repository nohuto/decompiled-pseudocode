__int64 __fastcall PcisuppInitializePciRouting(PDEVICE_OBJECT DeviceObject)
{
  int v2; // ebx
  void *Pool2; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v5; // rsi
  _QWORD v7[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( InterruptRouting )
  {
    return 0;
  }
  else
  {
    memset(v7, 0, 0x48uLL);
    Pool2 = (void *)ExAllocatePool2(64LL, 56LL, 1097884481LL);
    if ( Pool2 )
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
      v7[4] = 0LL;
      v5 = AttachedDeviceReference;
      LOWORD(v7[0]) = 2075;
      LODWORD(v7[2]) = 131128;
      v7[1] = &GUID_INT_ROUTE_INTERFACE_STANDARD;
      v7[3] = Pool2;
      v2 = ACPIInternalSendSynchronousIrp(AttachedDeviceReference, (__int64)v7, 0LL);
      if ( v2 < 0 )
        ExFreePoolWithTag(Pool2, 0);
      else
        InterruptRouting = Pool2;
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v2;
}
