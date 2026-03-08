/*
 * XREFs of PiPagePathSetState @ 0x1408512E8
 * Callers:
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     PpPagePathAssign @ 0x1408512D0 (PpPagePathAssign.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x14085184C (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCleanup @ 0x14085EE74 (CmpVolumeContextCleanup.c)
 *     MiDeletePagefile @ 0x140A2FB40 (MiDeletePagefile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IoQueueThreadIrp @ 0x1403C1860 (IoQueueThreadIrp.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     IoGetRelatedTargetDevice @ 0x1406F3B0C (IoGetRelatedTargetDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1408513D0 (PpIrpAllocateDeviceUsageNotification.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x140851480 (PoDirectedDripsNotifyPagingDeviceUsage.c)
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
