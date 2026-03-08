/*
 * XREFs of ZwResetEvent @ 0x1404153B0
 * Callers:
 *     DifZwResetEventWrapper @ 0x1405F3F80 (DifZwResetEventWrapper.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14077B1D8 (PfSnVolumeCheckSeekPenalty.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14081B254 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408674A0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A0F74 (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResetEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
