/*
 * XREFs of IoGetLowerDeviceObject @ 0x140365D70
 * Callers:
 *     <none>
 * Callees:
 *     IoGetLowerDeviceObjectWithTag @ 0x140365D8C (IoGetLowerDeviceObjectWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetLowerDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetLowerDeviceObjectWithTag(DeviceObject, 1953261124LL);
}
