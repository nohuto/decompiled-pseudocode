/*
 * XREFs of PiSwDestroyDeviceObject @ 0x14096423C
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1408064B0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140867324 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140964C84 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject();
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
