__int64 __fastcall PiPagePathSetState(struct _FILE_OBJECT *Object, char a2)
{
  IRP *DeviceUsageNotification; // rax
  IRP *v5; // rbx
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  PDEVICE_OBJECT DeviceObject[8]; // [rsp+30h] [rbp-40h] BYREF
  PVOID Objecta; // [rsp+80h] [rbp+10h] BYREF

  memset(DeviceObject, 0, sizeof(DeviceObject));
  Objecta = 0LL;
  ObfReferenceObject(Object);
  DeviceObject[0] = IoGetRelatedDeviceObject(Object);
  LODWORD(DeviceObject[1]) = 1;
  BYTE4(DeviceObject[1]) = a2;
  DeviceObject[2] = (PDEVICE_OBJECT)Object;
  DeviceUsageNotification = (IRP *)PpIrpAllocateDeviceUsageNotification(DeviceObject);
  v5 = DeviceUsageNotification;
  if ( DeviceUsageNotification )
  {
    IoQueueThreadIrp(DeviceUsageNotification);
    PpDevNodeLockTree(1);
    v6 = IofCallDriver(DeviceObject[0], v5);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&DeviceObject[5], Executive, 0, 0, 0LL);
      v6 = (NTSTATUS)DeviceObject[3];
    }
    if ( v6 >= 0 && (int)IoGetRelatedTargetDevice(Object, &Objecta) >= 0 )
    {
      LOBYTE(v7) = a2;
      PoDirectedDripsNotifyPagingDeviceUsage(Objecta, v7);
      ObfDereferenceObject(Objecta);
    }
    PpDevNodeUnlockTree(1);
    return (unsigned int)v6;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
}
