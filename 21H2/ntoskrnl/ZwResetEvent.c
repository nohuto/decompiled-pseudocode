/*
 * XREFs of ZwResetEvent @ 0x14041E7A0
 * Callers:
 *     DifZwResetEventWrapper @ 0x1406266A0 (DifZwResetEventWrapper.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406D958C (PfSnVolumeCheckSeekPenalty.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406DBCB4 (PfSnVolumeCheckIsSdBus.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1407F3CF0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14082EA28 (PnpHardwareConfigCreateBootDriverFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResetEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
