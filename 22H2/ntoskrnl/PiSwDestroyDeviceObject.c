/*
 * XREFs of PiSwDestroyDeviceObject @ 0x140733048
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14074BC04 (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x14074E8B0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IoDeleteDevice @ 0x140360200 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x14073307C (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
