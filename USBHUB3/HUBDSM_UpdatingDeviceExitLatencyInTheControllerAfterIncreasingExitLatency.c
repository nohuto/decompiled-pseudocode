/*
 * XREFs of HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency @ 0x1C0025600
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C00270F4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency(__int64 a1)
{
  HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
