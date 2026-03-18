/*
 * XREFs of PiPagePathSetState @ 0x140854B58
 * Callers:
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     PpPagePathAssign @ 0x140854B40 (PpPagePathAssign.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1408550BC (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCleanup @ 0x140862E34 (CmpVolumeContextCleanup.c)
 *     MiDeletePagefile @ 0x140A32870 (MiDeletePagefile.c)
 * Callees:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14022F530 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     IoQueueThreadIrp @ 0x1403C7120 (IoQueueThreadIrp.c)
 *     memset @ 0x140435400 (memset.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C9A40 (PpDevNodeLockTree.c)
 *     IoGetRelatedTargetDevice @ 0x140794AAC (IoGetRelatedTargetDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140854C40 (PpIrpAllocateDeviceUsageNotification.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x140854CF0 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 */

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
