/*
 * XREFs of IoEnumerateDeviceObjectList @ 0x1403C0BF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

NTSTATUS __stdcall IoEnumerateDeviceObjectList(
        PDRIVER_OBJECT DriverObject,
        PDEVICE_OBJECT *DeviceObjectList,
        ULONG DeviceObjectListSize,
        PULONG ActualNumberDeviceObjects)
{
  ULONG v5; // ebx
  KIRQL v9; // al
  PDEVICE_OBJECT DeviceObject; // r8
  KIRQL v11; // r15
  ULONG v12; // edi
  bool v13; // cf
  PDEVICE_OBJECT v14; // rbx
  NTSTATUS i; // esi

  v5 = 0;
  v9 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject = DriverObject->DeviceObject;
  v11 = v9;
  v12 = DeviceObjectListSize >> 3;
  while ( DeviceObject )
  {
    DeviceObject = DeviceObject->NextDevice;
    ++v5;
  }
  v13 = v12 < v5;
  *ActualNumberDeviceObjects = v5;
  v14 = DriverObject->DeviceObject;
  for ( i = v13 ? 0xC0000023 : 0; v12; --v12 )
  {
    if ( !v14 )
      break;
    ObfReferenceObjectWithTag(v14, 0x746C6644u);
    *DeviceObjectList++ = v14;
    v14 = v14->NextDevice;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v11);
  return i;
}
