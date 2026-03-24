/*
 * XREFs of IoStopTimer @ 0x1403CE400
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1403CE41C (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer(DeviceObject->Timer);
}
