/*
 * XREFs of IoStopTimer @ 0x140557560
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x1405550D4 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
