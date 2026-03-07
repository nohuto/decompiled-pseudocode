__int64 __fastcall HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency(__int64 a1)
{
  HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
