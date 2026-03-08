/*
 * XREFs of IoStartTimer @ 0x140555090
 * Callers:
 *     <none>
 * Callees:
 *     IopEnableTimer @ 0x140552FD8 (IopEnableTimer.c)
 */

void __stdcall IoStartTimer(PDEVICE_OBJECT DeviceObject)
{
  if ( (DeviceObject->DeviceObjectExtension->ExtensionFlags & 0xF) == 0 )
    IopEnableTimer((__int64)DeviceObject->Timer);
}
