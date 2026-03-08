/*
 * XREFs of HalpDynamicDeviceInterfaceNotification @ 0x140930940
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IoGetDeviceObjectPointer @ 0x140720950 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall HalpDynamicDeviceInterfaceNotification(char *NotificationStructure, PVOID Context)
{
  int v2; // ebx
  __int64 v3; // rax
  void *v4; // rcx
  __int64 v5; // rax
  PDEVICE_OBJECT v6; // rbx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp+8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  v2 = (int)Context;
  FileObject = 0LL;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( v3 )
  {
    if ( IoGetDeviceObjectPointer(
           *((PUNICODE_STRING *)NotificationStructure + 5),
           0x100003u,
           &FileObject,
           &DeviceObject) >= 0 )
    {
      KeWaitForSingleObject(&HalpDynamicDeviceInterfaceLock, WrExecutive, 0, 0, 0LL);
      v5 = v2;
      v6 = DeviceObject;
      *(&HalpDynamicDevices + v5) = DeviceObject;
      KeSetEvent(&HalpDynamicDeviceInterfaceLock, 0, 0);
      ObfReferenceObject(v6);
      ObfDereferenceObject(FileObject);
    }
  }
  else
  {
    KeWaitForSingleObject(&HalpDynamicDeviceInterfaceLock, WrExecutive, 0, 0, 0LL);
    v4 = *(&HalpDynamicDevices + v2);
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      *(&HalpDynamicDevices + v2) = 0LL;
    }
    KeSetEvent(&HalpDynamicDeviceInterfaceLock, 0, 0);
  }
  return 0LL;
}
