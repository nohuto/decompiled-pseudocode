/*
 * XREFs of IoStopTimer @ 0x1405550C0
 * Callers:
 *     <none>
 * Callees:
 *     IopDisableTimer @ 0x140552C34 (IopDisableTimer.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  IopDisableTimer((__int64)DeviceObject->Timer);
}
