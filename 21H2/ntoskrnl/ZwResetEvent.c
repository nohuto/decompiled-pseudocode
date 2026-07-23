/*
 * XREFs of ZwResetEvent @ 0x1403FD4C0
 * Callers:
 *     PfSnVolumeCheckSeekPenalty @ 0x140675760 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725F80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407AC3F4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E0B3C (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
